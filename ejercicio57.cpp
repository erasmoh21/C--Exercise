#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

char numeroEntero[50],numeroReal[50];

void pregunta() {

   cout << "Digite un numero entero: ";
   cin.getline(numeroEntero,50);
   cout << "Digite un numero real: ";
   cin.getline(numeroReal,50);
}

float sumaDeNumeros(char* numero, char* numero2) {
   int numeroEntero = atoi(numero);
   float numeroReal = atof(numero2);

   return numeroEntero + numeroReal;
}

int main() {
   pregunta();
   cout << "La suma es -> " << sumaDeNumeros(numeroEntero,numeroReal)<< endl;



   return 0;
}
