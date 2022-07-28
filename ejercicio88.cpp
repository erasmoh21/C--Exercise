#include<iostream>
using namespace std;

void confirmarSiEsPar(int* numero) {
   if(*numero % 2 == 0) {
      cout << "El numero " << *numero << " es par " << "direccion de memoria " << &numero << endl;
   }
   else {
      cout << "El numero " << *numero << " es impar " << "direccion de memoria " << &numero << endl;
   }   
}

int main() {
   int numero = 3;   
   confirmarSiEsPar(&numero);




   return 0;
}
