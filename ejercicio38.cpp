#include<iostream>
using namespace std;

int numeroElementos = 0;

void pregunta() {
   cout << "Digite el numero de elementos: ";
   cin >> numeroElementos;
}

void rellenarArreglo(int array[]) {

   for(int i = 0; i < numeroElementos; i++) {
      cout << "Digite un numero: ";
      cin >> array[i];
   }
}

int buscarSumatoria(int array[]) {
   int sumatoria = 0,numeroEncontrado=0;
   for(int i = 0; i < numeroElementos; i++) {
      sumatoria += array[i];
      for(int j = 0; j < numeroElementos; j++) {
         if(sumatoria == array[i] && i != j) {
            numeroEncontrado = array[j];
         } 
      }
   }

   return numeroEncontrado;
}

int main() {

   pregunta();
   int array[numeroElementos];
   rellenarArreglo(array);
   cout << "El numero es " << buscarSumatoria(array);
   cout << endl;

   return 0;
}
