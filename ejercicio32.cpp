#include<iostream>
using namespace std;

int numero = 0;

bool numeroPrimo(int numero) {
   int contador = 0;

   for(int i = 1; i <= 9; i++) {
      if(numero % i == 0) {
         contador++;
      }  
      if(i == 9) {
         if(contador != 2) {
            return false;
         }
      } 
   }
   
   return true;
}

void pregunta() {
   cout << "Digite el numero: ";
   cin >> numero;
}

void representacionDeFactores() {
   int resultado = 0;
   for(int i = 2; i <= numero; i++) {
      if(resultado == 1) {
         break;
      }
      for(int j = 0; resultado != 1; j++) {
         if(resultado % i == 0) {
            if(numeroPrimo(i)) {
               resultado = numero / i;
               numero = resultado;
               cout << i << " ";
            }
            else {
               break;
            }
         }
         else {
            break;
         }
      }  
   }
}

int main() {

   pregunta();
   representacionDeFactores();
   cout << endl;


   return 0;
}
