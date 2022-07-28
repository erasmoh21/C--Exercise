#include<iostream>
using namespace std;

float mult(float* n1,float* n2) {
   return *n1 * *n2;
}


int main() {
   float n1=0.0,n2=0.0;

   cout << "Digite el numero 1: ";
   cin >> n1;
   cout << "Digite el numero 2: ";
   cin >> n2;

   cout << "Resultado -> " << mult(&n1,&n2) << "\n";

   return 0;
}
