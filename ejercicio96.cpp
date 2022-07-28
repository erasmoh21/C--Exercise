#include<iostream>
using namespace std;

void pregunta(int* numeroFilasMatriz) {
   cout << "Digite el numero de filas de la matriz 1: ";
   cin >> *numeroFilasMatriz;
} 

void rellenoMatriz1(int** matriz,int& numeroFilasMatriz) {
   for(size_t i = 0; i < numeroFilasMatriz; i++) {
      matriz[i] = new int[5];
   }
   
   for(size_t i = 0; i < numeroFilasMatriz; i++) {
      for(size_t j = 0; j < 5; j++) {
         cout << "Digite un numero["<<i<<"]["<<j<<"](MATRIZ 1): ";
         cin >> *(*(matriz+i)+j);
      }
   }
}

void rellenoMatriz2(int** matriz,int& numeroFilasMatriz) {
   for(size_t i = 0; i < numeroFilasMatriz; i++) {
      matriz[i] = new int[5];
   }

   for(size_t i = 0; i < numeroFilasMatriz; i++) {
      for(size_t j = 0; j < 5; j++) {
         cout << "Digite el numero["<<i<<"]["<<j<<"](MATRIZ 2): ";
         cin >> *(*(matriz+i)+j);
      }
   }
}

int** sumaMatrices(int** matriz1,int** matriz2,int& numeroFilasMatriz) {
   int** matrizARetornar = new int*[numeroFilasMatriz];

   for(size_t i = 0; i < numeroFilasMatriz; i++) {
      matrizARetornar[i] = new int[5];
   }

   for(size_t i = 0; i < numeroFilasMatriz; i++) {
      for(size_t j = 0; j < 5; j++) {
         matrizARetornar[i][j] = matriz1[i][j] + matriz2[i][j];
      }
   }

   return matrizARetornar;
}

void muestraMatriz(int** matriz,int& numeroFilasMatriz) {
   for(size_t i = 0; i < numeroFilasMatriz; i++) {
      for(size_t j = 0; j < 5; j++) {
         cout << matriz[i][j] << " ";
      }
      cout << "\n";
   }
}

int main() {
   int numeroFilaMatriz=0;   

   pregunta(&numeroFilaMatriz);
   int** matriz1 = new int*[numeroFilaMatriz];
   int** matriz2 = new int*[numeroFilaMatriz];
   rellenoMatriz1(matriz1,numeroFilaMatriz);
   cout << "\n";
   rellenoMatriz2(matriz2,numeroFilaMatriz);   
   cout << "\nMatriz 1:\n";
   muestraMatriz(matriz1,numeroFilaMatriz);
   cout << "\nMatriz 1:\n";
   muestraMatriz(matriz2,numeroFilaMatriz);
   cout << "\nLa suma de las dos matrices:\n";
   muestraMatriz(sumaMatrices(matriz1,matriz2,numeroFilaMatriz),numeroFilaMatriz);

   return 0;
}
