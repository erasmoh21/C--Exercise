//Queda pendiente este ejercicio,tengo que hacer mi propio strrev()
#include<iostream>
#include<string.h>
using namespace std;

char palabra[50];

void pregunta() {
   cout << "Digite una palabra: ";
   cin.getline(palabra,50);
}

char strrev(char* palabra) {
   char nuevaPalabra[50];
   int i = 0,j=0; 
   
   for(i = strlen(palabra)-1,j=0; i >= 0;i--,j++) { 
      nuevaPalabra[j] = palabra[i];
   }

   return *nuevaPalabra;
}

int main() {
   pregunta();
   
   if(strrev(palabra) == *palabra) {
      cout << "Es palindromo" << endl;
   }
   else {
      cout << "No es palindromo" << endl;
   }

   return 0;
}

