#include<iostream>

bool numeroNegativo(int n) {
   return n < 0 ? true : false;
}

void printNegativeNumber(bool confirmation) {
    if(confirmation) {
       std::cout << "\nThe number is negative\n"; 
    }
    else {
        std::cout << "\nThe number is positive\n";
    }
}

int main() {
   int numero=0;

   std::cout << "Digite el numero que desee: ";
   std::cin >> numero;

   printNegativeNumber(numeroNegativo(numero));

   return 0;
}
