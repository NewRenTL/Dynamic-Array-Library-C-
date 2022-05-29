#include <iostream>
#include <vector>
#include "math.h"
#include "string"
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include "Funciones.h"
using namespace std;
/*
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
*/
int main() {
    int **matriz;
    int numero,liminf = 100 ,limsup = 200;
    cout <<"Ingrese la dimension de la matriz cuadrada:";
    cin >> numero;
    srand(time(NULL));

    crearMatrizCuad(matriz,numero);

    /*
    matriz = new int *[numero]();
    //CREA MATRICES CUADRADAS VACIAS LISTAS PARA LLENAR DE DATOS
    for (auto i= 0;i < numero;i++){
        matriz[i] = new int[numero]();
    }
    */

    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (PARES E IMPARES)
    matrizRandomsCuad(matriz,numero,limsup,liminf);
    /*
    for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            matriz[i][j]=(100 + rand() % (200 + 1 -100));
        }
    }
    */

    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDO DE 100 A 200 (PARES E IMPARES)"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    imprimirMatricesCuad(matriz,numero);
    /*
    for (auto i = 0;i < numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    */
    cout <<"\n";
    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (PARES)
    matrizRandomsParsCuad(matriz,numero,limsup,liminf);

    /*
    for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            int m;
            do{
            m = (100 + rand() % (200 + 1 -100));
            } while (m%2 != 0);

            matriz[i][j]=m;
        }
    }
    */

    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDO DE 100 A 200 (PARES )"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    imprimirMatricesCuad(matriz,numero);
    /*
    for (auto i = 0;i < numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    */
    cout <<"\n";

    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (IMPARES)
    matrizRandomsImparsCuad(matriz,numero,limsup,liminf);
    /*
    for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            int m;
            do{
                m = (100 + rand() % (200 + 1 -100));
            } while (m%2 == 0);

            matriz[i][j]=m;
        }
    }
    */
    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDON DE 100 A 200 (IMPARES)"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    imprimirMatricesCuad(matriz,numero);
    /*
    for (auto i = 0;i < numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    */
    cout <<"\n";

    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (MULTIPLOS DE 3)
    matrizRandomsMultiploCuad(matriz,numero,3,limsup,liminf);
    /*
    for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            int m;
            do{
                m = (100 + rand() % (200 + 1 -100));
            } while (m%3 != 0);

            matriz[i][j]=m;
        }
    }
    */

    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDON DE 100 A 200 (MULTIPLOS DE 3)"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    imprimirMatricesCuad(matriz,numero);
    /*
    for (auto i = 0;i < numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    */
    cout <<"\n";

    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (MULTIPLOS DE 5)
    matrizRandomsMultiploCuad(matriz,numero,5,limsup,liminf);

    /*
    for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            int m;
            do{
                m = (100 + rand() % (200 + 1 -100));
            } while (m%5 != 0);

            matriz[i][j]=m;
        }
    }
    */

    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDON DE 100 A 200 (MULTIPLOS DE 5)"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    imprimirMatricesCuad(matriz,numero);
    /*
    for (auto i =0;i < numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    */
    cout <<"\n";

    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (MULTIPLOS DE 7)
    matrizRandomsMultiploCuad(matriz,numero,7,limsup,liminf);
    /*
     for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            int m;
            do{
                m = (100 + rand() % (200 + 1 -100));
            } while (m%7 != 0);

            matriz[i][j]=m;
        }
    }
     */

    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDON DE 100 A 200 (MULTIPLOS DE 7)"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    /*
     for (auto i = 0;i < numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
     */
    imprimirMatricesCuad(matriz,numero);
    cout <<"\n";

    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (MULTIPLOS DE 10)
    matrizRandomsMultiploCuad(matriz,numero,10,limsup,liminf);
    /*
     for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            int m;
            do{
                m = (100 + rand() % (200 + 1 -100));
            } while (m%10 != 0);

            matriz[i][j]=m;
        }
    }
     */

    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDON DE 100 A 200 (MULTIPLOS DE 10)"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    imprimirMatricesCuad(matriz,numero);
    /*
     for (auto i = 0;i <numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    */
    cout <<"\n";



    //GENERADO DE MATRIZ CUADRADA NUMERO RANDOM  DE 100 A 200 (PRIMOS)
    matrizRandomsPrimosCuad(matriz,numero,limsup,liminf);
    /*
    for (auto i = 0;i<numero;i++){
        for (auto j = 0 ; j<numero;j++){
            int m;
            bool c;
            do{
                m = (100 + rand() % (200 + 1 -100));

                c = esPrimo(m);
            } while (c == false);

            matriz[i][j]=m;
        }
    }
    */


    cout<<"MATRIZ DE CUADRADA DE NUMERO RANDOM DE 100 A 200 (PRIMOS)"<<"\n";
    //IMPRIMIR CUALQUIER MATRIZ DE 2 DIMENSIONES FILAS Y COLUMNAS
    imprimirMatricesCuad(matriz,numero);

    /*
    for (auto i = 0;i < numero; i++){
        for (auto j = 0 ; j<numero;j++){
            cout <<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
     */
    cout <<"MATRIZ CUADRADA TRASPUESTA:"<<endl;
    matrizTraspuestaCuad(matriz,numero);
    imprimirMatricesCuad(matriz,numero);
    cout <<"\n";
    cout <<"CREAR MATRIZ NO CUADRADA"<<"\n";
    int filas1,columnas2;
    int **matriz2 ;
    cout<<"Ingrese un numero de filas :";cin>>filas1;
    cout<<"Ingrese un numero de columnas :";cin>>columnas2;
    cout<<"\n";
    cout<<"Matriz Asignada Propia "<<to_string(filas1)<<"x"<<to_string(columnas2)<<":"<<endl;
    cout<<"\n";
    crearMatrizPropia(matriz2,filas1,columnas2);

    //NOTA IMPORTANTE: TAMBIEN PUEDES USAR LA MATRIZ DE CEROS PARA LUEGO RELLENAR C:

    //matrizZerosAsigComplete(matriz2,filas1,columnas2);
    /*
    matriz2 = new int*[filas1]();
    for (auto i = 0; i< filas1;i++){
        matriz2[i]=new int[columnas2];
    }
    */

    matrizRandomsAsig(matriz2,filas1,columnas2,limsup,liminf);

    /*
    for (auto i = 0;i<filas1;i++) {
        for (auto j = 0; j < columnas2; j++) {
            matriz2[i][j] = (1 + rand() % (200 + 1 - 1));
        }
    }
    */

    imprimirMatricesAsig(matriz2,filas1,columnas2);

    /*
    for ( auto i = 0 ;i< filas1;i++){
        for (auto j = 0 ; j < columnas2;j++){
            cout <<setw(2)<<matriz2[i][j]<<"  ";
        }
        cout<<"\n";
    }
    */
    cout <<"\n";
    cout<<"Matriz Asignada de Numeros Primos(100 a 200): ";
    cout <<"\n";
    matrizRandomsPrimosAsig(matriz2,filas1,columnas2,limsup,liminf);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";
    cout<<"Matriz Asignada de Numeros Pares(100 a 200): ";
    cout <<"\n";
    matrizRandomsParsAsig(matriz2,filas1,columnas2,limsup,liminf);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";
    cout<<"Matriz Asignada de Numeros Impares(100 a 200): ";
    cout <<"\n";
    matrizRandomsImparsAsig(matriz2,filas1,columnas2,limsup,liminf);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";

    cout<<"Matriz Asignada de Numeros Multiplos de 10 (100 a 200): ";
    cout <<"\n";
    matrizRandomsMultiploAsig(matriz2,filas1,columnas2,10,limsup,liminf);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";
    cout<<"Matriz Asignada Anterior hacia Abajo :";
    cout <<"\n";
    matrizHaciaAbajo(matriz2,filas1);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";
    cout<<"Matriz Asignada Anterior hacia Arriba :";
    cout <<"\n";
    matrizHaciaArriba(matriz2,filas1);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";
    cout<<"Matriz Asignada Anterior hacia Derecha :";
    cout <<"\n";
    matrizHaciaDerechaAsig(matriz2,filas1,columnas2);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";
    cout<<"Matriz Asignada Anterior hacia Izquierda :";
    cout <<"\n";
    matrizHaciaIzquierdaAsig(matriz2,filas1,columnas2);
    imprimirMatricesAsig(matriz2,filas1,columnas2);
    cout<<"\n";


    cout <<"Matriz Asiganada Traspuesta de Matriz No Cuadrada:"<<endl;
    int **matriztras;

    //Primera forma para Matriz Traspuessta no Cuadrada

    matrizTraspuestaAsig1(matriz2,matriztras,filas1,columnas2);
    imprimirMatricesAsig(matriztras,columnas2,filas1);

    //Segunda Forma para Matriz Traspuesta No cuadrada;

    //matrizTraspuestaAsig2(matriz2,matriztras,filas1,columnas2);
    //PrintMatrizTras(matriztras,filas1,columnas2);


    cout <<"\n";

    cout<<"Matriz  Asignada de Ceros:"<<endl;

    int **matrizceros;
    int **matrizidentidad;

    crearMatrizPropia(matrizceros,filas1,columnas2);
    matrizZerosAsig(matrizceros,filas1,columnas2);
    imprimirMatricesAsig(matrizceros,filas1,columnas2);

    cout <<"\n";
    cout <<"Matriz Identidad Asignada:"<<endl;
    crearMatrizPropia(matrizidentidad,filas1,columnas2);
    matrizIdentidadAsig(matrizidentidad,filas1,columnas2);
    imprimirMatricesAsig(matrizidentidad,filas1,columnas2);

    cout <<"\n";

    cout <<"Borrar Matriz:"<<"\n";

    cout<<"Borrando Matriz Cuadrada..."<<endl;
    borraMatriz(matriz,numero);
    cout<<"Borrando Matriz Asignana..."<<endl;
    borraMatriz(matriz2,filas1);
    cout<<"Borrando Matriz Traspuesta..."<<endl;
    borraMatriz(matriztras,columnas2);

    cout<<"\n";

    cout<<"Matriz Simetrica "<<endl;
    int dimensionnueva;
    int limitebajo,limitealto;
    cout <<"Ingrese el valor cuadrado de una matriz Simetrica:";cin>>dimensionnueva;
    cout<<"\n";
    cout<<"Limite superior:";cin>>limitealto;
    cout<<"Limite ingerior:";cin>>limitebajo;
    int **matriz4;
    matrizZerosAsigComplete(matriz4,dimensionnueva,dimensionnueva);
    matrizSimetricaRandom(matriz4,dimensionnueva,limitebajo,limitealto);
    imprimirMatricesCuad(matriz4,dimensionnueva);
    return 0;
}

//By Sierpe, c:
//I would be grateful if you support me by
// leaving me a comment to elaborate
// some new function or an encouraging comment Thank you