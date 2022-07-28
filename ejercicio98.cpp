#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Alumno {
   std::string nombre; 
   int edad;
   float promedio;
}alumno,*alumno_ptr = &alumno;

void rellenarArregloAlumnos(std::vector<Alumno>& arr) {
   for(size_t i = 0; i < 3; i++) {
      cin.ignore();
      cout << "Digite el nombre del alumno: ";
      getline(cin,alumno_ptr->nombre);
      cout << "Digite la edad del estudiante: ";
      cin >> alumno_ptr->edad;
      cout << "Digite el promedio del estudiante: ";
      cin >> alumno_ptr->promedio;
      arr.push_back(*alumno_ptr);
   }
}

Alumno alumnoMejorPromedio(std::vector<Alumno>& arr) {
   float notaAlta = 0.0;

   Alumno alumnoMejorPromedio;
   for(size_t i = 0; i < arr.size(); i++) {
      if(arr[i].promedio > notaAlta) {
         notaAlta = arr[i].promedio;
         alumnoMejorPromedio = alumno;
      }
   } 

   return alumnoMejorPromedio;
}

void mostrarAlumno(Alumno alumne) {
   cout << "Nombre -> " << alumne.nombre << endl;
   cout << "Edad -> " << alumne.edad << endl;
   cout << "Promedio -> " << alumne.promedio << endl;
}

int main() {
   std::vector<Alumno> arr;
   
   rellenarArregloAlumnos(arr);
   cout << "\n";
   mostrarAlumno(alumnoMejorPromedio(arr));
   cout << "\n";

   return 0;
}
