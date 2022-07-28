#include<iostream>
using namespace std;

template<typename T> 
void intercambioValores(T& numero,T& numero2) {
   int aux = 0;

   aux = numero;
   numero = numero2;
   numero2 = aux;
}

int main() {
   int n1=0,n2=0;

   cout << "Digite un numero: ";
   cin >> n1;
   cout << "Digite otro numero: ";
   cin >> n2;

   intercambioValores(n1,n2);

   cout << "\nEl valor del primer numero es: " << n1 << endl;
   cout << "El valor del segundo numero es: " << n2 << endl;

   return 0;
}
