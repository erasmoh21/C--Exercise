#include<iostream>
#include<string.h>
using namespace std;

char nombre[40];

void pregunta() {

   cout << "Digite el nombre: ";
   cin.getline(nombre,40);
}

int main() {
   char saludo[40] = "Hola que tal ";
   pregunta();
   cout << strcat(saludo,nombre) << endl;

   return 0;
}
