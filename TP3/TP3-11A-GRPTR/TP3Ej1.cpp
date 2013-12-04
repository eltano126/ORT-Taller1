/*
Fecha de entrega: 
Integrantes: Enzo Toscano, Dario Ratner

Ejercicio 1:
Dado un arreglo de 20 elementos enteros:
a) Realizar una rutina que calcule el promedio de todos sus valores.
b) Realizar una rutina que obtenga el máximo de todos sus valores. Suponer único máximo.
c) Realizar una rutina que obtenga las posiciones donde están ubicados el máximo y el mínimo valor.
d) Realizar una rutina que y muestre por pantalla el valor máximo del arreglo y en qué posiciones se encuentra.
Nota: Puede realizar un único programa que resuelva las cuatro rutinas.
*/
/*
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int iElem = 20;
const int iRangoValores = 100;
typedef int ty_Arr[iElem];


void CargarRandom(ty_Arr arr, int iRangoValores);
void MostrarRandom(ty_Arr arr);
void Promedio(ty_Arr arr, float fAcum, float &fProm);
void Maximo(ty_Arr arr, int &iMax);
void PosicionMinMax(ty_Arr arr, int &iPosMin, int &iPosMax);
void Mostrar(float &fProm, int &iMax, int &iPosMin, int &iPosMax);


void main(){
	ty_Arr arreglo;
	int iMax,iPosMin,iPosMax;
	float fProm, fAcum;

	iMax = 0;
	fAcum = 0;
	fProm = 0;

	//Inserto Valores en el Arreglo
	CargarRandom(arreglo,iRangoValores);
	//Los Muestro por Pantalla
	MostrarRandom(arreglo);
	getchar();

	//Punto A
	Promedio(arreglo,fAcum,fProm);

	//Punto B
	Maximo(arreglo,iMax);

	//Punto C
	PosicionMinMax(arreglo,iPosMin,iPosMax);

	//Punto D
	Mostrar(fProm, iMax,iPosMin,iPosMax);
}



void MostrarRandom(ty_Arr arr){
	int i;
	for(i=0;i<iElem;i++){
		cout << arr[i] << endl;
	}
}


void CargarRandom(ty_Arr arr, int iRangoValores){
	int i;
	for(i=0;i<iElem;i++){
		arr[i] = rand()%iRangoValores;
	}
}


void Promedio(ty_Arr arr, float fAcum, float &fProm){
	int i;
	for(i=0;i<iElem;i++){
		fAcum = fAcum + arr[i];
	}
	fProm = fAcum/iElem;
}


void Maximo(ty_Arr arr, int &iMax){
	int i;
	for(i=0;i<iElem;i++){
		if(iMax < arr[i]){
			iMax = arr[i];
		}
	}
}


void PosicionMinMax(ty_Arr arr, int &iPosMin, int &iPosMax){
	int i;
	int ValorMax;
	int ValorMin;

	ValorMax = 0;
	ValorMin = iRangoValores;

	for(i=0;i<iElem;i++){
		if(arr[i] < ValorMin){
			iPosMin = i + 1;
			ValorMin = arr[i];
		}
	}

	for(i=0;i<iElem;i++){
		if(ValorMax < arr[i]){
			iPosMax = i + 1;
			ValorMax = arr[i];
		}
	}

}


void Mostrar(float &fProm, int &iMax, int &iPosMin, int &iPosMax){
	//cout << "El Promedio de todos los numeros es: " << fProm << endl;
	//cout << "El Maximo numero es: " << iMax << endl;
	//cout << "La Posicion del Valor Minimo es: " << iPosMin << endl;
	//cout << "La Posicion del Valor Maximo es: " << iPosMax << endl;
	cout << "El Valor Maximo es: " << iMax << " esta en la posicion: " << iPosMax << endl;
	getchar();
	cout << "Presione Cualquier Tecla para Finalizar" << endl;
	getchar();
}
*/