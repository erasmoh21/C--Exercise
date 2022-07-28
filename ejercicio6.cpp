#include<iostream>
using std::cout;
using std::cin;
using std::endl;

bool numeroPar(int numero) {
   return numero % 2 == 0 ? true : false;
}

void printConfirmation(bool confirmation) {
    if(confirmation) {
        cout << "\nThe number is odd\n";
    }
    else {
        cout << "\nThe number is even\n";
    }
}

int main() {
   int numero=0;
   
   cout << "Digite un el numero que quiera: ";
   cin >> numero;
   
   printConfirmation(numeroPar(numero));

   return 0;
}
