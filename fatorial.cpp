#include <iostream>

using namespace std;

//recursivo
unsigned long int fatorialRec(int n){
	if(n <= 1){
		return 1;
	}

	return n*fatorialRec(n-1);
}

//iterativo
unsigned long int fatorialIt(int n){
	unsigned long int f = 1;

	for(int i = 0; i < n; i++){
		f *= n-i;
	}

	return f;
}
//testes
int main(){
	int n = 50;
	//cout << "Fatorial = " << fatorialRec(n) << endl;
	cout << "Fatorial = " << fatorialIt(n) << endl;
}