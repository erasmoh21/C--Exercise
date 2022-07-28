#include<iostream>
using namespace std;

bool busquedaSecuencial(int arr[],int numero) {
   int i = 0;
   bool validador = false;

   while((!validador) && (i < 5)) {
      if(arr[i] == numero) {
         return true;
      }
      i++;
   }
   return false;
}

int main() {
   int arr[] = {1,5,4,3,6},numero=5;
   if(busquedaSecuencial(arr,numero)) {
      cout << "El numero " << numero << " se encontro" << endl;
   } 
   else {
      cout << "El numero " << numero << " no se encontro" << endl;
   }

   return 0;
}
