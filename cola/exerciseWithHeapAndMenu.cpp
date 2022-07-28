#include<iostream>
using namespace std;

struct Node {
   char data;
   Node* next;
};

void menu(short& option) {
   cout << "\n*********Menú*********\n";
   cout << "1.-Insert a character to a heap\n";
   cout << "2.-Show all the elements of the heap\n";
   cout << "3.-Exit\n";
   cout << "Digit a option: ";
   cin >> option;
}

bool void_heap(Node*& front) {
   return front == NULL ? true : false;
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
}

void showElementsInTheHeap(Node*& front) {
   int contador = 0;
   Node* node = NULL;
   while(front != NULL ) {
      contador++;
      if(front != NULL) {
         if(contador == 1) {
            node = front;
         }
         cout << front->data << " ";
         front = front->next;
      }
      else {
         cout << front->data << ".\n"; 
      }
   }
   front = node;
}

void handler_menu(short option) {
   Node* front = NULL;
   Node* last = NULL;
   char character = ' ';
   while(option != 3) {
      menu(option);
      switch(option) {
         case 1:
            cout << "Digit a character: ";
            cin >> character; 
            insertElementInTheHeap(front,last,character);
            cout << "\tCharacter inserted with success -> "<<character << "\n"; 
            break;
         case 2: 
            cout << "\nThe elements inserted in the heap: ";
            showElementsInTheHeap(front);
            cout << "\n";
            break; 
         default:
            if(option != 3) {
               cout <<"\nDigit a option that is valid, please\n";
            }
            if(option == 3) {
               cout << "\nSee you later my friend :)\n";
            }
      }
  }
}

int main() {
   short option = 0; 

   handler_menu(option);

   return 0;
}
