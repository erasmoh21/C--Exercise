#include<iostream>
using namespace std;

struct Nodo {
   char data;
   Nodo* next;
};

void menu(short& number) {
   cout << "\n------Menu--------\n";
   cout << "1.-Insert a character to the stack\n";
   cout << "2.-Show all the elements of the stack\n";
   cout << "3.-Exit\n"; 
   cout << "Digit a number: ";
   cin >> number;
}

void insertElementStack(Nodo*& node,char data) {
   Nodo* new_node = new Nodo();
   new_node->data = data;
   new_node->next = node;
   node = new_node;
}

void showElementsStack(Nodo* node) {
   while(node != NULL) {
      if(node != NULL) {
         cout << node->data << " ";
         node = node->next;
      }
      else {
         cout << node->data << "." << endl;
      }
   }
}

int main() {
   Nodo* pila = NULL;
   short number=0;
   char chars = ' ';

   while(number != 3) {
      menu(number); 
      switch(number) {
         case 1:
            cout << "\nDigit a character: ";
            cin >> chars; 
            insertElementStack(pila,chars);
            break;
         case 2:
            cout << "The elements are: ";
            showElementsStack(pila);
            cout << "\n";
            break;
      }
   }
   cout << "\nAdios :)\n";
   
   return 0;
}
