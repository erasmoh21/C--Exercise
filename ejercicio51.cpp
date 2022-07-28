#include<iostream>
#include<string.h>
using namespace std;

char caracter1[50],caracter2[50];

void pregunta() {

   cout << "Digite una palabra: ";
   cin.getline(caracter1,50);
   cout << "Digite otra palabra: ";
   cin.getline(caracter2,50);
}

int validadorDeCaracteres(const char* c1,const char* c2) {
   if(strcmp(c1,c2) == 0) {
      return 0;
   }
   if(strcmp(c1,c2) > 0) {
      return 1;
   }
   return -1;
}

int main() {

   pregunta();
   if(validadorDeCaracteres(caracter1,caracter2) == 0) {
      cout << "Las palabras son iguales " << endl;
   }
   else if(validadorDeCaracteres(caracter1,caracter2) == 1) {
      cout << caracter1 << " es mayor alfabeticamente" << endl;
   }
   else if(validadorDeCaracteres(caracter1,caracter2) == -1) {
      cout << caracter2 << " es mayor alfabeticamente" << endl;
   }

   return 0;
}
