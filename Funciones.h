//
// Created by Sierpe on 17/05/2022.
//
#include <iostream>
#include <vector>
#include "math.h"
#include "string"
using namespace std;

#ifndef INTENTO_1_FUNCIONES_H
#define INTENTO_1_FUNCIONES_H

bool esPrimo(int numero);
//Funcion para crear matriz Cuadrada recibiendo un puntero que apunte a otro puntero
void crearMatrizCuad(int **&crearMatriz,int dimensiones);
//Funcion para crear matriz Asignada recibiendo un puntero que apunte a otro puntero
void crearMatrizPropia(int **&crearMatriz,int filas,int columnas);
//Funcion para rellenar una matriz cuadrada de numeros randoms
void matrizRandomsCuad(int **&matriz, int dimensiones,int limitesup,int limitinf);
//Funcion para rellenar una matriz asignada de numeros randoms
void matrizRandomsAsig(int **&matriz,int filas,int columnas,int limitesup,int limitinf);
//Funcion para rellenar una matriz cuadrada de numeros pares;
void matrizRandomsParsCuad(int **&matriz, int dimension ,int limitesup,int limitinf);
//Funcion para rellenar una matriz asignada de nuemeros impares
void matrizRandomsParsAsig(int **&matriz,int filas, int columnas,int limitesup,int limitinf);
//Funcion para rellenar una matriz cuadrada de numero impares;
void matrizRandomsImparsCuad(int **&matriz, int dimension,int limitesup,int limitinf);
//Funcion para rellenar una matriz cuadrada de numeros impares;
void matrizRandomsImparsAsig(int **&matriz,int filas, int columnas,int limitesup,int limitinf);
//Funcion para rellenar una matriz cuadrada de numeros multiplos;
void matrizRandomsMultiploCuad(int **&matriz, int dimension,int multiplo,int limitesup,int limitinf);
//Funcion para rellenar una matriz asignada de numero multiplos;
void matrizRandomsMultiploAsig(int **&matriz,int filas, int columnas,int multiplo,int limitesup,int limitinf);
//Funcion para rellenar una matriz cuadrada numeros primos;
void matrizRandomsPrimosCuad(int **&matriz, int dimension,int limitesup,int limitinf);
//Funcion para rellenar una matriz asignada numeros primos;
void matrizRandomsPrimosAsig(int **&matriz,int filas, int columnas,int limitesup,int limitinf);
//Funcion para imprimir matrices Cuadradas;
void imprimirMatricesCuad(int **matriz, int dimension);
//Funcion para imprimir una matriz asignada
void imprimirMatricesAsig(int **matriz,int filas,int columnas);

//Funcion para borrar una matriz completamente
void borraMatriz(int **&matriz,int filas);

//Funciones de Rotacion de Matrices

//1. Matriz hacia Arriba(Cuadradas y asignadas)
void matrizHaciaArriba(int **&matriz,int filas);
//2. Matriz hacia abajo(Cuadradas y asignadas)
void matrizHaciaAbajo(int **&matriz,int filas);
//3. Matriz hacia derecha(Cuadradas);
void matrizHaciaDerechaCuad(int **&matriz,int dimensiones);
//4. Matriz hacia derecha (Asignadas)
void matrizHaciaDerechaAsig(int **&matriz,int filas,int columnas);
//5. Matriz hacia izquierda(Cuadradas);
void matrizHaciaIzquierdaCuad(int **&matriz,int dimensiones);
//6. Matriz hacia izquierda(Asignadas);
void matrizHaciaIzquierdaAsig(int **&matriz,int filas,int columnas);

//Funcion para hallar la traspuesta de una matriz

void matrizTraspuestaAsig2(int **matriz,int **&matriz2,int filas,int columnas);
void matrizTraspuestaCuad(int **&matriz,int dimension);

//Fuera de Servicio
void matrizTraspuestaAsig1(int **&matriz,int **&matriztras2,int filas,int columnas);

//Funcion para Imprimir una Matriz Traspuesta

//En este caso no es necesario colocar columnas de la anterior matriz como filas , y filas como columnas)

void PrintMatrizTras(int **matriz, int filas, int columnas);


//Funcion para crear una matriz de ceros

void matrizZerosCuad(int **&matriz,int dimension);
void matrizZerosAsig(int **&matriz,int filas,int columnas);
void matrizZerosAsigComplete(int **&matriz,int filas,int columnas);

//Funcion para crear matriz Identidad

void matrizIdentidadCuadad(int **&matriz,int dimension);
void matrizIdentidadAsig(int **&matriz,int filas,int columnas);

//Funcion para crear matriz Simetrica

void matrizSimetricaRandom(int **&matriz, int dimension,int limitinf,int limitsup);

//Generador Numero Random
int numerorandom(int limitinf,int limitsup);
#endif //INTENTO_1_FUNCIONES_H
