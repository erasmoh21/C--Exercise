#include<iostream>
using namespace std;

int funcionRecursiva(int arr[],int i,int acumulador) {
   if(i == 9) {
      return acumulador;
   }
   acumulador += arr[i];
   i+=1;
   return funcionRecursiva(arr,i,acumulador);
}

int main() {
   int numeros[] = {1,2,3,4,5,6,7,8,9};
   int i = 0,acumulador=0;
   
   cout << funcionRecursiva(numeros,i,acumulador);

   return 0;
}
