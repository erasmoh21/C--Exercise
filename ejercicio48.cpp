#include<iostream>
#include<stdlib.h>
using namespace std;

int fila = 0,columna=0;

void pregunta() {
   cout << "Digite el numero de fila: ";
   cin >> fila;
   cout << "Digite el numero de columna: ";
   cin >> columna;
}

void rellenarMatriz(int matriz[][3]) {
   srand(time(NULL));
   
   for(int i = 0; i < fila; i++) {
      for(int j = 0; j < 3; j++) {
         matriz[i][j] = rand() % 10 * 1;
      }
   }
}

void mostrarMatriz(int matriz[][3]) {

   for(int i = 0; i < fila; i++) {
      for(int j = 0; j < 3; j++) {
         cout << matriz[i][j] << " ";
      }
      cout << endl;
   }
}

void productoDeMatrices(int matriz1[][3],int matriz2[][3]) {

   for(int i = 0; i < fila; i++) {
      for(int j = 0; j < 3; j++) {
         matriz1[i][j] *= matriz2[i][j];
      }
   }
}

int main() {

   pregunta();
   int matriz1[fila][3];
   int matriz2[fila][3];
   rellenarMatriz(matriz1);
   rellenarMatriz(matriz2);
   cout << "Matriz 1: " << endl;
   mostrarMatriz(matriz1); 
   cout << "\nMatriz 2: " << endl;
   mostrarMatriz(matriz2);
   productoDeMatrices(matriz1,matriz2);
   cout << "\nMatriz multiplicado: " << endl; 
   mostrarMatriz(matriz1);
   cout << endl;



   return 0;
}
