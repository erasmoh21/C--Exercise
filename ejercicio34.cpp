#include<iostream>
using namespace std;

int numeroElementosArray = 0;

void pregunta() {
   cout << "Digite el numero de elementos del array: ";
   cin >> numeroElementosArray;
}

void rellenarArray(int array[]) {

   for(int i = 0; i < numeroElementosArray; i++) {
      cout << "Digite el elemento del array: ";
      cin >> array[i];
   }
}

int multiplicacionDeElementos(int array[]) {
   int multiplicador = 1;

   for(int i = 0; i < numeroElementosArray; i++) {
      multiplicador *= array[i];
   }
   return multiplicador;
}

int main() {

   pregunta();
   int array[numeroElementosArray];
   rellenarArray(array);
   cout << "\nLa multiplicacion acumulada de los elementos del array es -> " << multiplicacionDeElementos(array) << endl;

   return 0;
}
