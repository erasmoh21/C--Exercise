#include<iostream>
#include<stdlib.h>
using namespace std;

int fila = 0,columna = 0;

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

void pasarDeUnaMatrizAOtra(int matriz1[][3],int matriz2[][3]) {

   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         matriz2[i][j] = matriz1[i][j] * 2;
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
   int matriz[fila][3];
   int matriz2[fila][3];
   rellenarMatriz(matriz);
   pasarDeUnaMatrizAOtra(matriz,matriz2);
   cout << "\nArray Original " << endl;
   mostrarMatriz(matriz);
   cout << "\nArray con elementos del primer array elevado al cuadrado: " << endl;
   mostrarMatriz(matriz2);
   cout << endl;

   return 0;
}
