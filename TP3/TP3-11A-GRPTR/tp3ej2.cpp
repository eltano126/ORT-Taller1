/*
Fecha de entrega: 
Integrantes: Enzo Toscano, Dario Ratner

Ejercicio 2:
Realizar una rutina que dado un arreglo de 45 elementos de tipo carácter 
que contiene una palabra, devuelva otro arreglo de 5 elementos enteros 
donde cada uno representa la cantidad de veces que se repiten cada vocal en la palabra.
*/
/*
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int iElemTot = 45;
const int iElemVoc = 5;
const int iRangoValores = 26;
typedef char ty_ArrPalabra[iElemTot];
typedef int ty_ArrVocal[iElemVoc];

void CargarRandom(ty_ArrPalabra arr, int iRangoValores);
void MostrarRandom(ty_ArrPalabra arr);
void CantVocales(ty_ArrPalabra arr, ty_ArrVocal &voc, int &cons);
void Mostrar(ty_ArrVocal &voc, int cons);


void main(){
	ty_ArrPalabra arrPalabra;
	ty_ArrVocal arrVocales;
	int cons;

	//Inserto Valores en el Arreglo
	CargarRandom(arrPalabra,iRangoValores);

	//Los Muestro por Pantalla
	MostrarRandom(arrPalabra);
	getchar();

	//Calculo la Cantidad de Vocales
	CantVocales(arrPalabra,arrVocales,cons);

	//Muestro por pantalla la Cantidad de Cada Vocal y la Cantidad de Consonantes
	Mostrar(arrVocales,cons);
	getchar();
}




void CargarRandom(ty_ArrPalabra arr, int iRangoValores){
	int i;
	for(i=0;i<iElemTot;i++){
		arr[i] = rand()%iRangoValores+65;
	}
}

void MostrarRandom(ty_ArrPalabra arr){
	int i;
	for(i=0;i<iElemTot;i++){
		cout << arr[i] << endl;
	}
}

void CantVocales(ty_ArrPalabra arr, ty_ArrVocal &voc, int &cons){
	int i;
	cons = 0;

	for(i=0;i<iElemVoc;i++){
		voc[i] = 0;
	}

	for(i=0;i<iElemTot;i++){

		switch(arr[i]){
		case 'A':{
			voc[0] = voc[0] + 1;
			break;
		}
		case 'E':{
			voc[1] = voc[1] + 1;
			break;
		}
		case 'I':{
			voc[2] = voc[2] + 1;
			break;
		}
		case 'O':{
			voc[3] = voc[3] + 1;
			break;
		}
		case 'U':{
			voc[4] = voc[4] + 1;
			break;
		}
		default:
			cons = cons + 1;
			break;
		}

	}

}

void Mostrar(ty_ArrVocal &voc, int cons){
	cout << "Cantidad A: " << voc[0] << endl;
	cout << "Cantidad E: " << voc[1] << endl;
	cout << "Cantidad I: " << voc[2] << endl;
	cout << "Cantidad O: " << voc[3] << endl;
	cout << "Cantidad U: " << voc[4] << endl;
	cout << "Cantidad de Consonantes: " << cons << endl;
	cout << endl;
	cout << "Presione Cualquier Tecla para Finalizar" << endl;
}
*/