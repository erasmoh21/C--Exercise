#include<iostream>
#include<ctype.h>
using std::cout;
using std::cin;
using std::endl;

bool validacionCaracter(char a) {
   return a == tolower(a) ? true : false;
}

void printConfirmation(bool confirmation) {
    if(confirmation) {
        cout << "\nIs lower\n";
    }
    else {
        cout << "\nIs upper\n";
    }
}

int main() {
   char chars = ' ';
   
   cout << "Digite un caracter: ";
   cin >> chars;

   printConfirmation(validacionCaracter(chars));

   return 0;
}
