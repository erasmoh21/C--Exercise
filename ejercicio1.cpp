#include<iostream>
using namespace std;

void operacionesMatematicas(int numero1,int numero2) {

   cout << "La suma de los numeros es: " << numero1 + numero2 << endl;
   cout << "La resta de los numeros es: " << numero1 - numero2 << endl;
   cout << "La multiplicacion de los numero es: " << numero1 * numero2 << endl;
   cout << "La division de los numeros es: " << numero1 / numero2;
}


int main() {
   int numero1=0,numero2=0;

   cout << "Digite el numero 1: ";
   cin >> numero1;
   cout << "Digite el numero 2: ";
   cin >> numero2;

   operacionesMatematicas(numero1,numero2); 

   return 0;
}
