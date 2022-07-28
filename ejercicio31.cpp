#include<iostream>
#include<stdlib.h>
using namespace std;

int numeroIntentos = 0;

void inicioPrograma() {
   int numero = 0;
   srand(time(NULL));
   int numeroAleatorio = rand() % 100 + 1;

   do {
      cout << "Digite el numero: ";
      cin >> numero;
      numeroIntentos++;

      if(numero > numeroAleatorio) {
         cout << "El numero es mayor" << endl;
      }
      else {
         cout << "El numero es menor" << endl;
      }

   }while(numero != numeroAleatorio);


} 


int main() {

   inicioPrograma();
   cout << "\nFelicitaciones :) " << " el numero de intentos fue " << numeroIntentos << endl;

   return 0;
}
