#include<iostream>
using namespace std;

struct Node {
   int data;
   Node* next;
};

bool void_heap(Node* front) {
   if(front == NULL) {
      return true; 
   }
   return false;
}

void insertElementInTheHeap(Node*& front,Node*& last,int data) {
   Node* new_node = new Node();
   new_node->data = data;
   new_node->next = NULL;

   if(void_heap(front)) {
      front = new_node;
   }
   else {
      last->next = new_node;
   }
   last = new_node;

   cout << "\tEl numeros se a agregado exitosamente a la pila " << data << "\n";
}

void removeElementInTheHeap(Node*& front,Node*& last,int& data) {
   data = front->data;
   Node* aux = front;

   if(front == last) {
      front = NULL;
      last = NULL;
   }
   else {
      front = front->next;
   }
   delete aux;
}

int main() {
   Node* front = NULL;
   Node* last = NULL;
   int data=0;
  
   for(int i = 0; i < 3; i++) {
      cout << "Digit a number: ";
      cin >> data;
      insertElementInTheHeap(front,last,data);
   } 

   cout << "\nThe elements was removed: ";
   do {
      removeElementInTheHeap(front,last,data);
      if(front != NULL) {
         cout << data << " ";
      }
      else {
         cout << data << "." << endl;
      }
   }while(front != NULL);

   return 0;
}
