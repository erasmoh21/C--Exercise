#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
   int number;
   Node* next;
};

void inser_element_in_list(Node*& list,int number) {
   Node* new_node = new Node();
   new_node->number = number;

   Node* aux1 = list;
   Node* aux2;

   while((aux1 != NULL)&&(aux1->number < number)) {
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

void show_elements(Node* list) {
   Node* aux = new Node();
   aux = list;
 
   while(aux != NULL) {
      if(aux->next != NULL) {
         std::cout << aux->number<<" - ";
      }
      else {
         std::cout << aux->number;

      }
      aux = aux->next;
   }
}

int sum_of_elements(const Node* list) {
   int number = 0;
   
   while(list != NULL) {
      number += list->number;
      list = list->next;
   }

   return number;
}

int average_of_elements(const Node* list) {
   int counter = 0,number=0;

   while(list != NULL) {
      counter++;
      number += list->number;
      list = list->next;
   }

   return number/counter;
}

void menu() {
   int numberOption=0,number=0;
   Node* list;

   do {
      std::cout << "\n1.-Insert element in the list\n";
      std::cout << "2.-Show elements in the list\n";
      std::cout << "3.-Sum of the elements\n";
      std::cout << "4.-Average of the elements\n";
      std::cout << "5.-Exit\n";
      std::cout << "Insert a option: ";
      cin >> numberOption;
 
      switch(numberOption) {
         case 1:
            std::cout << "Digit an element: ";
            cin >> number;
            inser_element_in_list(list,number);
            break;
         case 2:
            std::cout << "\n";
            show_elements(list);
            std::cout << "\n";
            break;
         case 3:
            std::cout << "\nThe sum of the element is: "<< sum_of_elements(list)<<"\n";
            break;
         case 4:
            std::cout << "\nThe average of the element is: " << average_of_elements(list)<<"\n";
            break;
         default:
            if(numberOption != 5) {
 	       std::cout << "\nYou should to digit a correct opcion\n";
            }
      }
   }while(numberOption != 5);

   std::cout << "\nThank you for to use my system bro:=)\n";
}

int main() {

   menu();

   return 0;
}
