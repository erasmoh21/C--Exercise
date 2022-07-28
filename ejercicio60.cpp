#include<iostream>
#include<string>
using namespace std;

struct Alumno {
   std::string nombre; 
   int edad;
   double promedio;
};

void pedirDatosAlUsuario(Alumno alumnos[]) {
   for(int i = 0; i < 3; i++) {
      cin.ignore();
      cout << "Digite el nombre del alumno: ";
      getline(cin,alumnos[i].nombre); 
      cout << "Digite la edad del alumno: ";
      cin >> alumnos[i].edad;
      cout << "Digite el promedio del alumno: ";
      cin >> alumnos[i].promedio;
      cout << endl;
   } 
}

void buscarAlumnoMejorPromedio(Alumno alumnos[],int& numeroIndice) {
   double numero = 0.0;

   for(int i = 0; i < 3; i++) {
      if(alumnos[i].promedio > numero) {
         numero = alumnos[i].promedio;
         numeroIndice = i;
      }
   } 
}

void mostrarMejorAlumno(Alumno alumnos[],int numeroDeAlumno) {
   cout << "*****Alumno con mejor Promedio*****" << endl;
   cout << "\tNombre: " << alumnos[numeroDeAlumno].nombre << endl; 
   cout << "\tEdad: " << alumnos[numeroDeAlumno].edad << endl;
   cout << "\tPromedio: " << alumnos[numeroDeAlumno].promedio << endl; 
}


int main() {
   Alumno arregloDeAlumnos[3];
   int numeroDeIndiceDeAlumno = 0;   
   
   pedirDatosAlUsuario(arregloDeAlumnos);
   buscarAlumnoMejorPromedio(arregloDeAlumnos,numeroDeIndiceDeAlumno);
   mostrarMejorAlumno(arregloDeAlumnos,numeroDeIndiceDeAlumno);

   return 0;
}
