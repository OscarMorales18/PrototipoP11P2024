#include <iostream>

using namespace std;

//Clase nueva con el nombre de "cuenta"
class cuenta {
public:

    int saldo;
    cuenta(double PriSaldo) {
        //Comprobamos si el saldo contiene numeros positivos
        //Tambien creamos un ciclo para que el usuario este obligado a colocar un numero que no sea negativo
        do{
           if (PriSaldo >= 0)
        { saldo = PriSaldo; }
        else
        { cout << " El saldo ingresado no es valido" << endl;
          cout << " Ingrese el saldo de nuevo: ";
          cin >> PriSaldo;
         }

        } while (PriSaldo<=0);

    }

    //Funcion abono
    void abono(double monto) {
    //Sumamos el monto adicional
        if(monto > 0)
        {
            saldo = saldo + monto;
            cout << " Se a abonado: " << monto << " del nuevo monto." << endl;
        }
    }

    //Funcion para reetirar el monto
    void retiramonto(double monto){
        //Preguntamos si el mondo es mayor al saldo para decir que se excedio y si no que lo reste
           if(saldo <= monto)
        {
            cout << " El monto de la cuenta actual se excede, no se pudo hacer ningun cargo." << endl;
        }
        else
        {
            saldo = saldo - monto;
            cout << " Se a retirado: " << monto << " del monto pasado." << endl;
        }

    }

    //Funcion final que dice el saldo total
    void Saldototal()
    {
        cout << saldo << endl;
    }

private:

    double Saldo;
};

int main()
{
    double PriSaldo2,PriSaldo3,sumasaldo2,sumasaldo3,restasaldo2,restasaldo3;

    cout << "\n";
    cout << "                  Cuentas bancarias"<< endl;
    cout << "\n";
    cout << " Ingresar el saldo inicial de la primera cuenta: ";
    cin >> PriSaldo2;
    cuenta cuenta1(PriSaldo2);
    //Pedimos cantidades necesarias para las funciones de la clase cuenta
    cout << " Ingresar el monto quiera agregarla a la primera cuenta: ";
    cin >> sumasaldo2;
    cuenta1.abono(sumasaldo2);
    cout << " Ingresar la cantidad de monto a cargar de la primera cuenta: ";
    cin >> restasaldo2;
    cuenta1.retiramonto(restasaldo2);
    cout << " El saldo total de la primera cuenta es de: "; cuenta1.Saldototal();

    cout << "\n";

    cout << " Ingresar el saldo inicial de la segunda cuenta: ";
    cin >> PriSaldo3;
    cuenta cuenta2(PriSaldo3);
    //Pedimos cantidades necesarias para las funciones de la clase cuenta
    cout << " Ingresar el monto quiera agregarla a la segunda cuenta: ";
    cin >> sumasaldo3;
    cuenta2.abono(sumasaldo3);
    cout << " Ingresar la cantidad de monto a cargar de la segunda cuenta: ";
    cin >> restasaldo3;
    cuenta2.retiramonto(restasaldo3);
    cout << " El saldo total de la segunda cuenta es de: "; cuenta2.Saldototal();
}
