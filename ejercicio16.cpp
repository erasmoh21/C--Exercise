#include<iostream>
using namespace std;




class CuentaBancaria {
   private:
      int saldoInicial;
   public:
      CuentaBancaria() {
         saldoInicial = 1000;
      }
 
      ~CuentaBancaria()  {
       }
      
      void depositarDinero(int montoADepositar) {
         this->saldoInicial += montoADepositar;  
      }

      void retirarDinero(int montoARetirar) {
         if(this->saldoInicial < montoARetirar) {
            cout << "El saldo es insuficiente";
         }
         else {
            this->saldoInicial -= montoARetirar;
         }
      }

      int obtenerSaldo() {
         return this->saldoInicial;
      }
};

int main() {
   CuentaBancaria cuenta1 = CuentaBancaria();
   int opcion = 0,montoADepositar=0,montoARetirar=0;

   do {
      cout << "********Banco el pepe********" << endl;
      cout << "1.-Depositar dinero" << endl;
      cout << "2.-Retirar dinero" << endl;
      cout << "3.-Obtener Saldo" << endl;
      cout << "4.-Salir" << endl;
      cout << "Digite una opcion: ";
      cin >> opcion;
      
      switch(opcion) {
         case 1:
            cout << "Digite el dinero a depositar: ";
            cin >> montoADepositar;
            cout << "\nDeposito Exitoso";
            cuenta1.depositarDinero(montoADepositar);
            system("pause");
            break;
         case 2:
            cout << "Digite el monto que desea retirar: ";
            cin >> montoARetirar;
            cuenta1.retirarDinero(montoARetirar);
            system("pause");
            break;
         case 3:
            cout << "Su saldo es: " << cuenta1.obtenerSaldo();
            system("pause");
            break;
         default:
            cout << "Hasta luego :)";
            system("pause");
      }
      system("clear");
   }while(opcion != 4);


   return 0;
}
