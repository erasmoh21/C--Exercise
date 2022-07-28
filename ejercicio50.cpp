#include<iostream>
#include<string.h>
using namespace std;

char cadenaCaracter[50];

void pregunta() {
   cout << "Digite la cadena de caracteres: ";
   cin.getline(cadenaCaracter,50);
}

char* pasarCadenaAOtra(char caracter[],int numeroDeCaracteres) {
   char* cadenaDeCaracteres = new char[numeroDeCaracteres];   

   for(int i = 0; i < strlen(caracter); i++) {
      cadenaDeCaracteres[i] = caracter[i];   
   }

   return cadenaDeCaracteres;
}

int main() {
   pregunta();
   char* otroArreglo = new char[strlen(cadenaCaracter)];
   
   for(int i = 0; i < strlen(cadenaCaracter); i++) {
      otroArreglo[i] = cadenaCaracter[i]; 
   }

   for(int i = 0; i < strlen(cadenaCaracter); i++) {
      cout << pasarCadenaAOtra(otroArreglo,strlen(cadenaCaracter))[i];
   }
   cout << endl;
  
   return 0;
}
