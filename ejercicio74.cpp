#include<iostream>
using namespace std;

void cambio(int& numero,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno) {
   int iterador = numero;
   for(int i = 0; i < iterador; i++) {
      if(cien < numero) {
         cout << 100 << " ";
         numero -= 100;
      }
      else if(cincuenta < numero) {
         cout << 50 << " ";
         numero -= 50;         
      }
      else if(veinte < numero) {
         cout << 20 << " ";
         numero -= 20;
      }
      else if(diez < numero) {
         cout << 10 << " ";
         numero -= 10;
      }
      else if(cinco < numero) {
         cout << 5 << " ";
         numero -= 5;
      }
      else if(uno <= numero) {
         cout << 1 << " ";
         numero -= 1;
      }
   }
}

int main() {
   int numero=0,cien=100,cincuenta=50,veinte=20,diez=10,cinco=5,uno=1;

   cout << "Digite un numero ";
   cin >> numero;

   cambio(numero,cien,cincuenta,veinte,diez,cinco,uno);
   cout << endl;
   


   return 0;
}
