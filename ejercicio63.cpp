#include<iostream>
#include<string>
using namespace std;

struct Promedio {
   int nota1,nota2,nota3;
};

struct Alumno {
   std::string nombre; 
   std::string sexo;
   int edad;
   struct Promedio notas;
};

void alumnosADigitar(int& numeroAlumnos) {
   cout << "Digite el numero de alumnos: ";
   cin >> numeroAlumnos;
}

void rellenarDatosAlumnos(Alumno alumnos[],int numeroAlumnos) {
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

int calcularPromedioAlumno(Alumno alumnos[],int iterator) {
   int acumuladorDeNotas=0;
   
   acumuladorDeNotas = (alumnos[iterator].notas.nota1 + alumnos[iterator].notas.nota2 + alumnos[iterator].notas.nota3) / 3;

   return acumuladorDeNotas;
}

void mostrarDatosAlumnos(Alumno alumnos[],int numeroAlumnos) {
   int i = 0;
   
   cout << "\t\n*****Datos de Estudiantes******\n";
   do {
      cout << "\t\t\nNombre -> " << alumnos[i].nombre << endl;
      cout << "\t\tSexo -> " << alumnos[i].sexo << endl;
      cout << "\t\tEdad -> " << alumnos[i].edad << endl;
      cout << "\t\tPromedio -> " << calcularPromedioAlumno(alumnos,i) << endl;
      i++;
   }while(i < numeroAlumnos);
}

int main() {
   int numAlumnos=0;
   alumnosADigitar(numAlumnos);
   Alumno* alumnos = new Alumno[numAlumnos];
   rellenarDatosAlumnos(alumnos,numAlumnos);   
   mostrarDatosAlumnos(alumnos,numAlumnos);

   delete[] alumnos;
   return 0;
}
