#include<iostream>
using namespace std;

bool validarRango(int edad) {
   return edad >= 18 && edad <= 25 ? true : false;
}

void printRangeOfAge(bool confirmation) {
    if(confirmation) {
        cout << "\nThe age is in the range [18-25]\n";
    }
    else {
        cout << "\nThe age is not in the range [18-25]\n";
    }
}

int main() {
   int edad=0;

   cout << "Digite su edad: ";
   cin >> edad;

   printRangeOfAge(validarRango(edad));

   return 0;
}
