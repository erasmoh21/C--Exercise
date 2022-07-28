#include<iostream>
using namespace std;

int numero = 0;

void pregunta() {
   cout << "Digite el numero: ";
   cin >> numero;
}

int calculoDeSecuencia(int& numero) {

   int acumulador = 0;

   for(int i = 1; i <= numero; i++) {
      acumulador += i - (i+1); 
   }

   return acumulador;
}

int main() {

   pregunta();
   cout << "El calculo de la secuencia seria " << calculoDeSecuencia(numero) << endl;


   return 0;
}
