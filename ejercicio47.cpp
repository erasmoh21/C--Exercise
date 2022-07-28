#include<iostream>
#include<stdlib.h>
using namespace std;

int* fila= new int;
int columna=0;

void pregunta() {
   cout << "Digite la fila: ";
   cin >> *fila;
   cout << "Digite la columna: ";
   cin >> columna;
}

void rellenarMatriz(int matriz[][3]) {
   srand(time(NULL));
   cout << *fila;

   for(int i = 0; i < *fila; i++) {
      for(int j = 0; j < 3; j++) {
         matriz[i][j] = rand() % 10 * 1;
      }
   }
} 

bool validarMatriz(int matriz[][3]) {
   int contadorFila=0,contadorColumna=0;
   int j = 0;
 
   for(int i = 0; i < *fila; i++) {
      for(j = 0; j < columna; j++) {
         contadorColumna++; 
      }
      contadorFila++;
      if(i == 2) break;
      contadorColumna = 0;
   }

   return contadorFila == contadorColumna ? true : false;
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
   int matriz[*fila][3];
   rellenarMatriz(matriz);
   cout << "Este es la matriz: " << endl;
   mostrarMatriz(matriz);
   if(validarMatriz(matriz)) {
      cout << "\nEs simetrica" << endl;
   }
   else {
      cout << "\nNo es simetrica" << endl;
   }
   delete fila;
   return 0;
}
