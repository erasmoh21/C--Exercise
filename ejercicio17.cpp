#include<iostream>
using namespace std;

int calculoCuboDeUnNumero(int numero) {
   return numero*3;
}

bool numeroParOImpar(int numero) {
   return numero % 2 == 0 ? true : false;
}

void manejadorDeMenu(int opcion) {
   int numeroDeCubo=0,numero = 0;

   switch(opcion) {
      case 1:
         cout << "Digite un numero: ";
         cin >> numeroDeCubo;
         cout << "\nEl cubo del numero es " << calculoCuboDeUnNumero(numeroDeCubo);
         break;
      case 2:
         cout << "Digite un numero: ";
         cin >> numero;
         if(numeroParOImpar(numero)) {
            cout << "\nEl numero es par";
         }
         else {
            cout << "\nEl numero es impar";
         }
         break;
      case 3:
         cout << "\nHasta Luego :)" << endl;
         break;
      default:
         cout << "\nTienes que digitar un numero en los rangos correspondientes"<< endl;
   }
}

void menu() {
   int opcion = 0;
   do {
      cout << "\n*******Menu*******" << endl;
      cout << "1.- Cubo de un numero" << endl;
      cout << "2.- Numero par o impar"<< endl;
      cout << "3.- Salir" << endl;
      cout << "Digite una opcion: ";
      cin >> opcion;

      manejadorDeMenu(opcion);      


   }while(opcion != 3);
}

int main() {

   menu();

   return 0;
}
