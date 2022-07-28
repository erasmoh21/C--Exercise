#include<iostream>
using namespace std;


void pregunta(int matriz[][2]) {
   for(int i = 0; i < 2; i++) {
      for(int j =0; j < 2; j++) {
         cout << "Digite un elemento ["<<i<<"]["<<j<<"]: ";
         cin >> matriz[i][j];
      }
   }
}

void pasarDeUnaMatrizAOtra(int matriz1[][2],int matriz2[][2]) {

   for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
         matriz2[i][j] = matriz1[i][j] * 2;
      }
   }
}

void mostrarSegundaMatriz(int matriz2[][2]) {

   for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
         cout << matriz2[i][j];
      }
      cout << endl;
   }
}

int main() {
   int matriz1[2][2];
   int matriz2[2][2];

   pregunta(matriz1);   
   pasarDeUnaMatrizAOtra(matriz1,matriz2);
   cout << endl;
   mostrarSegundaMatriz(matriz2);
   cout << endl;

   return 0;
}
