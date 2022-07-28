#include<iostream>
#include<string>
using namespace std;

struct User {
   std::string name;
   std::string lastName;
   int age;
};

struct Node {
   User user;
   Node* next;
};


bool void_heap(Node*& front) {
   return front == NULL ? true : false;
}

void insert_data_user(Node*& front,Node*& last,User user) {
   Node* new_node = new Node();
   new_node->user = user;
   new_node->next = NULL;

   if(void_heap(front)) {
      front = new_node;
   }
   else {
      last->next = new_node;
   }

   last = new_node;
}
void menu(Node*& front,Node*& last) {
   int numero = 0;
   size_t i = 0;
   
   cout << "Insert the amount of users to digit: ";
   cin >> numero;

   for(;i < numero;) {
      User user;
      cout << "\n"; 
      cin.ignore();
      cout << "Insert the name of the user: "; 
      getline(cin,user.name);
      cout << "Insert the last name of the user: ";
      getline(cin,user.lastName);
      cout << "Insert the age of the user: ";
      cin >> user.age;
      insert_data_user(front,last,user); 
      i++;
   }
}

void show_users(Node*& front) {
   while(front != NULL) {
      cout <<"\n" <<"Name: " << front->user.name << "\n";
      cout <<"Last name: " <<front->user.lastName << "\n";
      cout <<"Age: " <<front->user.age << "\n"; 
      front = front->next; 
   }
}

int main() {
   Node* front = NULL;
   Node* last = NULL;

   menu(front,last);
   show_users(front);
   
   return 0;
}
