#include<iostream>
using namespace std;

template<typename T>
T maximo(T& dato1,T& dato2,T& dato3) {
   if(dato1 > dato2 && dato1 > dato3) {
      return dato1;
   } 
   if(dato2 > dato1 && dato2 > dato3) {
      return dato2;
   }
   if(dato3 >dato1 && dato3 > dato2) {
      return dato3;
   }
   return 0;
}

int main() {
   int n1,n2,n3; 

   cout << "Digite el numero: ";
   cin >> n1;
   cout << "Digite el segundo numero: ";
   cin >> n2;
   cout << "Digite el tercer numero: ";
   cin >> n3;

   cout << "\nEl numero mayor es " << maximo<>(n1,n2,n3) << endl;

   return 0;
}
