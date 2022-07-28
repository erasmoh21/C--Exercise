#include<iostream>
using namespace std;

void valoresImpares(int arr[],int numeroElementos) {
   size_t i = 0;
   for(; i < numeroElementos;) {
      if(arr[i] % 2 != 0) {
         cout << arr[i] << " ";
      }
      i++;
   }
}

/*
otra forma de hacerlo :)
std::vector<int> valoresImpares(int arr[],int numeroElementos) {
   size_t i = 0;
   std::vector<int> numerosImpares;

   while(i < numeroElementos) {
      if(arr[i] % 2 != 0) {
         numerosImpares.push_back(arr[i]);
      }
      i++;
   }

   return numerosImpares;
}
*/

int main() {
   int arr[] = {1,2,3,4,5,6,7,8,9},numeroElementos = sizeof(arr)/sizeof(arr[0]);   

   valoresImpares(arr,numeroElementos);
   cout << endl;
   
   return 0;
}
