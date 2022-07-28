#include<iostream>
using namespace std;

int temperaturas[6];

int temperaturaAlta(int temperatura[]) {
   int temperaturaDeComparacion = 0;

   for(int i = 0; i < 6; i++) {
      if(temperatura[i] > temperaturaDeComparacion) {
         temperaturaDeComparacion = temperatura[i];
      }
   }

   return temperaturaDeComparacion; 
}

int temperaturaMedia(int temperatura[]){
   int temperaturaMedia=0;

   for(int i = 0; i < 6; i++) {
      temperaturaMedia += temperatura[i];
   }
   
   return temperaturaMedia / 6;
} 

int temperaturaBaja(int temperatura[]) {
   int temperaturaBaja = 99999999;

   for(int i = 0; i < 6; i++) {
      if(temperatura[i] < temperaturaBaja) {
         temperaturaBaja = temperatura[i];
      }
   }
   
   return temperaturaBaja;
}

void pedidoDeTemperatura() {
   int j = 0;

   for(int i = 4; i <= 24;i+=4) {
       cout << "Digite la temperatura(hora numero ["<<i<<"]): ";
       cin >> temperaturas[j];
       j++;
   }
}

int main() {

   pedidoDeTemperatura();

   cout << "La temperatura mas alta fue: " << temperaturaAlta(temperaturas)<< endl;
   cout << "La temperatura mas baja fue: " << temperaturaBaja(temperaturas) << endl;
   cout << "La temperatura media fue: " << temperaturaMedia(temperaturas) << endl;

   return 0;
}
