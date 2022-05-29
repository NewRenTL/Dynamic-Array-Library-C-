//
// Created by Sierpe on 17/05/2022.
//
#include <iomanip>
#include <iostream>
#include <vector>
#include "math.h"
#include "string"
#include <stdlib.h>
#include <time.h>
using namespace std;
#include "Funciones.h"

//Funcion para crear matriz Cuadrada recibiendo un puntero que apunte a otro puntero
void crearMatrizCuad(int **&crearMatriz, int dimensiones) {
    crearMatriz = new int*[dimensiones]();
    for (auto i =0;i<dimensiones;i++){
        crearMatriz[i] = new int[dimensiones];
    }
}

//Funcion para crear matriz Cuadrada recibiendo un puntero que apunte a otro puntero
void crearMatrizPropia(int **&crearMatriz, int filas, int columnas) {
    crearMatriz = new int*[filas]();
    for (auto i =0;i<filas;i++){
        crearMatriz[i] = new int[columnas];
    }
}

void matrizRandomsCuad(int **&matriz, int dimensiones,int limitesup,int limitinf) {
    srand(time(NULL));
    for (auto i=0 ; i<dimensiones;i++){
        for (int j = 0; j < dimensiones; ++j) {
            matriz[i][j]= (limitinf + rand() %(limitesup +1 - limitinf));
        }
    }

}



void matrizRandomsAsig(int **&matriz, int filas, int columnas,int limitesup,int limitinf) {
    srand(time(NULL));
    for (auto i=0 ; i<filas;i++){
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j]= (limitinf + rand() %(limitesup +1 - limitinf));
        }
    }
}

void matrizRandomsParsCuad(int **&matriz, int dimension ,int limitesup,int limitinf) {
    srand(time(NULL));
    for (auto i = 0;i<dimension;i++){
        for (auto j = 0 ; j<dimension;j++){
            int m;
            do{
                m = ( limitinf + rand() % (limitesup + 1 - limitinf));
            } while (m%2 != 0);

            matriz[i][j]=m;
        }
    }
}

int numerorandom(int limitinf,int limitsup){

    srand(time(0));
    int a = (limitinf + rand() %(limitsup +1 - limitinf));
    return a;
}
void matrizRandomsParsAsig(int **&matriz, int filas, int columnas,int limitesup,int limitinf) {
    srand(time(NULL));
    for (auto i = 0;i<filas;i++){
        for (auto j = 0 ; j<columnas;j++){
            int m;
            do{
                m = ( limitinf + rand() % (limitesup + 1 - limitinf));
            } while (m%2 != 0);

            matriz[i][j]=m;
        }
    }
}

void matrizRandomsImparsAsig(int **&matriz, int filas, int columnas,int limitesup,int limitinf) {
    for (auto i = 0;i<filas;i++){
        for (auto j = 0 ; j<columnas;j++){
            int m;
            do{
                m = ( limitinf + rand() % (limitesup + 1 - limitinf));
            } while (m%2 == 0);

            matriz[i][j]=m;
        }
    }
}

void matrizRandomsImparsCuad(int **&matriz, int dimension,int limitesup,int limitinf) {
    for (auto i = 0;i<dimension;i++){
        for (auto j = 0 ; j<dimension;j++){
            int m;
            do{
                m = ( limitinf + rand() % (limitesup + 1 - limitinf));
            } while (m%2 == 0);

            matriz[i][j]=m;
        }
    }
}

void matrizRandomsMultiploAsig(int **&matriz, int filas, int columnas,int multiplo,int limitesup,int limitinf) {
    for (auto i = 0;i<filas;i++){
        for (auto j = 0 ; j<columnas;j++){
            int m;
            do{
                m = ( limitinf + rand() % (limitesup + 1 - limitinf));
            } while (m%multiplo != 0);
            matriz[i][j]=m;
        }
    }
}
void matrizRandomsMultiploCuad(int **&matriz, int dimension,int multiplo,int limitesup,int limitinf) {
    for (auto i = 0;i<dimension;i++){
        for (auto j = 0 ; j<dimension;j++){
            int m;
            do{
                m = ( limitinf + rand() % (limitesup + 1 - limitinf));
            } while (m%multiplo != 0);
            matriz[i][j]=m;
        }
    }
}
bool esPrimo(int numero){
    bool c = true;
    for(auto i =2;i<numero;i++){
        if (numero%i == 0){
            c = false;
            break;
        }
    }
    return c;
}

