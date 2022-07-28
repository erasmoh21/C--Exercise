#include<iostream>
#include<string>
using namespace std;

void pregunta(std::string* nombreUsuario) {
   cout << "Digite su nombre -> "; 
   cin >> *nombreUsuario;
}

void cantidadDeVocales(std::string& nombreUsuario,int* a,int* e,int* i,int* o,int* u) {
   for(size_t j = 0; j < nombreUsuario.size(); j++) {
      switch(nombreUsuario[j]) {
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
   cout << "\nLa cantidad de vocales del nombre es -> \n";
   cout << "a -> " << a << endl;
   cout << "e -> " << e << endl;
   cout << "i -> " << i << endl;
   cout << "o -> " << o << endl;
   cout << "u -> " << u << endl;
}

int main() {
   std::string nombre = "";
   int a=0,e=0,i=0,o=0,u=0;
   
   pregunta(&nombre);
   cantidadDeVocales(nombre,&a,&e,&i,&o,&u);    
   mostrarCantidadDeVocales(a,e,i,o,u);

   return 0;
}
