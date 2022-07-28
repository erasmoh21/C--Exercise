#include<iostream>
using namespace std;

template<typename T>
T despliegue(T dato) {
   return dato;
}


int main() {

   cout << despliegue<char>('a') << endl;
   

   return 0;
}
