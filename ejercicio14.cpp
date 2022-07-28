#include<iostream>
#include<string>
using namespace std;

std::string preguntarNumero() {
   std::string numero = "";

   cout << "Digite un numero: ";
   cin >> numero;

   return numero;
}

template<typename T>
std::string calculoRomano(T numero) {
   std::string acumulador = "";
   
      if(numero == "1") {
         acumulador += 'I';
      }
      else if(numero == "5") {
         acumulador += 'V';
      }
      else if(numero == "10") {
         acumulador += 'X';
      }
      else if(numero == "50") {
         acumulador += 'L'; 
      }
      else if(numero== "100") {
         acumulador += 'C';         
      }
      else if(numero == "500") {
         acumulador += 'C';
      }
      else if(numero == "1000") {
         acumulador += 'M';
      }
   
   return acumulador;
}

int main() {
   std::string numero = preguntarNumero();

   cout << calculoRomano<std::string>(numero)<< endl;

   return 0;
}
