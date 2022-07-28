#include<iostream>
#include<map>
using namespace std;

/*
Another way of to do it
std::string calculoDelMes(int* mes) {
   std::string meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

   for(int i = 0; i < 12; i++) {
      if(i == (*mes-1)) {
         return meses[i];
      }
   } 

   return "The number entered is out of range";
}
*/

std::string calculoDelMes(int* mes) {
    std::map<int,std::string> mapOfMonths {
        {1,"Enero"},
        {2,"Febrero"},
        {3,"Marzo"},
        {4,"Abril"},
        {5,"Mayo"},
        {6,"Junio"},
        {7,"Julio"},
        {8,"Agosto"},
        {9,"Septiembre"},
        {10,"Octubre"},
        {11,"November"},
        {12,"December"}
    };

    return *mes > 12 ? "The number entered is out of range" : mapOfMonths[*mes];
}


int main() {
   int numero = 0;

   cout << "Digite un numero del mes[1-12]: ";
   cin >> numero;

   cout << calculoDelMes(&numero) << endl;

   return 0;
}
