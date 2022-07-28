#include<iostream>
using namespace std;

int escribeNumeros(int inicio,int fin) {
   if(inicio > fin) return 0;
   if(inicio == fin) return fin;
   cout << inicio << endl;
   inicio+=1;

   return escribeNumeros(inicio,fin);
}


int main() {

   cout << escribeNumeros(0,10)<<endl;




   return 0;
}
