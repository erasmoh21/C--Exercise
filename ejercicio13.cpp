#include<iostream>
#include<stdlib.h>
using namespace std;

int* pedidoDeNumeros() {
   int* numeros = new int[4];
   for(int i = 0; i < 4; i++) {
      cout << "Digite el numero ["<<i+1<<"]: ";
      cin >> numeros[i];
   }

   return numeros;
}

bool validacionDeNumeros(int numeros[]) {

   for(int i = 0; i < 4; i++) {
      if(numeros[3] == numeros[i] && i != 3) {
         return true; 
      }
   }
   return false;
}

std::string showMessage(bool validationOfNumbers) {
    std::string correct = "The fourth number is unique\n";
    std::string incorrect = "The fourth number is not unique\n";
    return validationOfNumbers ? incorrect : correct; 
}

int main() {
   int* numeros[4];
   *numeros = pedidoDeNumeros();
   
   std::cout << showMessage(validacionDeNumeros(*numeros));

   delete[] *numeros;
   return 0;
}
