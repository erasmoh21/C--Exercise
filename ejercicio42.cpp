#include<iostream>
using namespace std;

void mostrarDiagonalMatriz(int matriz[][3]) {
   int j = 2;
   for(int i = 0; i < 3; i++) {
      for(j =j; j >= 0; j--) {
         cout << matriz[i][j];
         j--;
         break;
      }
      cout << endl;
   }
}

int main() {
   int matriz[][3] = {{1,2,3},{4,5,6},{7,8,9}};

   mostrarDiagonalMatriz(matriz);
   cout << endl;

   return 0;
}
