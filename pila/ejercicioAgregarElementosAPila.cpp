#include<iostream>
using namespace std;

struct Nodo {
   int data;
   Nodo* next;   
};

void agregarNodoAPila(Nodo*& nodo,int data) {
   Nodo* nuevo_nodo = new Nodo();
   nuevo_nodo->data = data;
   nuevo_nodo->next = nodo;
   nodo = nuevo_nodo;
}

void mostrarNodos(Nodo*& nodo) {
   while(nodo != NULL) {
      if(nodo != NULL) {
         cout << nodo->data << " ";
         nodo = nodo->next;
      }
      else {
         cout << nodo->data << "." << endl;
      }
   }
}

void pregunta(int& numeroADigitar) {
   cout << "Cuantos numeros desea digitar: ";
   cin >> numeroADigitar;
}

void digitarNodos(Nodo*& nodo,int numeroADigitar) {
   size_t i = 0;
   int data = 0;
   while(i < numeroADigitar) {
      cout << "Digite un numero: ";
      cin >> data; 
      agregarNodoAPila(nodo,data);      
      i++;
   }
}

int main() {
   Nodo* pila = NULL;
   int numeroADigitar = 0;

   pregunta(numeroADigitar);
   digitarNodos(pila,numeroADigitar);
   cout << endl;
   mostrarNodos(pila);

   return 0;
}
