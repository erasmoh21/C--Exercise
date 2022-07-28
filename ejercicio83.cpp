#include<iostream>
using namespace std;

std::string mayor(std::string fecha1,std::string fecha2) {
   if(fecha1 > fecha2) {
      return fecha1;
   }
   return fecha2;
}

int main() {

   cout << "La fecha mayor es -> " << mayor("10/9/2005","11/3/2015") << endl;

   return 0;
}
