#include<iostream>
using namespace std;

int numeroElementosArray = 0;

void preguntar() {
   cout << "Digite el numero de elementos del array: ";
   cin >> numeroElementosArray;
}

void rellenarArray(int array[]) {
   int i=0;

   while(i < numeroElementosArray) {
      cout << "Digite el elemento: ";
      cin >> array[i];
      i++;
   }
}

void mostrarArrayAlReves(int array[]) {
   int i = numeroElementosArray-1;

   while(i >= 0) {
      cout << array[i] << " "; 
      i--;
   }
}

int main() {

   preguntar();
   int array[numeroElementosArray];
   rellenarArray(array);
   cout << endl;
   mostrarArrayAlReves(array);
   cout << endl;

   return 0;
}
