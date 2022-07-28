#include<iostream>
using namespace std;

int numero = 0;

void pregunta() {
   cout << "Digite un numero: ";
   cin >> numero;
}

int calculoDeNumero(int numero) {
   int acumulador = 1;

   for(int i = 1; i <= numero; i++) {
      acumulador *= i;      
   }

   return acumulador;
}


int main() {
   
   pregunta();
   cout << calculoDeNumero(numero);

   return 0;
}
