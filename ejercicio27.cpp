#include<iostream>
#include<math.h>
using namespace std;

int numero = 0;

void pregunta() {
   cout << "Digite un numero: ";
   cin >> numero;
}

int calculoDeSecuencia(int numero) {
   int acumulador = 0;

   for(int i = 1; i <= numero; i++) {
      acumulador += pow(2,i); 
   }
   
   return acumulador;
}

int main() {

   pregunta();
   cout << "El resultado de la suma de secuencia seria " << calculoDeSecuencia(numero) << endl; 


   return 0;
}
