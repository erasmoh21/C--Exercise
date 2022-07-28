#include<iostream>
using namespace std;

int numero = 0;

void pregunta() {
   cout << "Digite un numero: ";
   cin >> numero;
}

int calculoSecuencia(int numero) {
   int contador = 0;

   for(int i = 1; i <= numero; i+=2) {
      contador += i;    
   }
   
   return contador;
}

int main() {
   
   pregunta();
   cout << calculoSecuencia(numero);


   return 0;
}
