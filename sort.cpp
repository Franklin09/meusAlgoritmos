#include <iostream>
#define N 10

using namespace std;

void printVector(int vet[]) {
   for(int i = 0; i < N; i++)
      cout << vet[i] << " ";
   cout << endl;
}

void insertionSort(int vet[]) {
   int pivo;

   for(int i = 1, j; i < N; i++) {
      pivo = vet[i];
      for(j = i-1; j > -1; j--) {
         if(vet[j] > pivo)
            vet[j+1] = vet[j];
         else break;
      }
      vet[j+1] = pivo;

   }
}

void selectionSort(int vet[]) {
   int indMin, aux;

   for(int i = 0; i < N-1; i++) {
      indMin = i;
      for(int j = i+1; j < N; j++) {
         if(vet[j] < vet[indMin])
            indMin = j;
      }

      if(indMin != i) {
         aux = vet[indMin];
         vet[indMin] = vet[i];
         vet[i] = aux;
      }

   }
}

void bubbleSort(int vet[]) {
   int aux;

   for(int j = 0; j < N-1; j++) {
      for(int i = 0; i < N-1-j; i++) {
         if(vet[i] > vet[i+1]) {
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
         }
      }
   }
}

int partition(int vet[], int left, int right) {
    int pivot = vet[right];
    int l = left, r = right-1;
 
    while(true) {
        while(vet[l] < pivot) l++;
        while(vet[r] > pivot) r--;
 
        if(l < r) swap(vet[l], vet[r]);
        else break;
    }
 
    swap(vet[l], vet[right]);
    return l;
}
 
void quickSort(int vet[], int left, int right) {
    int indPivot;
 
    if(left < right) {
        indPivot = partition(vet, left, right);
 
        quickSort(vet, left, indPivot-1);
        quickSort(vet, indPivot+1, right);
    }
}
//testes
int main() {
   int vet[N] = {7, -5, 83, 21, 11, 0, 14, 99, 666, -30}; /*10 elementos*/

   // Imprimir vetor original
   cout << "Vetor original: ";
   printVector(vet);

   // Realizar ordenação
   //bubbleSort(vet);
   //selectionSort(vet);
   //insertionSort(vet);
   quickSort(vet,0,9); //begin e end

   // Imprimir vetor ordenado
   cout << "Vetor ordenado: ";
   printVector(vet);

   return 0;
}