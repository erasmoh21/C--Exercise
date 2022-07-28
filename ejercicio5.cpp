#include<iostream>

void theLargestNumber(int n1,int n2,int n3) {
    if(n1 > n2 && n1 > n3) {
        std::cout << "\nThe largest of the threes is: " << n1 << std::endl;
    }
    else if(n2 > n3) {
        std::cout << "\nThe largest of the threes is: " << n2 << std::endl;
    }
    else {
        std::cout << "\nThe largest of the threes is: " << n3 << std::endl;

    }
}

int main() {
   int n1=0,n2=0,n3=0;

   std::cout << "Digite el numero 1: ";
   std::cin >> n1;
   std::cout << "Digite el numero 2: ";
   std::cin >> n2;
   std::cout << "Digite el numero 3: ";
   std::cin >> n3;
   
   theLargestNumber(n1,n2,n3);

   return 0;
}
