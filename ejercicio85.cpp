#include<iostream>
using namespace std;

int fibonacci(int numero) {
   if(numero <= 1) return numero;

   return fibonacci(numero-1)+fibonacci(numero-2);
}

int main() {
   int i = 0;
   for(;i < 10;) {
      cout <<fibonacci(i) << endl;
      i++;
   } 

   return 0;
}
