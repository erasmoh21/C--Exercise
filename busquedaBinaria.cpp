#include<iostream>
using namespace std;

bool busquedaBinaria(int arr[],int numero) {
   int inf=0,sup=5,mit=0;
   bool validador = false;
   
   while(inf <= sup) {
      mit = (inf+sup) / 2;
      if(arr[mit] == numero) {
         return true;
      }
      if(arr[mit] > numero) {
         sup = mit; 
         mit = (inf+sup) / 2;
      } 
      if(arr[mit] < numero) {
         inf = mit;
         mit = (inf+sup) / 2;
      }

   } 
  
   return false;
}


int main() {
   int arr[] = {1,2,3,4,5},numero = 2;

   if(busquedaBinaria(arr,numero)) {
      cout << "El numero " << numero << " se encontro" << endl;
   }
   else {
      cout << "El numero " << numero << " no se encontro" << endl;
   }



   return 0;
}
