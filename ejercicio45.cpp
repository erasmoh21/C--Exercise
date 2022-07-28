#include<iostream>
#include<stdlib.h>
using namespace std;

int fila=0,columna = 0;

void pregunta() {
   cout << "Digite el numero de fila: ";
   cin >> fila;
   cout << "Digite el numero de columna: ";
   cin >> columna;
}

void rellenarMatriz(int matriz[][3]) {
   srand(time(NULL));
   
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         matriz[i][j] = rand() % 100 * 1;
      }
   }
}

void matriz_transpuesta(int matriz[][3],int matriz2[][3]) {
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         matriz2[j][i] = matriz[i][j];
      }
   }
}

void mostrarMatriz(int matriz[][3]) {
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         cout << matriz[i][j] << " ";
      }
      cout << endl;
   }
}

int main() {

   pregunta();
   int matrizOriginal[fila][3];
   int matrizTranspuesta[fila][3];
   rellenarMatriz(matrizOriginal);
   matriz_transpuesta(matrizOriginal,matrizTranspuesta);
   cout << "\nMatriz original: " << endl;
   mostrarMatriz(matrizOriginal);
   cout << "\nMatriz Transpuesta: " << endl;
   mostrarMatriz(matrizTranspuesta);
   cout << endl;

   return 0;
}
