//Definicion de las librerias necesarias

#include <iostream> //Libreria default
#include <string> //Libreria para declarar valores tipo string
#include <iomanip> //Libreria para


using namespace std;

//Declaracion de variables predefinidas

#define NUM_ALUMNOS 5
#define NUM_NOTAS 4

//Declaracion de las funciones a utilizar

void IngNombres(string nombres[NUM_ALUMNOS]);
void RellenaMatrizFI(float matriz[NUM_ALUMNOS][NUM_NOTAS]);
void RellenaMatrizFD(float matriz[NUM_ALUMNOS][NUM_NOTAS]);
void RellenaMatrizFP(float matriz[NUM_ALUMNOS][NUM_NOTAS]);
void imprimirMatrizLinea();
int GenerarPrimerParcialyActividades();
int GenerarSegundoParcial();
int GenerarExamenFinal();

int main()
{
    //Declaracion de variables
    int i, j;
    char res;
    int totala=0, totalb=0, totalc=0, totald=0, totale=0;
    float matriza[NUM_ALUMNOS][NUM_NOTAS], matrizb[NUM_ALUMNOS][NUM_NOTAS], matrizc[NUM_ALUMNOS][NUM_NOTAS];
    string nombresa[NUM_ALUMNOS];
    srand(getpid());

    //Ciclo para repetir el ciclo las veces que el usuario quiera
    do
    {

    system("cls");

    //Titulo del programa
    cout << "\n";
    cout << "     Notas de los alumnos de la Univesidad Mariano Galvez" << endl;
    cout << "\n";

    //Funciones en accion
    IngNombres(nombresa);
    system("cls");
    RellenaMatrizFI(matriza);
    RellenaMatrizFD(matrizb);
    RellenaMatrizFP(matrizc);


    //Imprimir la tabla de Primer Semestre
    cout << "\n";
    cout << "                Primer Semestre" << endl;
    cout << "\n";
    imprimirMatrizLinea();
    cout << "| " << "Nombres" << setw(7) << "P.P" << setw(9) << "S.P" << setw(9) << "E.F" << setw(7) << "A" << "    |" << endl;
    imprimirMatrizLinea();

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        cout << "!" << setw(8) << nombresa[i] << "!";

        for ( j=0 ; j<NUM_NOTAS ; j++ )
        {
            cout << setw(8) << matriza[i][j] << "!";
        }
        cout << "\n";
    }
    totala = totala + matriza[0][0] + matriza[0][1] + matriza[0][2] + matriza[0][3] + matriza[0][4];
    totalb = totalb + matriza[1][0] + matriza[1][1] + matriza[1][2] + matriza[1][3] + matriza[1][4];
    totalc = totalc + matriza[2][0] + matriza[2][1] + matriza[2][2] + matriza[2][3] + matriza[2][4];
    totald = totald + matriza[3][0] + matriza[3][1] + matriza[3][2] + matriza[3][3] + matriza[3][4];
    totale = totale + matriza[4][0] + matriza[4][1] + matriza[4][2] + matriza[4][3] + matriza[4][4];
    imprimirMatrizLinea();


    //Imprimir la tabla de Segundo Semestre
    cout << "\n";
    cout << "                Segundo Semestre" << endl;
    cout << "\n";
    imprimirMatrizLinea();
    cout << "| " << "Nombres" << setw(7) << "P.P" << setw(9) << "S.P" << setw(9) << "E.F" << setw(7) << "A" << "    |" << endl;
    imprimirMatrizLinea();

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        cout << "!" << setw(8) << nombresa[i] << "!";

        for ( j=0 ; j<NUM_NOTAS ; j++ )
        {
            cout << setw(8) << matrizb[i][j] << "!";
        }
        cout << "\n";
    }
    totala = totala + matrizb[0][0] + matrizb[0][1] + matrizb[0][2] + matrizb[0][3] + matrizb[0][4];
    totalb = totalb + matrizb[1][0] + matriza[1][1] + matrizb[1][2] + matrizb[1][3] + matrizb[1][4];
    totalc = totalc + matrizb[2][0] + matrizb[2][1] + matrizb[2][2] + matrizb[2][3] + matrizb[2][4];
    totald = totald + matrizb[3][0] + matrizb[3][1] + matrizb[3][2] + matrizb[3][3] + matrizb[3][4];
    totale = totale + matrizb[4][0] + matrizb[4][1] + matrizb[4][2] + matrizb[4][3] + matrizb[4][4];
    imprimirMatrizLinea();


    //Imprimir la tabla de Tercer Semestre
    cout << "\n";
    cout << "                Tercer Semestre" << endl;
    cout << "\n";
    imprimirMatrizLinea();
    cout << "| " << "Nombres" << setw(7) << "P.P" << setw(9) << "S.P" << setw(9) << "E.F" << setw(7) << "A" << "    |" << endl;
    imprimirMatrizLinea();

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        cout << "!" << setw(8) << nombresa[i] << "!";

        for ( j=0 ; j<NUM_NOTAS ; j++ )
        {
            cout << setw(8) << matrizc[i][j] << "!";
        }
        cout << "\n";
    }
    totala = totala + matrizc[0][0] + matrizc[0][1] + matrizc[0][2] + matrizc[0][3] + matrizc[0][4];
    totalb = totalb + matrizc[1][0] + matrizc[1][1] + matrizc[1][2] + matrizc[1][3] + matrizc[1][4];
    totalc = totalc + matrizc[2][0] + matrizc[2][1] + matrizc[2][2] + matrizc[2][3] + matrizc[2][4];
    totald = totald + matrizc[3][0] + matrizc[3][1] + matrizc[3][2] + matrizc[3][3] + matrizc[3][4];
    totale = totale + matrizc[4][0] + matrizc[4][1] + matrizc[4][2] + matrizc[4][3] + matrizc[4][4];
    imprimirMatrizLinea();
    cout << "\n";

    //Calculo del mayor puntaje
    if ( (totala>totalb) && (totala>totalc) && (totala>totald) && (totala>totale) )
    {
        cout << "El alumno " << nombresa[0] << " tubo la mayor nota con: " << totala << " puntos." << endl;
    }
    else if ( (totalb>totala) && (totalb>totalc) && (totalb>totald) && (totalb>totale) )
    {
        cout << "El alumno " << nombresa[1] << " tubo la mayor nota con: " << totalb << " puntos." <<  endl;
    }
    else if ( (totalc>totala) && (totalc>totalb) && (totalc>totald) && (totalc>totale) )
    {
        cout << "El alumno " << nombresa[2] << " tubo la mayor nota con: " << totalc << " puntos." << endl;
    }
    else if ( (totald>totala) && (totald>totalb) && (totald>totalc) && (totald>totale) )
    {
        cout << "El alumno " << nombresa[3] << " tubo la mayor nota con: " << totald << " puntos." << endl;
    }
    else if ( (totale>totala) && (totale>totalb) && (totale>totalc) && (totale>totald) )
    {
        cout << "El alumno " << nombresa[4] << " tubo la mayor nota con: " << totale << " puntos." << endl;
    }

    cout << "\n";
    //Calculo del menor puntaje

    if ( (totala<totalb) && (totala<totalc) && (totala<totald) && (totala<totale) )
    {
        cout << "El alumno " << nombresa[0] << " tubo la menor nota con: " << totala << " puntos." << endl;
    }
    else if ( (totalb<totala) && (totalb<totalc) && (totalb<totald) && (totalb<totale) )
    {
        cout << "El alumno " << nombresa[1] << " tubo la menor nota con: " << totalb << " puntos." << endl;
    }
    else if ( (totalc<totala) && (totalc<totalb) && (totalc<totald) && (totalc<totale) )
    {
        cout << "El alumno " << nombresa[2] << " tubo la menor nota con: " << totalc << " puntos." << endl;
    }
    else if ( (totald<totala) && (totald<totalb) && (totald<totalc) && (totald<totale) )
    {
        cout << "El alumno " << nombresa[3] << " tubo la menor nota con: " << totald << " puntos." << endl;
    }
    else if ( (totale<totala) && (totale<totalb) && (totale<totalc) && (totale<totald) )
    {
        cout << "El alumno " << nombresa[4] << " tubo la menor nota con: " << totale << " puntos." << endl;
    }

        cout << "\n";
        cout << "Desea repetir el proceso? (s/n): ";
        cin >> res;
        cout << "\n";
        totala = 0;
        totalb = 0;
        totalc = 0;
        totald = 0;
        totale = 0;

    } while (res == 's' || res == 'S');

    return 0;
}

