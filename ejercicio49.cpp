#include<iostream>
#include<string.h>
using namespace std;

char cadena[20];

void pregunta() {
   cout << "Digite una cadena de caracteres: ";
   cin.getline(cadena,20);
}

bool validarCadena(char* cadena) {
   if(strlen(cadena) > 10) {
      return true;
   } 
   return false;
}

int main() {
   pregunta();
   if(validarCadena(cadena)) {
      cout << "La palabra es mayor a diez caracteres" << endl;
   }
   else {
      for(int i = 0; i < strlen(cadena); i++) {
         cout << cadena[i];
      }
      cout << endl;
   }

   return 0;
}
