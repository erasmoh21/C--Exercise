#include<iostream>
using namespace std;

void menu() {
   int numero=0,contador=0;
   do {
      cout << "Digite un numero: ";
      cin >> numero;
      contador++;
   }while(numero != 0);

   cout << "\nEl numero de veces que se digito un numero diferente de cero fue " << contador-1 << endl;
}



int main() {

   menu();

   return 0;
}
