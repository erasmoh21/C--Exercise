#include<iostream>
using namespace std;

void pregunta(int* numeroElementos){
   cout << "Digite el numero de elementos que quiera que tenga el arreglo: ";
   cin >> *numeroElementos;
}

void rellenarArreglo(int arr[],int& numeroElementos) {
   for(size_t i = 0; i < numeroElementos; i++) {
      cout << "Digite el numero: ";
      cin >> arr[i];
   }
}

int busquedaDeNumero(int arr[],int& numeroElementos,int& numeroABuscar) {
   for(size_t i = 0; i < numeroElementos; i++) {
      if(arr[i] == numeroABuscar) return i+1;
   }

   return -1;
}

void mostrarArreglo(int arr[],int& numeroElementos) {
   for(size_t i = 0; i < numeroElementos; i++) {
      cout << arr[i] << ",";
   }
}

int main(){
   int numeroElementos=0;
   int numeroABuscar=0;

   pregunta(&numeroElementos);
   int* array = new int[numeroElementos];
   rellenarArreglo(array,numeroElementos);
   cout << "Arreglo: \n";
   mostrarArreglo(array,numeroElementos);
   cout << "\nDigite el numero que desea buscar: ";
   cin >> numeroABuscar;
   if(busquedaDeNumero(array,numeroElementos,numeroABuscar) < 0) {
      cout << "El numero que digito no se encuentra en el arreglo que digito\n";
   }
   else {
      cout << "El numero " << numeroABuscar << " se encontro en la posicion " << busquedaDeNumero(array,numeroElementos,numeroABuscar) << endl; 
   }
 
   return 0;
}
