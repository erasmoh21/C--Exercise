#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

char palabra[50],nuevaPalabra[50];

void pregunta() {
   cout << "Digite una palabra: ";
   cin.getline(palabra,50);
   cout << "Digite una nueva palabra: ";
   cin.getline(nuevaPalabra,50);
}

void convertirAMayuscula(char* c) {
   for(int i = 0; i < strlen(c); i++) {
      c[i] = toupper(c[i]);
   }
}

bool compararCaracteres(char* c,char* b) {
   if(*c != *b) {
      return false;
   }

   return true;
} 


int main() {
   pregunta();
   convertirAMayuscula(palabra);
   convertirAMayuscula(nuevaPalabra);   
   if(compararCaracteres(palabra,nuevaPalabra)) {
      cout << "Son iguales" << endl;
   }
   else {
      cout << "Son diferentes" << endl;
   }

   return 0;
}
