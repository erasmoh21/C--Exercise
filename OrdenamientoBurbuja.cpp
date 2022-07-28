#include<iostream>
using namespace std;

void ordenamientoBurbuja(int arr[]) {
   int aux = 0;

   for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 5; j++) {
        if(arr[j] > arr[i]) {
           aux = arr[j];
           arr[j] = arr[i];
           arr[i] = aux;
        } 
      }
   }
}

void mostrarArray(int arr[]) {
   for(int i = 0; i < 5; i++) {
      cout << arr[i];
   }
}

int main() {
   int array[] = {3,2,5,4,1};
   cout << "Array desordenado ";
   mostrarArray(array); 
   ordenamientoBurbuja(array);
   cout << "\nArray ordenado: ";
   mostrarArray(array);   
   cout << endl;

   return 0;
}
