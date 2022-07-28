#include<iostream>
#include<string>
using namespace std;

struct Atleta {
   std::string nombre; 
   std::string pais;
   int numeroMedallas;
};

void numeroDeAtletasADigitar(int& numeroAtletas) {
   cout << "Digite el numero de atletas que desea digitar: ";
   cin >> numeroAtletas;
}

void rellenarDatosAtletas(Atleta atletas[],int numeroAtletas) {

   for(int i = 0; i < numeroAtletas; i++) {
      cin.ignore();
      cout << "\nDigite el nombre: ";
      getline(cin,atletas[i].nombre);
      cout << "Digite el apellido: ";
      getline(cin,atletas[i].pais);
      cout << "Digite el numero de medallas: ";
      cin >> atletas[i].numeroMedallas;
   }
}

void buscarAtletaConMayorMedallas(Atleta atletas[],int numeroAtletas,int& indiceDeAtleta) {
   int numero = 0; 
 
   for(int i = 0; i < numeroAtletas; i++) {
      if(atletas[i].numeroMedallas > numero) {
         numero = atletas[i].numeroMedallas;
 	 indiceDeAtleta = i;
      }
   }
}

void mostrarAtletaConMayorMedalla(Atleta atletas[],int indiceDeAtleta) {
   cout << "\n\t*****Atleta con mayor numero de medallas*****" << endl;
   cout << "\tNombre -> " << atletas[indiceDeAtleta].nombre << endl;
   cout << "\tPais -> " << atletas[indiceDeAtleta].pais << endl;
   cout << "\tNumero de medallas -> " << atletas[indiceDeAtleta].numeroMedallas <<endl;
}

int main() {
   int numeroIndice = 0,numeroDeAtletas=0;

   numeroDeAtletasADigitar(numeroDeAtletas);
   Atleta* atletas = new Atleta[numeroDeAtletas];
   rellenarDatosAtletas(atletas,numeroDeAtletas); 
   buscarAtletaConMayorMedallas(atletas,numeroDeAtletas,numeroIndice);
   mostrarAtletaConMayorMedalla(atletas,numeroIndice);


   delete[] atletas;
   return 0;
}

