#include<iostream>
using namespace std;

void pregunta(int* numero) {
   cout << "Digite la longitud del arreglo: ";
   cin >> *numero;
}

void rellenarArreglo(int arr[],int numero) {
   for(size_t i = 0; i < numero; i++) {
      cout << "Digite un numero: ";
      cin >> arr[i];
   }
}

int busquedaMenorElemento(int arr[],int numero) {
   int numeroMayor = 999999;
   for(size_t i = 0; i < numero; i++) {
      if(arr[i] < numeroMayor) {
         numeroMayor = arr[i];
      }
   }
   return numeroMayor;
}


int main() {
   int numero = 0; 
   pregunta(&numero);
   int* arreglo = new int[numero];
   rellenarArreglo(arreglo,numero);
   cout <<"El menor elemento es " << busquedaMenorElemento(arreglo,numero) << endl;

   delete[] arreglo;
   return 0;
}
