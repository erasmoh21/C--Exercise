#include<iostream>
using namespace std;

int numeroElementosArray=0;

void pregunta() {
   cout << "Digite el numero de elemetos: ";
   cin >> numeroElementosArray;
}

void rellenarArray(int array[]) {
   int i = 0;
   while(i < numeroElementosArray) {
      cout << "Digite un elemento: ";
      cin >> array[i];
      i++;
   }
}

void representarIndiceDeElementos(int array[]) {
   int i = 0;

   while(i < numeroElementosArray) {
      cout << array[i] << " -> " << i << endl;
      i++;
   }
}

int main() {

   pregunta();
   int array[numeroElementosArray];
   rellenarArray(array);
   cout << endl;
   representarIndiceDeElementos(array);

   return 0;
}
