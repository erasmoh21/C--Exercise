#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

bool confirmarNumeroPar(int& numero) {
   return numero % 2 == 0 ? true : false;
}

std::vector<int> rellenoDeArreglo() {
   std::vector<int> arreglo;
   srand(time(NULL));

   for(size_t i = 0; i < 10; i++) {
      int numeroAleatorio = rand() % 10 + 1;   
      arreglo.push_back(numeroAleatorio); 
   }

   return arreglo;
}

void mostrarArreglo(const std::vector<int>& arr) {
   for(size_t i = 0;i < arr.size(); i++) {
      if(confirmarNumeroPar(arr[i])) {
         cout << "El numero " << arr[i] << " es par " << "direccion de memoria -> " << &arr[i] << endl;
      }
      else{
         cout << "El numero " << arr[i] << " es impar " << "direccion de memoria -> " << &arr[i] << endl;
      }
   }
}

int main() {
   mostrarArreglo(rellenoDeArreglo());

   return 0;
}
