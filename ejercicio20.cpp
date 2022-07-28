#include<iostream>
using namespace std;

int sumaDeNumerosEnteros() {
   int contador = 0;
   for(int i = 1; i <= 10; i++) {
      contador += i*2;
   }

   return contador;
}


int main() {

   cout << sumaDeNumerosEnteros();


   return 0;
}
