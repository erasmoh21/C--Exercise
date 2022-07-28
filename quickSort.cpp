#include<iostream>
using namespace std;

void intercambio(int& n1,int& n2) {
   int aux = 0;

   aux = n1;
   n1 = n2;
   n2 = aux;

}


void quickSort(int arr[],int primero,int ultimo) {
   int i = primero,j = ultimo,central = (primero+ultimo)/2; 
   int pivote = arr[central];

   do {
      while(arr[i] < pivote) i++;
      while(arr[j] > pivote) j--;

      if(i<=j) {
         intercambio(arr[i],arr[j]);
	 i++;
         j--;
      }
   }while(i <= j);
   
   if(primero < j) {
      quickSort(arr,primero,j);
   }   
   if(i < ultimo) {
      quickSort(arr,i,ultimo);
   }
}

void mostrarArreglo(int arr[],bool validadorReversidad) {
   if(validadorReversidad) {
      for(int i = 8; i >= 0; i--) {
         cout << arr[i] << " ";
      }
   }
   else {
      for(int i = 0; i < 9; i++) {
         cout << arr[i] << " ";
      }
   }
}


int main() {
   int numero[] = {3,2,6,7,5,4,9,8,1};

   quickSort(numero,0,8);
   cout << "Arreglo ordenado de manera ascendente: ";
   mostrarArreglo(numero,false);   
   cout << "\nArreglo ordenado de manera descendente: ";
   mostrarArreglo(numero,true);
   cout << endl;






   return 0;
}
