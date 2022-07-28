#include<iostream>
using namespace std;

int contadorNotas1=0,contadorNotas2=0,contadorNotas3=0,contadorNotas4=0,contadorNotas5=0;
bool validar1=false,validar2=false,validar3=false,validar4=false,validar5=false;

void pregunta(int &alumno1,int &alumno2,int &alumno3,int &alumno4,int &alumno5) {

   for(int i = 0; i <= 2 ; i++) {
      cout << "Digite la nota del alumno 1: ";
      cin >> alumno1;
      cout << "Digite la nota del alumno 2: ";
      cin >> alumno2;
      cout << "Digite la nota del alumno 3: ";
      cin >> alumno3;
      cout << "Digite la nota del alumno 4: ";
      cin >> alumno4;
      cout << "Digite la nota del alumno 5: ";
      cin >> alumno5;
      cout << endl;
      
      contadorNotas1 += alumno1;
      contadorNotas2 += alumno2;
      contadorNotas3 += alumno3;
      contadorNotas4 += alumno4;
      contadorNotas5 += alumno5;
      
      if(i == 2) {
         if(contadorNotas1 >= 2 && contadorNotas1 <= 4 && alumno1 >= 3) {
            validar1 = true;
         }
         if(contadorNotas2 >= 2 && contadorNotas2 <= 4 && alumno2 >= 3) {
            validar2 = true;
         }
         if(contadorNotas3 >= 2 && contadorNotas3 <= 4 && alumno3 >= 3) {
            validar3 = true;
         }
         if(contadorNotas4 >= 2 && contadorNotas4 <= 4 && alumno4 >= 3) {
            validar4 = true;
         }
         if(contadorNotas5 >= 2 && contadorNotas5 <= 4 && alumno5 >= 3) {
            validar5 = true;
         }
      } 
   }
}

void preguntarOpcionesEstadisticas() {
   int confirmacion = 0; 
   do {
      cout << "\n1.-Alumnos que aprobaron todos los examen" << endl;
      cout << "2.-Alumnos que aprobaron al menos un examen" << endl;
      cout << "3.-Alumnos que aprobaron unicamente el ultimo examen" << endl;
      cout << "4.-Salir" << endl;
      cout << "Digite la opcion: ";
      cin >> confirmacion;
      
      switch(confirmacion) {
         case 1:
            if(contadorNotas1 >= 13) {
               cout << "El alumno 1 aprobo todos los examenes" << endl;
            }
            if(contadorNotas2 >= 13) {
               cout << "El alumno 2 aprobo todos los examenes" << endl;
            }
            if(contadorNotas3 >= 13) {
               cout << "El alumno 3 aprobo todos los examenes" << endl;
            }
            if(contadorNotas4 >= 13) {
               cout << "El alumno 4 aprobo todos los examanes" << endl;
            }
            if(contadorNotas5 >= 13) {
               cout << "El alumno 5 aprobo todos los examens" << endl;
            }
            break;
         case 2:
            if(contadorNotas1 >= 5 && contadorNotas1 <= 7) {
               cout << "El alumno 1 aprobo al menos un examen" << endl;
            } 
            if(contadorNotas2 >= 5 && contadorNotas2 <= 7) {
               cout << "El alumno 2 aprobo al menos un examen" << endl;
            }
            if(contadorNotas3 >= 5 && contadorNotas3 <= 7) {
              cout << "El alumno 3 aprobo al menos un examen" << endl;
            }
            if(contadorNotas4 >= 5 && contadorNotas4 <= 7) {
              cout << "El alumno 4 aprobo al menos un examen" << endl;
            }
            if(contadorNotas5 >= 5 && contadorNotas5 <= 7) {
              cout << "El alumno 5 aprobo al menos un examen" << endl;
            }
            break;
         case 3:
            if(validar1) {
               cout << "El alumno 1 aprobo solo el ultimo examen" << endl; 
            } 
            if(validar2) {
               cout << "El alumno 2 aprobo solo el ultimo examen" << endl;
            }
            if(validar3) {
               cout << "El alumno 3 aprobo solo el ultimo examen" << endl;
            }
            if(validar4) {
               cout << "El alumno 4 aprobo solo el ultimo examen" << endl;
            }
            if(validar5) {
               cout << "El alumno 5 aprobo solo el ulitmo examen" << endl;
            }
            break;
         default:
            cout << "Tiene que digitar un numero acorde a las opciones correspondientes :-)" << endl; 
      }

   }while(confirmacion != 4);

}

int main() {
   int alumno1=0,alumno2=0,alumno3=0,alumno4=0,alumno5=0;
   
   pregunta(alumno1,alumno2,alumno3,alumno4,alumno5);
   preguntarOpcionesEstadisticas();
   
   return 0;
}
