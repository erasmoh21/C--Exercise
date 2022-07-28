#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

char palabra[50];

void pregunta() {
   cout << "Digite una palabra en mayuscula: ";
   cin.getline(palabra,50);
}

bool validadorDeLetra(char* palabra) {
   return palabra[0] == 'A' ? true : false;
}

void convertirNombreAMinuscula(char* palabra) {

   for(int i = 0; i < strlen(palabra); i++) {
      palabra[i] = tolower(palabra[i]);      
   }
}

int main() {
   pregunta();
   if(validadorDeLetra(palabra)) {
      convertirNombreAMinuscula(palabra);
      cout << palabra << endl;
   }
   else if(!validadorDeLetra(palabra)) {
      cout << palabra<< endl;
   }

   return 0;
}
