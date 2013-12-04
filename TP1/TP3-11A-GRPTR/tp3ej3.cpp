/*
Fecha de entrega: 
Integrantes: Enzo Toscano, Dario Ratner

Ejercicio 3:
Realizar una rutina que reciba un arreglo de 100 elementos enteros y lo devuelva ordenado.
Para realizar este proceso no se debe utilizar un arreglo auxiliar.
*/
/*
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int iElem = 100;
const int iRangoValores = 1000;
typedef int ty_Arr[iElem];

void CargarRandom(ty_Arr arr, int iRangoValores);
void MostrarRandom(ty_Arr arr);
void OrdenarArreglo(ty_Arr arr);

void main(){

	ty_Arr arreglo;
	int i, j, temp;

	//Inserto Valores en el Arreglo
	CargarRandom(arreglo,iRangoValores);
	//Los Muestro por Pantalla
	cout << "El Arreglo Recibido es el siguiente: " << endl;
	MostrarRandom(arreglo);
	getchar();


	OrdenarArreglo(arreglo);

	cout << "El Arreglo Ordenado es el siguiente: " << endl;
	MostrarRandom(arreglo);
	getchar();

	cout << "Presione Cualquier Tecla para Finalizar" << endl;
	getchar();
	
}

void CargarRandom(ty_Arr arr, int iRangoValores){
	int i;
	for(i=0;i<iElem;i++){
		arr[i] = rand()%iRangoValores;
	}
}

void MostrarRandom(ty_Arr arr){
	int i;
	for(i=0;i<iElem;i++){
		cout << arr[i] << endl;
	}
}

void OrdenarArreglo(ty_Arr arr){
	
	int i, j, temp;

	for (i=1; i<iElem; i++){
		for (j=0 ; j<iElem - 1; j++){
			if (arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
*/