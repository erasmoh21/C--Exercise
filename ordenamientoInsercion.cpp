#include<iostream>
using namespace std;

void ordenamientoPorInsercion(int arr[]) {
   int pos=0,aux=0;
   
   for(int i = 0; i < 5; i++) {
      pos = i;
      aux = arr[i];
      
      while((pos > 0) && (arr[pos-1] > aux)) {
         arr[pos] = arr[pos-1];
         pos--;
      }
      arr[pos] = aux;
   }
}

void mostrarArray(int arr[]) {
   for(int i = 0; i < 5; i++) {
      cout << arr[i];
   }
}


int main() {
   int arr[] = {4,2,5,1,3};

   cout << "Arreglo desordenado: ";
   mostrarArray(arr);
   ordenamientoPorInsercion(arr);
   cout << "\nArreglo ordenado: ";
   mostrarArray(arr);
   cout << endl;





   return 0;
}
