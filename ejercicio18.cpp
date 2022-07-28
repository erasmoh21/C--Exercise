#include<iostream>
using namespace std;

int numero = 0;

void pedirNumero() {
   cout << "Digite un numero: ";
   cin >> numero;
}

void imprimirTablaDeMultiplicar() {
   for(int i = 1; i <= 10; i++ ) {
      cout << numero << " * " << i << " = " << numero*i << endl;
   }
}

int main() {
   
   pedirNumero();
   imprimirTablaDeMultiplicar();

   return 0;
}
