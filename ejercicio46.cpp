#include<iostream>
#include<stdlib.h>
using namespace std;

void crearMatriz(int matriz[][3]) {
   srand(time(NULL));
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         matriz[i][j] = rand() % 100 * 1;
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

int *sumarMatrices(int matriz1[][3],int matriz2[][3]) {
   int* matrizSumada[3][3];
   cout << "hoa";
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         cout << matriz1[i][j] << " " << matriz2[i][j];
         *matrizSumada[i][j] = matriz1[i][j] + matriz2[i][j];
      }
   }
   
   return **matrizSumada;
}

int main() {
   int matriz1[3][3];
   int matriz2[3][3];

   crearMatriz(matriz1);   
   crearMatriz(matriz2);
   cout << "Matriz 1: " << endl;
   mostrarMatriz(matriz1);
   cout << "\nMatriz 2: " << endl;
   mostrarMatriz(matriz2);
   cout << "\nLa suma de las matrices son: " << endl;
   mostrarMatriz((int(*)[3]) sumarMatrices(matriz1,matriz2));
   cout << endl;

   return 0;
}
