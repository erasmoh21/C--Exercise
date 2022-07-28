#include<iostream>
using namespace std;

void tiempo(int segundo,int& hora,int& minuto,int& segundo2) {
   segundo2 = segundo / 60;
   minuto = segundo / 60;
   hora = minuto / 60;
   if(segundo2 >= 60 || segundo % 60 == 0) {
      segundo2 = 0;
   }
   if(minuto >= 60) {
      minuto = 0;
   }
}

int main() {
   int segundo =180,hora=0,minuto=0,segundo2=0;   
   
   tiempo(segundo,hora,minuto,segundo2);
   cout << hora << ":" << minuto << ":" << segundo2 << endl;
   return 0;
}
