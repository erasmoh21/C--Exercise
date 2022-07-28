#include<iostream>
using namespace std;

int numero = 0;

void pregunta() {
   cout << "Digite el numero que desee: ";
   cin >> numero;
}

void calculoSerieFibonacci(int numero) {
   int x = 0,y=1,z=1; 
   
   cout << 1 << "\t";
   for(int i = 1; i < numero; i++) {
      z = x + y;
      cout << z << "\t";
      x = y;
      y = z;
   }
}


int main() {

   pregunta();
   calculoSerieFibonacci(numero);

   return 0;
}
