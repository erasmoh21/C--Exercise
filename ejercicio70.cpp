#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

std::string decimales(std::string& numero) {
   std::string otroNumero = "0.";
   bool valor = false;

   for(int i = 0; i < numero.size(); i++) {
      if(numero.at(i) == '.') {
         valor = true; 
      }   
      else if(valor) {
         otroNumero += numero.at(i);
      }
   } 

   return otroNumero;
}

int main() {
   std::string decimal;
   cout << "Digite el numero decimal que desee: ";
   getline(cin,decimal);

   cout <<"Los decimales del numero es -> " << decimales(decimal) << endl;   
   
   return 0;
}
