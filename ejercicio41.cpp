#include<iostream>
using namespace std;

int fila=0,columna=0;

void pregunta() {
   cout << "Digite el numero de filas: ";
   cin >> fila;
   cout << "Digite el numero de columnas: ";
   cin >> columna;
}

void rellenarMatriz(int arr[][3]) {
   int j = 0;
   for(int i = 0; i < fila; i++) {
      for(j = 0; j < columna; j++) {
         cout << "Digite el numero: ";
         cin >> arr[i][j];
      }
   }
}

void mostrarMatriz(int arr[][3]) {
   int j = 0;
   for(int i = 0; i < fila; i++) {
      for(j = 0; j < columna; j++) {
         cout << arr[i][j] << "\t";
      }
      cout << endl;
   }
}


int main() {
   pregunta();
   int matriz[fila][3];
   rellenarMatriz(matriz);
   cout << endl;
   mostrarMatriz(matriz);
   cout << endl;



   return 0;
}
