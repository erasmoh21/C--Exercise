#include<iostream>
using namespace std;

int numeroElementosArray = 0;

void pregunta() {
   cout << "Digite los elementos del array: ";
   cin >> numeroElementosArray;
}

void rellenarArray(int array[]) {
   for(int i = 0; i < numeroElementosArray; i++) {
      cout << "Digite un numero: ";
      cin >> array[i]; 
   }
}

int sumaElementosArray(int array[]) {
   int sumador = 0;

   for(int i = 0; i < numeroElementosArray; i++) {
      sumador += array[i];
   }
   
   return sumador;
}

int main() {
   pregunta();
   int array[numeroElementosArray];
   rellenarArray(array);
   cout << "\nLa sumatoria de los elementos del array es: " << sumaElementosArray(array) << endl;


   return 0;
}