void matrizRandomsPrimosAsig(int **&matriz, int filas, int columnas,int limitesup,int limitinf) {
    for (auto i = 0;i<filas;i++){
        for (auto j = 0 ; j<columnas;j++){
            int m;
            bool c;
            do{
                m = (limitinf + rand() % (limitesup + 1 -limitinf));
                c = esPrimo(m);
            } while (c == false);
            matriz[i][j]=m;
        }
    }
}

void matrizRandomsPrimosCuad(int **&matriz, int dimension,int limitesup,int limitinf) {
    for (auto i = 0;i<dimension;i++){
        for (auto j = 0 ; j<dimension;j++){
            int m;
            bool c;
            do{
                m = (limitinf + rand() % (limitesup + 1 -limitinf));
                c = esPrimo(m);
            } while (c == false);
            matriz[i][j]=m;
        }
    }
}

void imprimirMatricesCuad(int **matriz, int dimension) {
    for  (auto i = 0; i < dimension;i++){
        for(auto j = 0 ;j < dimension;j++){
            cout << setw(2)<<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
}

void imprimirMatricesAsig(int **matriz, int filas, int columnas) {
    for  (auto i = 0; i < filas;i++){
        for(auto j = 0 ;j < columnas;j++){
            cout << setw(2)<<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
}

void PrintMatrizTras(int **matriz, int filas, int columnas){
    for (auto i = 0; i <columnas;i++){
        for (auto j = 0;j<filas;j++){
            cout<<setw(4)<<matriz[i][j]<<"  ";
        }
        cout <<"\n";
    }
}



void matrizHaciaAbajo(int **&matriz,int filas){
    //Salvamos la ultima fila de la matriz por que va a ser reemplazada por la fila anterior
    //Creo un puntero para guardar el array
    int *ultimo = matriz[filas-1];
    /*
     1. Inicializo desde el ultimo indice
     Para que de la sensación de que se reemplaza hacia abajo
     2. Necesito que la filas tome el valor de la filas anterior
     3. No le coloco hasta el cero, por que cuando llegue a indice 0 pedira un indice -1 que no existe
     Y dara error
     4. Le asigno a la primera fila ( indice 0 ) el valor que he salvado antes en un puntero
     Por que se iba borrar al momento de ir reemplazan
    */
    for (auto i = filas-1 ;i > 0;i--) {
        matriz[i] = matriz[i - 1];
    }
    matriz[filas - filas] = ultimo;
}

void matrizHaciaArriba(int **&matriz,int filas){
    //Salvamos la primera fila de la matriz por que va a ser reemplazada por la fila anterior
    //Creo un puntero para guardar el array
    /*
     1. Inicializo desde el ultimo indice
     Para que de la sensación de que se reemplaza hacia arriba
     2. Necesito que la fila tome el valor de la fila siguiente
     3. No le coloco hasta el ultimo, por que cuando llegue a ultimo indice pedira un ultimo
     indice + 1 que no existe , dando error
     4. Le asigno a la ultima fila ( ultimo indice ) el valor que he salvado antes en un puntero
     Por que se iba borrar al momento de ir reemplazan
    */
    int *primero = matriz[filas-filas];
    for (auto i = 0; i<filas-1;i++){
        matriz[i] = matriz[i + 1];
    }
    matriz[filas - 1] = primero;
}

void matrizHaciaIzquierdaAsig(int **&matriz,int filas,int columnas){
    //Salvamos la primera columna de la matriz por que va a ser reemplazada por la columna siguiente
    //Creo un puntero para guardar el dato
    for (auto i = 0; i<filas;i++){
        int primeracol = matriz[i][columnas- columnas];
        for(auto j = 0;j < columnas -1;j++){
            matriz[i][j] =matriz[i][j+1];
        }
        matriz[i][columnas-1] = primeracol;
    }
}

void matrizHaciaIzquierdaCuad(int **&matriz,int dimensiones){
    //Salvamos la primera columna de la matriz por que va a ser reemplazada por la columna siguiente
    //Creo un puntero para guardar el dato
    for (auto i = 0; i<dimensiones;i++){
        int primeracol = matriz[i][dimensiones- dimensiones];
        for(auto j = 0;j < dimensiones -1;j++){
            matriz[i][j] =matriz[i][j+1];
        }
        matriz[i][dimensiones-1] = primeracol;
    }
}

void matrizHaciaDerechaCuad(int **&matriz,int dimensiones){
    //Salvamos la ultima columna fila de la matriz por que va a ser reemplazada por la columna anterior
    //Creo un puntero para guardar el dato
    for (auto i = 0; i<dimensiones;i++){
        int ultimacol = matriz[i][dimensiones-1];
        for(auto j = dimensiones-1;j >0 ;j--){
            matriz[i][j] =matriz[i][j-1];
        }
        matriz[i][dimensiones-dimensiones]= ultimacol;
    }
}

void matrizHaciaDerechaAsig(int **&matriz,int filas,int columnas){
    //Salvamos la ultima columna fila de la matriz por que va a ser reemplazada por la columna anterior
    //Creo un puntero para guardar el dato
    for (auto i = 0; i<filas;i++){
        int ultimacol = matriz[i][columnas-1];
        for(auto j = columnas-1;j >0 ;j--){
            matriz[i][j] =matriz[i][j-1];
        }
        matriz[i][columnas-columnas]= ultimacol;
    }
}

void borraMatriz(int **&matriz,int filas){
    for (auto i = 0;i<filas;i++){
        delete[] matriz[i];
    }
    delete[]matriz;
    matriz = nullptr;
}

void matrizTraspuestaCuad(int **&matriz, int dimension) {
    for (auto i = 1;i < dimension;i++){
        for (auto j = 0;j<i;j++){
            int aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i]= aux;
        }
    }
}
//Funciones de Matriz Traspuesta
//VERSION 1
void matrizTraspuestaAsig1(int **&matriz,int  **&matriztras2,int filas,int columnas) {
    crearMatrizPropia(matriztras2,columnas,filas);
    cout<<"Iniciando.."<<endl;
    for (auto i = 0 ;i <columnas;i++){
        for (int j = 0;j<filas;j++) {
            int mod1;
            mod1 = matriz[j][i];
            matriztras2[i][j]=mod1;
        }
    }
}
//VERSION 2
void matrizTraspuestaAsig2(int **matriz, int **&matriz2,int filas,int columnas){
    matriz2 = new int*[columnas];
    for (auto i = 0; i < columnas;i++){
        matriz2[i] = new int[filas];
    }

    for (auto i = 0; i < columnas;i++) {
        for (auto j = 0; j <filas;j++){
            matriz2[i][j] = matriz[j][i];
        }
    }
}


void matrizZerosCuad(int **&matriz, int dimension) {
    for ( auto i = 0;i <dimension;i++){
        for (auto j = 0;j <dimension;j++){
            matriz[i][j]= 0;
        }
    }
}

void matrizZerosAsig(int **&matriz, int filas, int columnas) {
    for ( auto i = 0;i <filas;i++){
        for (auto j = 0;j <columnas;j++){
            matriz[i][j]= 0;
        }
    }
}
void matrizIdentidadCuadad(int **&matriz,int dimension){
    for ( auto i = 0;i <dimension;i++){
        for (auto j = 0;j <dimension;j++){
            if (i == j){
                matriz[i][j]= 1;
            }
            else
                matriz[i][j]=0;
        }
    }
}
void matrizIdentidadAsig(int **&matriz,int filas,int columnas){
    for ( auto i = 0;i <filas;i++){
        for (auto j = 0;j <columnas;j++){
            if (i == j){
                matriz[i][j]= 1;
            }
            else
                matriz[i][j]=0;
        }
    }
}

void matrizZerosAsigComplete(int **&matriz, int filas, int columnas) {
    matriz = new int*[filas];
    for (auto i = 0;i<filas;i++){
        matriz[i]=new int [columnas];
    }
    for ( auto i = 0;i <filas;i++){
        for (auto j = 0;j <columnas;j++){
            matriz[i][j]= 0;
        }
    }
}

void matrizSimetricaRandom(int **&matriz, int dimension,int limitinf,int limitsup){
    srand(time(NULL));
    for (auto i=0 ; i<dimension;i++){
        for (int j = 0; j < dimension; ++j) {
            if (i==j){
                matriz[i][j] = (limitinf + rand() %(limitsup +1 - limitinf));
            }
            else if (i != j and matriz[i][j]==0){
                matriz[i][j]= (limitinf + rand() %(limitsup +1 - limitinf));
                matriz[j][i]= matriz[i][j];
            }
        }
    }
    /*
    for(auto i=0;i<dimension;i++){
        matriz[i][i] = numerorandom(limitinf,limitsup);
    }
     */
}


