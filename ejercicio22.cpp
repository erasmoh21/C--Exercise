#include<iostream>
using namespace std;

int sumaDeRangosDeValores() {
   int contador = 0,numero=0;

   do {
      cout << "Digite un numero: ";
      cin >> numero;
      contador++;
   }while((numero <= 20 ) && numero != 0);


   return contador-1;
}


int main() {
   cout << sumaDeRangosDeValores();

   return 0;
}
