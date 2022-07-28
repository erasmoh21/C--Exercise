#include<iostream>
using namespace std;

int sumaDeElementos(int arr[],int numeroElementos) {
   int acumulador = 0;
   for(int i = 0; i < numeroElementos; i++) {
      acumulador += arr[i]; 
   }

   return acumulador;
}

int main() {
   int arr[] = {1,2,3,4,5};

   cout << sumaDeElementos(arr,sizeof(arr)/sizeof(arr[0])) << endl;

   return 0;
}
