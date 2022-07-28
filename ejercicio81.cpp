#include<iostream>
using namespace std;

bool validarMatrizSimetrica(int arr[][5],int numeroFila) {
   size_t contadorFila = 0,contadorColumna=0;

   for(size_t i = 0; i < numeroFila; i++) {
      contadorFila++;
      for(size_t j = 0; j < 5; j++) {
         contadorColumna++;  
         if(j == 4) {
            if(i == numeroFila-1) {
               contadorColumna /= numeroFila;
               if(contadorFila > contadorColumna) return false;
            }
         }
      }
   }

   return true;
}

int main() {
   int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,7,8,9,5},{5,4,3,2,4},{5,8,9,7,4}};
   const int numeroFila = 5;

   if(validarMatrizSimetrica(arr,numeroFila)) {
      cout << "Es simetrica\n";
   }
   else {
      cout << "No es simetrica\n";
   }

   return 0;
}
