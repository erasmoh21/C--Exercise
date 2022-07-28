#include<iostream>
#include<string>
using namespace std;

struct Notas {
   int nota1,nota2,nota3;
};

struct Alumno {
   std::string nombre;
   std::string sexo;
   int edad;
   struct Notas notas;
};

void numeroAlumnosADigitar(int& numeroAlumnos) {
   cout << "Digite el numero de alumnos a digitar: ";
   cin >> numeroAlumnos;
}

void rellenarDatos(Alumno alumnos[],int numeroAlumnos) {
   int i = 0;

   while(i < numeroAlumnos) {
      cin.ignore();
      cout << "\nDigite el nombre: ";
      getline(cin,alumnos[i].nombre);
      cout << "Digite el sexo: ";
      getline(cin,alumnos[i].sexo);
      cout << "Digite la edad: ";
      cin >> alumnos[i].edad;
      cout << "Digite la nota 1: ";
      cin >> alumnos[i].notas.nota1;
      cout << "Digite la nota 2: ";
      cin >> alumnos[i].notas.nota2;
      cout << "Digite la nota 3: ";
      cin >> alumnos[i].notas.nota3;
      i++;
   }
}

float calcularPromedio(Alumno alumnos[],int iterator) {
   float promedioAlumno=0.0;

   promedioAlumno = (alumnos[iterator].notas.nota1+alumnos[iterator].notas.nota2+alumnos[iterator].notas.nota3) / 3;

   return promedioAlumno; 
}

int hallarMejorPromedio(Alumno alumnos[],int numeroAlumnos) {
   int indiceAlumnoMejorPromedio = 0,i=0;
   float numero = 0.0;

   do {
      float promedioAlumno = calcularPromedio(alumnos,i);
      if(promedioAlumno > numero) {
         numero = promedioAlumno;
         indiceAlumnoMejorPromedio = i;
      }
      i++;
   }while(i < numeroAlumnos);

   return indiceAlumnoMejorPromedio;
}

void mostrarMejorAlumno(Alumno alumnos[],int numeroAlumnos) {
   int indiceAlumno = hallarMejorPromedio(alumnos,numeroAlumnos);
   cout << "\n\t\t******Alumno con mejor Promedio******\n";
   cout << "Nombre -> " << alumnos[indiceAlumno].nombre << endl; 
   cout << "\t\t\nSexo -> " << alumnos[indiceAlumno].sexo << endl;
   cout << "\t\t\nEdad -> " << alumnos[indiceAlumno].edad << endl;
   cout << "\t\t\nPromedio -> " << calcularPromedio(alumnos,indiceAlumno) << endl;
}

int main() {
   int numeroAlum=0;

   numeroAlumnosADigitar(numeroAlum);
   Alumno* alumnos = new Alumno[numeroAlum];   
   rellenarDatos(alumnos,numeroAlum); 
   mostrarMejorAlumno(alumnos,numeroAlum);

   delete[] alumnos;
   return 0;
}
