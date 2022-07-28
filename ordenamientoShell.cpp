#include<iostream>
using namespace std;

void intercambio(int& n1,int& n2) {
   int aux = 0;

   aux = n1;
   n1 = n2;
   n2 = aux;
}


void ordenamientoShell(int arr[],int num) {
   int j=0,k=0,salto = num/2;

   while(salto>0){
      for(int i = salto; i < num; i++) {
         j = i - salto;
         while(j >= 0) {
            k = j + salto; 
            if(arr[j] <= arr[k]) {
               j = -1;
            }
            else {
               intercambio(arr[j],arr[k]);
               j -= salto;
            }
         }
      }
      salto /= 2; 
   }



}

void mostrarArreglo(int arr[],bool validarReversidad) {
   if(validarReversidad) {
      for(int i = 7; i >= 0; i--) {
         cout << arr[i] << " - "; 
      }
   }
   else {
      for(int i = 0; i < 8; i++) {
         cout << arr[i] << " - ";
      }
   }
}


int main() {
   int arr[] = {2,5,4,7,6,3,1,9};

   ordenamientoShell(arr,8);    

   cout << "Array ordenado de forma ascendente: "; 
   mostrarArreglo(arr,false);
   cout << "\nArray ordenado de forma descendente: ";  
   mostrarArreglo(arr,true);
   cout << endl;

   return 0;
}
