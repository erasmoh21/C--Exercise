#include<iostream>

int main() {
   double precioProducto = 0.0;
   double iva = .20;

   std::cout << "Digite el precio del producto: ";
   std::cin >> precioProducto;
   
   std::cout << "\nEl precio con el iva es: " << precioProducto + (precioProducto * iva) << std::endl;

   return 0;
}
