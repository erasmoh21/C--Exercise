#include<iostream>
using namespace std;

struct Node {
   int number;
   Node* next;
};

void insert_element(Node*& list,int number) {
   Node* new_node = new Node();
   new_node->number = number;

   Node* aux1 = list;
   Node* aux2; 

   while((aux1 != NULL) && (aux1->number < number)) {
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
   Node* aux = list;

   while(aux != NULL) {
      if(aux->next != NULL) {
         cout << aux->number << " - "; 
      }
      else {
         cout << aux->number; 
      }
      aux= aux->next;
   }
}

bool search_element_in_list(Node* list,int n) {
   while(list != NULL) {
      if(list->number == n) {
         return true;
      }
      list = list->next;
   }

   return false;
}

int minor_number(Node* list) {
   int minorNumber = 0;

   while(list != NULL) {
      if(list->number > minorNumber) {
         minorNumber = list->number;
      }
      list = list->next;
   }
   
   return minorNumber;   
}

int high_number(Node* list) {
   int highNumber = 99999999;

   while(list != NULL) {
      if(list->number < highNumber) {
	 highNumber = list->number;
      }
      list = list->next;
   }

   return highNumber;
}

void menu() {
   Node* list = new Node();
   int number = 0;
   int numberOfTheList =0;


   while(number != 6) {
      std::cout << "\n1.-Insert a element in the list\n";
      std::cout << "2.-Show elements in the list\n";
      std::cout << "3.-Confirm number on the list\n";
      std::cout << "4.-Number minorest\n";
      std::cout << "5.-Number highest\n";
      std::cout << "6.-Exit\n";
      std::cout << "Digit a option: ";
      cin >> number;

      switch(number) {
         case 1:
            std::cout << "Digit a number: ";
            cin >> numberOfTheList;
            insert_element(list,numberOfTheList);            
            break;
         case 2:
            std::cout << "\n";
            show_list(list);
            std::cout << "\n";
            break;
         case 3:
            std::cout << "Digit a number for search it: ";
            cin >> numberOfTheList;
            if(!search_element_in_list(list,numberOfTheList)) {
               std::cout << "\nThe number arent in the list\n";
            }
	    else {
	       std::cout << "\nThe number is in the list\n";
 	    }
            break; 
         case 4:
            cout <<"\n"<< minor_number(list)<<"\n";
            break;
         case 5:
            cout << "\n" << high_number(list)<<"\n";
            break;
         default:
            if(number != 6) {
               std::cout << "\nYou should digit a correct option\n"; 
            }
      }
   } 

   std::cout << "\nThank you for the to use my system :)\n";
}

int main() {

   menu();

   return 0;
}
