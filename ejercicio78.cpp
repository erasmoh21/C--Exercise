#include<iostream>
using namespace std;

bool confirmarArrayCreciente(int arr[],int numeroDeElementos) {
   for(size_t i = 0; i < numeroDeElementos; i++) {
      if(arr[i] > arr[i+1]) {
         return false;
      }
   }

   return true;
}


int main() {
   int arr[] = {1,2,5,4,5};

   if(confirmarArrayCreciente(arr,sizeof(arr)/sizeof(arr[0]))) {
      cout << "Esta creciente" << endl;
   }
   else {
      cout << "Esta decreciente" << endl;
   }


   return 0;
}
