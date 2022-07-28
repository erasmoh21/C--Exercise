#include<iostream>
#include<string.h>
using namespace std;

int convertirRomanoADecimal(std::string numero) {
    int acumulador = 0;
    for(int i = 0; i < numero.length(); i++) {
        if(numero.at(i) =='M') {
            acumulador += 1000;
        }
        else if(numero.at(i) == 'D') {
            acumulador += 500;
        }
        else if(numero.at(i) == 'C') {
            acumulador += 100;
        }
        else if(numero.at(i) == 'L') {
            acumulador += 50;
        }
        else if(numero.at(i) == 'X') {
            acumulador += 10;
        }
        else if(numero.at(i) == 'V') {
            acumulador += 5;
        }
        else if(numero.at(i) == 'I') {
            acumulador += 1;
        }
    }

    return acumulador;
}

void showMessage(int number) {
    std::cout << "The deciml number would be -> " << number << std::endl;
}

int main() {
    std::string  numero;

    cout << "Digite un numero en romanos: ";
    getline(cin,numero);
    int decimalNumber = convertirRomanoADecimal(numero);
 
    showMessage(decimalNumber);
}
