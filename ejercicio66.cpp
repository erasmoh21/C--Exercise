#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Persona {
   std::string nombre;
   bool discapacidad;
};

void preguntaPersona(int& numeroDePersonas) {
   cout << "Digite el numero de personas que quiere digitar: ";
   cin >> numeroDePersonas;
}

void rellenarDatosDePersona(int& numeroDePersonas,Persona personas[]) {
   for(int i = 0; i < numeroDePersonas; i++) {
      cin.ignore();
      cout << "Digite el nombre: "; 
      getline(cin,personas[i].nombre);
      cout << "Sufre de alguna discapacidad: ";
      cin >> personas[i].discapacidad; 
   } 
}

std::vector<Persona> arregloPersonasDiscapacitadas(int numeroPersonas,Persona personas[]) {
   std::vector<Persona> personasConDiscapacidad;
   
   for(int i = 0; i < numeroPersonas; i++) {
      if(personas[i].discapacidad) {
         personasConDiscapacidad.push_back(personas[i]);
      }
   }
    
   return personasConDiscapacidad;
} 

std::vector<Persona> arregloPersonasSinDiscapacidad(int numeroPersonas,Persona personas[]) {
   std::vector<Persona> personasSinDiscapacidad;

   for(int i = 0; i < numeroPersonas; i++) {
      if(!personas[i].discapacidad) {
         personasSinDiscapacidad.push_back(personas[i]);
      }
   }
   
   return personasSinDiscapacidad;
} 

int main() {
   int numeroDePersonas = 0; 
   
   preguntaPersona(numeroDePersonas);   
   Persona* personas = new Persona[numeroDePersonas];
   rellenarDatosDePersona(numeroDePersonas,personas);  
   std::vector<Persona> personasConDiscapacidad = arregloPersonasDiscapacitadas(numeroDePersonas,personas); 
   std::vector<Persona> personasSinDiscapacidad = arregloPersonasSinDiscapacidad(numeroDePersonas,personas);
   cout << "\nPersonas con discapacidad:\n";
   for(auto &persona : personasConDiscapacidad) {
      cout << "Nombre: " << persona.nombre <<'\n';
      cout << "Discapacidad: " << persona.discapacidad << "\n";
   }
   
   cout << "\nPersonas sin discapacidad:\n";
   for(auto &persona : personasSinDiscapacidad) {
      cout << "Nombre: " << persona.nombre << "\n";
      cout << "Discapacidad: " << persona.discapacidad << '\n';
   }

   delete[] personas;
   return 0;
}
