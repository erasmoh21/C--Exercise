#include<iostream>
using namespace std;

struct Tiempo {
   int hora,minuto,segundo;
};

void preguntarNumeroEtapas(int& numeroEtapas) {
   cout << "Digite el numero de etapas: ";
   cin >> numeroEtapas;
}

void rellenarDatos(Tiempo tiemposRecorrido[],int numeroEtapas) {
   for(int i = 0; i < numeroEtapas; i++) {
      cout << "\nDigite la hora ";
      cin >> tiemposRecorrido[i].hora;
      cout << "Digite el minuto: ";
      cin >> tiemposRecorrido[i].minuto;
      cout << "Digite el segundo: ";
      cin >> tiemposRecorrido[i].segundo;
   }
}

void calculoDatosDeEtapas(Tiempo tiemposRecorrido[],int& numeroEtapas,int& horasTotal,int& minutosTotal,int& segundosTotal) {
   for(int i = 0; i < numeroEtapas; i++) {
      segundosTotal += tiemposRecorrido[i].segundo;
      minutosTotal += tiemposRecorrido[i].minuto;
      horasTotal += tiemposRecorrido[i].hora;
      if(segundosTotal >= 60) {
         segundosTotal=0;
         minutosTotal++;
      }
      if(minutosTotal >= 60) {
         minutosTotal = 0;
         horasTotal++;
      }
   }
   
}

void mostrarTiempoTotalDeEtapas(int horasTotal,int minutosTotal,int segundosTotal) {
   cout << "\n*****Tiempo total recorrido*****\n";
   cout << "Hora: " << horasTotal << endl; 
   cout << "Minuto: " << minutosTotal << endl;
   cout << "Segundos: " << segundosTotal << endl;
}

int main() {
   int horasTotal=0,minutosTotal=0,segundosTotal=0;
   int numeroEtapas=0;

   preguntarNumeroEtapas(numeroEtapas);
   Tiempo* tiemposRecorrido = new Tiempo[numeroEtapas];   
   rellenarDatos(tiemposRecorrido,numeroEtapas);
   calculoDatosDeEtapas(tiemposRecorrido,numeroEtapas,horasTotal,minutosTotal,segundosTotal); 
   mostrarTiempoTotalDeEtapas(horasTotal,minutosTotal,segundosTotal);


   delete[] tiemposRecorrido;
   return 0;
}
