#include<iostream>
using namespace std;

int numero = 0;

void pregunta() {
   cout << "Digite un numero: ";
   cin >> numero;
}

int calculoDeSecuencia(int numero) {
   int acumulador = 0;
   for(int i = 1; i <= numero; i++) {
      acumulador += i; 
   }
   
   return acumulador;
}

int main() {

   pregunta();
   cout << calculoDeSecuencia(numero);

   return 0;
}
