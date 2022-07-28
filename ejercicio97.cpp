#include<iostream>
using namespace std;

void question(int* row,int* col) {
   cout << "Digit the number of rows: "; 
   cin >> *row;
   cout << "Digit the number of columns: ";
   cin >> *col;
}

void fillMatrix(int** matrix,int& row,int& col) {
   for(size_t i = 0; i < row; i++) {
      matrix[i] = new int[col];
   }

   for(size_t i = 0; i < row; i++) {
      for(size_t j = 0; j < col; j++) {
         cout << "Digite el numero["<<i<<"]["<<j<<"]: ";
         cin >> *(*(matrix+i)+j);
      }
   }
}

int** createTransposedMatrix(int** matrix,int& row,int& col) {
   int** matrizTranspuesta = new int*[row];

   for(size_t i = 0; i < row; i++) {
      matrizTranspuesta[i] = new int[col];
   }

   for(size_t i = 0; i < row; i++) {
      for(size_t j = 0; j < col; j++) {
         *(*(matrizTranspuesta+i)+j) = *(*(matrix+j)+i); 
      }
   }

   return matrizTranspuesta;
}

void showMatrix(int** matrix,int& row,int& col) {
   for(size_t i = 0; i < row; i++) {
      for(size_t j = 0; j < col; j++) {
         cout << *(*(matrix+i)+j) << " ";
      }
      cout << "\n";
   }
}

int main() {
   int row=0,col=0;   
    
   question(&row,&col);
   int** matrix = new int*[row];
   fillMatrix(matrix,row,col);
   cout << "\nMatriz Original\n";      
   showMatrix(matrix,row,col);
   cout << "\nMatriz Transpuesta\n";
   showMatrix(createTransposedMatrix(matrix,row,col),row,col);

   delete[] matrix;
   return 0;
}
