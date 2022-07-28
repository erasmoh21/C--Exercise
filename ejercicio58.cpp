#include<iostream>
#include<string.h>
using namespace std;

char palabra[50];

void pregunta() {
   cout << "Digite la palabra: ";
   cin.getline(palabra,50);
}

void conteoDeVocales(char* palabra) {
   int vocalA=0,vocalE=0,vocalI=0,vocalO=0,vocalU=0;

   for(int i = 0; i < strlen(palabra); i++) {
      if(palabra[i] == 'a' || palabra[i] == 'A') {
         vocalA++;
      }
      else if(palabra[i] == 'e' || palabra[i] == 'E') {
         vocalE++;
      }
      else if(palabra[i] == 'i' || palabra[i] == 'I') {
         vocalI++;
      }
      else if(palabra[i] == 'o' || palabra[i] == 'O') {
         vocalO++;
      }
      else if(palabra[i] == 'u' || palabra[i] == 'U') {
         vocalU++;
      }
   }
   
   cout << "La vocal 'a' aparece -> " << vocalA << " veces" << endl;
   cout << "La vocal 'e' aparece -> " << vocalE << " veces" << endl;
   cout << "La vocal 'i' aparece -> " << vocalI << " veces" << endl;
   cout << "La vocal 'o' aparece -> " << vocalO << " veces" << endl;
   cout << "La vocal 'u' aparece -> " << vocalU << " veces" << endl;

}

int main() {
   pregunta();
   conteoDeVocales(palabra);




   return 0;
}
