#include<iostream>
using namespace std;

int numeroElementosArray = 0;

void pregunta() {
   cout << "Digite la cantidad de elementos que desea en un array: ";
   cin >> numeroElementosArray;
}

void rellenarArreglo(int array[]) {
   int i = 0;

   do{
      cout << "Digite el numero: ";
      cin >> array[i];
      i++;
   }while(i < numeroElementosArray);
}

int buscarNumeroMayor(int array[]) {
   int numero = 0;
   for(int i = 0; i < numeroElementosArray; i++) {
      if(array[i] > numero) {
         numero = array[i];
      } 
   }

   return numero;
}

int main() {

   pregunta();
   int array[numeroElementosArray];
   rellenarArreglo(array);
   cout << "\nEl numero mayor es " << buscarNumeroMayor(array) << endl;   

   return 0;
}
