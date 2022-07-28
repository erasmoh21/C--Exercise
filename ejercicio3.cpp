#include<iostream>
#include<string>

int main() {
   std::string sexo;
   int edad = 0;
   double altura = 0.0;

   std::cout << "Digite el sexo: ";
   getline(std::cin,sexo);
   std::cout << "Digite la edad: ";
   std::cin >> edad;
   std::cout << "Digite la altura: ";
   std::cin >> altura;

   std::cout << "El sexo es: " << sexo.size() << std::endl;
   std::cout << "La edad es: " << edad << std::endl;
   std::cout << "La altura es: " << altura << std::endl;

   return 0;
}
