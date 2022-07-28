#include<iostream>
using namespace std;

void determinarNumeroPrimo(int* numero) {
   int i = 0;
   int contador = 0;
   for(; i < 10;) {
      if(i % *numero == 0) contador++; 
      if(i == 9) {
         if(contador > 2) cout << "El numero " << *numero << " no es primo -> " << numero << endl;
         if(contador == 2) cout << "El numero "<< *numero << " es primo -> "<< numero << endl;
      }
      i++;
   }
}

int main() {
   int numero = 5;
   determinarNumeroPrimo(&numero);


     


   return 0;
}
