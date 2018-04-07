#include <iostream>

unsigned long long int fibbonacciIterativo(int numtermo){

unsigned long long int a = 0;
unsigned long long int  b = 1;

				  //gera a sequencia
				  for (int i = 1; i < numtermo; i++){	

unsigned long long int aux;
					aux = a + b;
					a = b;
					b = aux;
					
				  }
	return b;
	
};

unsigned long long int fibbonacciRecursivo(int numtermo){

	if(numtermo <=2)
		return 1;
	else
		return fibbonacciRecursivo(numtermo - 1) + fibbonacciRecursivo(numtermo - 2);
};


int main(){
int numtermo;
std::cout << "Entre com o numero de termo de fibonacci:";
std:: cin >> numtermo;

std:: cout <<"Funcao interativa: "<< fibbonacciIterativo(numtermo)<< std::endl;
std:: cout <<"Funcao recursiva: "<< fibbonacciRecursivo(numtermo)<< std::endl;
}