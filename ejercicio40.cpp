#include<iostream>
using namespace std;

void arregloFinal(int arr1[],int arr2[]) {
   
   for(int i = 0; i < 5; i++) {
      arr2[i] = arr1[i] *2;
   }
}


int main() {
  int arr1[5] = {1,2,3,4,5};
  int arrFinal[5];
  
  cout << "Elementos del arreglo 1: ";
  for(int i = 0; i < 5; i++) {
     cout << arr1[i] << " ";
  }

  arregloFinal(arr1,arrFinal); 
 
  cout << "\nElementos del arreglo 2: "; 
  for(int i = 0; i < 5; i++) {
     cout << arrFinal[i] << " ";
  } 

  cout << endl;

   return 0;
}
