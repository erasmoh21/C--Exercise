#include<iostream>
//este ejercicio me falta por hacerlo
using namespace std;

void calc_anios(int diasTotal,int& dia,int& mes,int& anio) {
   
   cout << diasTotal / 365;
}

int main() {
   int dia = 5,mes=15,anio=10;

   calc_anios(1460,dia,mes,anio);
   cout << endl;



   return 0;
}
