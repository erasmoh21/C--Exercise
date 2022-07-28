#include<iostream>
using namespace std;

void ordenamientoSeleccion(int arr[]) {
   int aux=0,min=0;

   for(int i = 0; i < 5; i++) {
      min = i;
      for(int j = i+1; j<5; j++) {
         if(arr[j] < arr[min]) {
            min = j;
         }
      }
      aux = arr[i];
      arr[i] = arr[min];
      arr[min] = aux;
   }
}

void mostrarArreglo(int arr[]) {
   for(int i = 0; i < 5; i++) {
      cout << arr[i];
   }
}

int main() {
   int arr[] = {5,2,4,1,3};

   cout << "Arreglo desordenado: ";
   mostrarArreglo(arr);
   ordenamientoSeleccion(arr);
   cout << "\nArreglo ordenado: ";
   mostrarArreglo(arr); 
   cout << endl;




   return 0;
}
