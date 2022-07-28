#include<iostream>
#include<ctype.h>
using namespace std;

bool confirmacionVocal(char a) {
   a = tolower(a);

   return a == 'a' ||  a == 'e' || a == 'i' || a == 'o' || a == 'u' ? true : false;
}

bool confirmacionLetraMinuscula(char a ) {
   return a == tolower(a) ? true : false;
}

void printConfirmation(bool confirmationVocal,bool confirmationLowerLetter) {
    if(confirmationVocal && confirmationLowerLetter) {
        cout << "\nis a lower vocal\n"; 
    }
    else if(!confirmationVocal && !confirmationLowerLetter) {
        cout << "\n it is not vocal, is upper\n";
    }
    else if(confirmationVocal && !confirmationLowerLetter) {
        cout << "\nIs a upper vocal\n";
    }
    else if(!confirmationVocal && confirmationLowerLetter) {
        cout << "\nIt is not a vocal, is lower\n";
    }
}

int main() {
   char letter = ' ';

   cout << "Digite una letra: ";
   cin >> letter;

   printConfirmation(confirmacionVocal(letter),confirmacionLetraMinuscula(letter));

   return 0;
}
