#include<iostream>

int numeroMayor(int n1,int n2) {
  return n1 > n2 ? n1 : n2; 
}


int main() {
   int numero1=0;
   int numero2=0;

   std::cout << "Digite el numero 1: ";
   std::cin >> numero1;
   std::cout << "Digite el numero 2: ";
   std::cin >> numero2;

   std::cout << "El numero mayor es: " << numeroMayor(numero1,numero2);    


   return 0;
}
