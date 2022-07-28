#include<iostream>
#include<string>
using namespace std;

struct Corredor {
   std::string nombre;  
   int edad;
   std::string sexo;
   std::string club;
};

void pedirDatosAlUsuario(Corredor* corredor) {
   cout << "Digite el nombre: ";
   getline(cin,corredor->nombre);
   cout << "Digite la edad: ";
   cin >> corredor->edad;
   cin.ignore();
   cout << "Digite el sexo: ";
   getline(cin,corredor->sexo);
   cout << "Digite el club del corredor: ";
   getline(cin,corredor->club);
}

std::string categoriaDelCorredor(int edad) {
   if(edad <= 18) {
      return "Juvenil";
   }
   else if(edad > 18 && edad <= 40) {
      return "Señor";
   }
   else {
      return "Veterano";
   }
}

void mostrarDatosDelCorredor(Corredor corredor) {
   cout << "Nombre: " << corredor.nombre << endl;
   cout << "Edad: " << corredor.edad << endl;
   cout << "Sexo: " << corredor.sexo << endl;
   cout << "Club: " << corredor.club << endl;
   cout << "Categoria: " << categoriaDelCorredor(corredor.edad) << endl;  
}

int main() {
   Corredor corredor = Corredor(); 
   pedirDatosAlUsuario(&corredor); 
   cout << endl; 
   mostrarDatosDelCorredor(corredor);

   return 0;
}
