#include<iostream>
using namespace std;

void pregunta(int* numero) {
   cout << "Digite el numero de longitud del arreglo: ";
   cin >> *numero;
} 

void rellenarArreglo(int arr[],int& numero) {
   for(size_t i = 0; i < numero; i++) {
      cout << "Digite el numero: ";
      cin >> arr[i];
   }
}

void ordenarArreglo(int arr[],int& numero) {
   int aux = 0;

   for(size_t i = 0; i < numero; i++) {
      for(size_t j = 0; j < numero; j++) {
         if(arr[i] < arr[j]) {
            aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
         }     
      }
   }
}

void mostrarArreglo(int arr[],int& numero) {
   for(size_t i = 0; i < numero; i++) {
      cout << arr[i] << " " << endl;
   }
}

int main() {
   int numero = 0;

   pregunta(&numero);
   int* arr = new int[numero];
   rellenarArreglo(arr,numero); 
   cout << "Arreglo desordenado " << endl;
   mostrarArreglo(arr,numero);
   ordenarArreglo(arr,numero);
   cout << "Arreglo ordenado " << endl;
   mostrarArreglo(arr,numero);

   return 0;
}
