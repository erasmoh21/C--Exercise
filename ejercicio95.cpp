#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

void pregunta(std::string* oracion) {
   cout << "Digite palabras: ";
   getline(cin,*oracion);
} 

void calculoDeVocales(std::string& oracion,int* a,int* e,int* i,int* o,int* u) {
   for(size_t j = 0; j < oracion.size(); j++) {
      switch(tolower(oracion[j])) {
         case 'a':
            (*a)++;
            break;
         case 'e':
            (*e)++;
            break;
         case 'i':
            (*i)++;
            break;
         case 'o':
            (*o)++;
            break;
         case 'u':
            (*u)++;
            break;
      }
   }
}

void mostrarCantidadDeVocales(int& a,int& e,int& i,int& o,int& u) {
   cout << "\nLa cantidad de vocales: \n";
   cout << "a -> " << a << endl;
   cout << "e -> " << e << endl;
   cout << "i -> " << i << endl;
   cout << "o -> " << o << endl;
   cout << "u -> " << u << endl;
}

int main() {
   std::string oracion = "";    
   int a=0,e=0,i=0,o=0,u=0;

   pregunta(&oracion);   
   calculoDeVocales(oracion,&a,&e,&i,&o,&u);   
   mostrarCantidadDeVocales(a,e,i,o,u); 

   return 0;
}
