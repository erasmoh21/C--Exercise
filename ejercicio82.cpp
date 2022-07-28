#include<iostream>
using namespace std;

int devolverNumeroMenorDeFila(int matriz[][5],int numeroFila) {
   int numero = 999999999;

   for(int i = 0; i < numeroFila; i++) {
      if(matriz[i][0] < numero) {
         numero = matriz[i][0];
      }
   }

   return numero;
}

int main() {
   int matriz[][5] = {{1,2,3,4,5},{5,7,2,3,1},{6,7,8,2,4},{9,2,5,4,3},{8,7,9,1,5}};
   const int numeroFila = 5;

   cout <<"El numero menor de las filas es -> " <<devolverNumeroMenorDeFila(matriz,numeroFila) << endl;


   return 0;
}
