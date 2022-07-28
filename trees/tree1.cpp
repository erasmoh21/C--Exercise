#include<iostream>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

struct Node {
   int data;
   Node* izq;
   Node* der;
   Node* dad;
};

Node* createNode(int n,Node* dadNode) {
   Node* new_node = new Node();
   
   new_node->data = n;
   new_node->izq = NULL;
   new_node->der = NULL;
   new_node->dad = dadNode;

   return new_node;
}

void insertNode(Node*& tree,int n,Node* dadNode) {
   if(tree == NULL) {
      tree = createNode(n,dadNode);
   }
   else {
      int valueSeed = tree->data;
      if(n < valueSeed) {
	 insertNode(tree->izq,n,tree);
         //tree->izq = createNode(n);
      }
      else {
         insertNode(tree->der,n,tree);
         //tree->der = createNode(n);
      }
   }
}

void show_tree(Node* tree,int counter) {
   if(tree == NULL) {
      return;
   }
   else {
      show_tree(tree->der,counter+1);
      for(size_t i = 0; i < counter; i++) {
         cout << "   ";
      }
      cout << tree->data << endl;
      show_tree(tree->izq,counter+1);
   }
}

bool search_node(Node* tree,int number) {
   if(tree == NULL) {
      return false;
   }
   else if(tree->data == number) {
      return true;
   }
   else if(number < tree->data) {
      return search_node(tree->izq,number);
   }
   return search_node(tree->der,number);
}

void preOrden(Node* tree) {
   if(tree == NULL) {
      return;
   }
   else {
      std::cout << tree->data << " - ";
      preOrden(tree->izq);
      preOrden(tree->der);
   }
}

void inOrden(Node* tree) {
   if(tree== NULL) {
      return;
   } 
   else {
      inOrden(tree->izq);
      std::cout << tree->data << " - ";
      inOrden(tree->der);
   }
}

void postOrden(Node* tree) {
   if(tree == NULL) {
      return; 
   } 
   else {
      postOrden(tree->izq);
      postOrden(tree->der);
      std::cout << tree->data << " - ";
   }
}

Node* minimo(Node* node) {
   if(node == NULL) {
      return NULL;
   }
   if(node->izq) {
      return minimo(node->izq);
   }
   else {
      return node;
   }
} 


void reemplazar(Node* tree,Node* new_node) {
   if(tree->dad) {
      if(tree->data == tree->dad->izq->data) {
         tree->dad->izq = new_node;
      }
      if(tree->data == tree->dad->der->data) {
         tree->dad->der = new_node;
      }
   }
   if(new_node) {
      new_node->dad = tree->dad;
   }
}

void destroy_node(Node* node) {
   node->der = NULL;
   node->izq = NULL;

   delete node;
}

void deleteNode(Node* node) {
   if(node->izq && node->der) {
      Node* menor = minimo(node->der);
      node->data = menor->data;
      deleteNode(menor); 
   }
   else if(node->izq) {
      reemplazar(node,node->izq);
      destroy_node(node);
   }
   else if(node->der) {
      reemplazar(node,node->der);
      destroy_node(node);
   }
}

void delete_node(Node* tree,int n) {
   if(tree == NULL) {
      return;
   }
   else if(n < tree->data) {
      delete_node(tree->izq,n);
   }
   else if(n > tree->data) {
      delete_node(tree->der,n);
   }
   else {
      deleteNode(tree);
   }
}

void menu() {
   int option = 0,optionOfOperations=0,counter=0;
   Node* tree = NULL;
   Node* dadTree = NULL;

   while(option != 8) {
      std::cout << "\n1.-Insert a element in the tree\n";
      std::cout << "2.-Show elements in the tree\n";
      std::cout << "3.-Search element in the tree\n";	
      std::cout << "4.-Look elements in PreOrden\n";
      std::cout << "5.-Look elements in InOrden\n";
      std::cout << "6.-Look elements in PostOrden\n";
      std::cout << "7.-Delete element in the tree\n";
      std::cout << "8.-Exit\n";
      std::cout << "Digit a option: ";
      std::cin >> option;

      switch(option) {
         case 1:
            std::cout << "Digit a number: ";
            std::cin >> optionOfOperations;
            insertNode(tree,optionOfOperations,dadTree);
            counter++;
	    break;
         case 2:
            cout << "\n";
            show_tree(tree,counter);   
	    cout << "\n";
            break;
         case 3: {
            std::cout << "Digit the number that you want to search: ";
	    std::cin >> optionOfOperations;
            bool found = search_node(tree,optionOfOperations);
            if(!found) {
 	       std::cout << "\nThe number wasnt found :(\n";
            }
            else {
	       std::cout << "\nThe number was found successful\n";
            }
	    break;
         }
         case 4:
            std::cout << "\n";
            preOrden(tree);
 	    std::cout << "\n";
            break;
         case 5:
            std::cout << "\n";
            inOrden(tree);
            std::cout << "\n";
            break; 
         case 6:
            std::cout << "\n";
 	    postOrden(tree);
            std::cout << "\n";
	    break;
         case 7:
            std::cout << "\nDigit the number that you wish to delete: ";
	    std::cin >> optionOfOperations; 
            delete_node(tree,optionOfOperations); 
	    break;
         default:
            if(option != 8) {
               std::cout << "\nYou should to digit a number that it is valid\n";
            }
      }
   }
   
   std::cout << "\nThanks you for to use my system\n";
}

void tato() {
   return;
}

int main() {

   menu();

   /*void* hola = tato();
   if(hola == NULL) {
      std::cout << "It is nothing";
   } 
   else {
      std::cout << "It is something";
   }*/

   return 0;
}
