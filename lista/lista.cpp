#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
   int data;
   Node* next;
};

void insert_element_in_list(Node*& list,int data) {
   Node* new_node = new Node();
   new_node->data = data;

   Node* aux1 = list;
   Node* aux2;

   while((aux1 != NULL) && (aux1->data < data)) {
      aux2 = aux1;
      aux1 = aux1->next;
   }

   if(list == aux1) {
      list = new_node;
   }
   else {
      aux2->next = new_node; 
   }

   new_node->next = aux1;
}

void show_list(Node* list) {
   Node* actual = new Node();
   actual = list;

   while(actual != NULL) {
      cout << actual->data;
      actual = actual->next;
   }
}

bool search_element(Node* list,int n) {
   Node* actual = new Node();
   actual = list;
   bool band = false;

   while((actual != NULL) && (actual->data <= n)) {
      if(actual->data == n) {
         band = true; 
      }
      actual = actual->next;
   }
   
   return band ? band : band; 
}


int main() {
   Node* pila = NULL;
   int data;
   size_t i = 0;
  
   for(;i < 3;) {
      cout << "Digite un dato: ";
      cin >> data;
      insert_element_in_list(pila,data);      
      i++;
   }

   cout << "These are the elements were added to the list: ";
   show_list(pila);
   cout << "\n";
 
   cout << "Insert a number that you wish to search: ";
   cin >> data;
   if(search_element(pila,data)) {
      cout << "\nThe number was found -> " << data << endl;
   }
   else {
      cout << "\nThe number was not found -> " << data << endl;
   }

   return 0;
} 