//Funcion para poder ingresar los nombres de los alumnos
void IngNombres(string nombres[NUM_ALUMNOS])
{
    int i;

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        cout << "         Ingrese el nombre del alumno No." << i+1 << ": ";
        cin >> nombres[i];
        cout << "\n";
    }
}

//Generacion de numeros aleatorios (Primer parcial y Actividades)
int GenerarPrimerParcialyActividades()
{
    return rand() % 20;
}

//Generacion de numeros aleatorios (Segundo parcial)
int GenerarSegundoParcial()
{
    return rand() % 25;
}

//Generacion de numeros aleatorios (Examen final)
int GenerarExamenFinal()
{
    return rand() % 35;
}

//Rellena la matriz de la facultad de ingieneria
void RellenaMatrizFI(float matriz[NUM_ALUMNOS][NUM_NOTAS])
{
    int i,j;

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][0] = GenerarPrimerParcialyActividades();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][1] = GenerarSegundoParcial();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][2] = GenerarExamenFinal();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][3] = GenerarPrimerParcialyActividades();
    }

}

//Rellena la matriz de la facultad de derecho
void RellenaMatrizFD(float matriz[NUM_ALUMNOS][NUM_NOTAS])
{
    int i,j;

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][0] = GenerarPrimerParcialyActividades();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][1] = GenerarSegundoParcial();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][2] = GenerarExamenFinal();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][3] = GenerarPrimerParcialyActividades();
    }

}

//Rellena la matriz de la facultad de psicologia
void RellenaMatrizFP(float matriz[NUM_ALUMNOS][NUM_NOTAS])
{
    int i,j;

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][0] = GenerarPrimerParcialyActividades();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][1] = GenerarSegundoParcial();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][2] = GenerarExamenFinal();
    }

    for ( i=0 ; i<NUM_ALUMNOS ; i++ )
    {
        matriz[i][3] = GenerarPrimerParcialyActividades();
    }

}

//Imprime una linea de separacion
void imprimirMatrizLinea()
{
    int x;

    cout << "+--------";
    for (x = 0; x < NUM_NOTAS; x++)
    {
        cout << "+--------";
    }
    cout << "+\n";
}
