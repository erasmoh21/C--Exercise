#include<iostream>
#include<string>
using namespace std;

struct Empleado {
   std::string nombre;
   std::string apellido;
   int edad;
   double salario;
};

void preguntaNumeroEmpleados(int& numeroEmpleados) {
   cout << "Digite el numero de empleados que desea ingresar: ";
   cin >> numeroEmpleados;
}

void digitarInformacionEmpleados(Empleado empleados[],int numeroEmpleado) {
   for(int i = 0; i < numeroEmpleado; i++) {
      cin.ignore();
      cout << "Digite el nombre: ";
      getline(cin,empleados[i].nombre);
      cout << "Digite el apellido: ";
      getline(cin,empleados[i].apellido);
      cout << "Digite la edad: ";
      cin >> empleados[i].edad;
      cout << "Digite el salario: ";
      cin >> empleados[i].salario;
      cout << endl;
   }
}

void ordenarArrayEmpleados(Empleado empleados[],int numeroEmpleado) {
   Empleado empleado = Empleado();   

   for(int i = 0; i < numeroEmpleado; i++) {
      for(int j = 0; j < numeroEmpleado; j++) {
         if(empleados[j].salario > empleados[i].salario) {
            empleado = empleados[j];  
            empleados[j] = empleados[i];
            empleados[i] = empleado;
         }      
      }
   }
}

void mostrarEmpleados(Empleado empleados[],int numeroEmpleado) {

   cout << "\t*****Datos de empleados*****\n";
   for(int i = 0; i < numeroEmpleado; i++) {
      cout << "\t\nNombre: " << empleados[i].nombre << endl;
      cout << "\tApellido: " << empleados[i].apellido << endl;
      cout << "\tEdad: " << empleados[i].edad << endl;
      cout << "\tSalario: " << empleados[i].salario << endl;
   }
}

int main() {
   int numeroEmp = 0;

   preguntaNumeroEmpleados(numeroEmp);
   Empleado* empleados = new Empleado[numeroEmp];
   digitarInformacionEmpleados(empleados,numeroEmp);   
   ordenarArrayEmpleados(empleados,numeroEmp);
   mostrarEmpleados(empleados,numeroEmp);

   delete[] empleados;
   return 0;
}
