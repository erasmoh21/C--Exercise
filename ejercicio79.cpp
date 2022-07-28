#include<iostream>
#include<vector>
using namespace std;

std::vector<int> cambiarSigno(int arr[],int numeroElementos) {
   std::vector<int> elementosNegativos;

   for(size_t i = 0; i < numeroElementos; i++) {
      elementosNegativos.push_back(arr[i] * -1);
   }

   return elementosNegativos;
}

/*
Otra forma de hacerlo :)
int* cambiarSigno(int arr[],int numeroElementos) {
   for(size_t i = 0; i < numeroElementos; i++) {
      arr[i] *= -1;
   }

   return arr;
}*/

int main() {
   int arr[] = {1,2,10,20,50,10,100},numeroElementos=sizeof(arr)/sizeof(arr[0]);

   cout << "Array antes de la funcion: " << endl;
   for(size_t i = 0; i < numeroElementos; i++) {
      cout << arr[i] << " ";
   }

   cout << "\nArray despues de la funcion: " << endl;
   for(size_t i = 0; i < numeroElementos; i++) {
      cout << cambiarSigno(arr,numeroElementos)[i]  << " ";
   }
   cout << endl;

   return 0;
}
