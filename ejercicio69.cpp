#include<iostream>
#include<math.h>
using namespace std;

unsigned int funpot(int* numeroElevado,int* potencia) {
   if(*potencia < 0) {
      return -1;
   }
   
   return pow(*numeroElevado,*potencia);
} 


int main() {
   int numeroElevado=0,potencia=0;

   cout << "Digite el numero a elevar: ";
   cin >> numeroElevado;
   cout << "Digite la potencia: ";
   cin >> potencia;

   if(funpot(&numeroElevado,&potencia) == -1) {
      cout << "La potencia debe ser positiva" << endl; 
   }
   else {
      cout << funpot(&numeroElevado,&potencia) << endl;
   }

   return 0;
} 
