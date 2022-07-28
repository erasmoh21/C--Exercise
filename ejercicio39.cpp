#include<iostream>
using namespace std;

void llenarArreglo(int arr1[],int arr2[],int arr3[]) {
   int iterator = 0;

   for(int i = 0; i <2; i++) {
      for(int j = 0; j < 5; j++) {
         if(i != 0) {
           arr3[iterator] = arr2[j]; 
           iterator++;
         } 
         if(i == 0) {
            arr3[iterator] = arr1[j];
            iterator++;
         }
      }
   }
}


int main() {
   int arreglo1[] = {1,2,3,4,5};
   int arreglo2[] = {6,7,8,9,10};
   int ultimoArreglo[10];

   cout << "Elementos del primer arreglo: "; 
   for(int i = 0; i < 5; i++) {
      cout << arreglo1[i] << " ";
   }

   cout << "\nElementos del segundo arreglo: ";
   for(int i = 0; i < 5; i++) {
      cout << arreglo2[i] << " ";
   }

   llenarArreglo(arreglo1,arreglo2,ultimoArreglo);

   cout << "\nElementos del ultimo arreglo: ";
   for(int i = 0; i < 10; i++) {
      cout << ultimoArreglo[i] << " ";
   }
   cout << endl;

   return 0;
}
