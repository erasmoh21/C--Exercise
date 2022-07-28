#include<iostream>
using namespace std;

int base=0,potencia=0;

void pregunta() {
   cout << "Digite la base: ";
   cin >> base;
   cout << "Digite la potencia: ";
   cin >> potencia;
}

int calculoDePotencia(int numero,int potencia) {
    int contador = 0;   
    for(int i =0; i < potencia; i++) {
       contador += numero;
    }

    return contador;
}

int main() {

   pregunta();
   cout << calculoDePotencia(base,potencia); 

   return 0;
}
