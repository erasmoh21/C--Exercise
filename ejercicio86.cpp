#include<iostream>
using namespace std;

int pow(int numero,int potencia,int i) {

   if(i == potencia) return numero;
   i++;
   return pow(numero*5,potencia,i); 
}

int main() {
   cout << pow(5,3,1)<<endl;
   return 0;
}
