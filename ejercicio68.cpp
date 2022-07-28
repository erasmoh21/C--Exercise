#include<iostream>
#include<math.h>
using namespace std;

float llamada_al_cuadrado(float* numero) {
   return pow(*numero,2);
}


int main() {
   float numero=0.0;

   cout << "Digite un numero: ";
   cin >> numero;

   cout << "El resultado es -> " << llamada_al_cuadrado(&numero) << "\n";
 
   return 0;
}
