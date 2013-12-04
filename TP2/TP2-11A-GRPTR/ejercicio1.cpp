/*
Fecha de entrega: 

Integrantes: Enzo Toscano, Dario Ratner

Objetivo:
Una compañía de transportes de carga ofrece sus servicios a lo largo de todo el país transportando cargas diversas. Por cada paquete que se envía se ingresa la siguiente información ya validada:
- Código de paquete (5 caracteres máximo)
- Destino al que se envía (30 caracteres máximo)
- Peso en kilogramos (mayor que 0 siempre)
Además nos dicen que a cada paquete se le asigna una categoría que puede ser A, B o C. Para asignarla se procede de la siguiente forma: Si el paquete pesa hasta 10Kg. pertenece a la categoría A, si pesa más de 10 Kg. y hasta 50, pertenece a la categoría B y si pesa más de 50 Kg. pertenece
a la categoría C.
Se pide informar:
a) El código correspondiente al paquete más pesado (en el caso que haya más de uno con el
mismo peso máximo, mostrar el código del primero que apareció).
b) El peso total transportado en cada categoría.
c) La cantidad total de paquetes transportados.
*/

/*
#include<iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

typedef char ty_Str30[30];

typedef struct ty_paquete{
	ty_Str30 cCodpaq;
	ty_Str30 cDestino;
	char cCategoria;
	float fKilos;
};

void Ingreso(ty_paquete &tyPaquete);
void Categoria(ty_paquete &tyPaquete);
void PaqueteMasPesado(ty_paquete tyPaquete, float &iKilosMax, ty_Str30 &cCod_paq_max);
void PesoTotalPorCategoria(char sCategoria, float &iKilosMaxA, float &iKilosMaxB, float &iKilosMaxC, float iKilos);
void Salida(ty_Str30 &cCod_paq_max, float &iKilosMaxA, float &iKilosMaxB, float &iKilosMaxC, int &iCantPaqTrans);

void main(){

	//Declaracion de Variables
	ty_paquete tyPaquete;
	ty_Str30 cCod_paq_max;
	char cSigue;
	int iTotal_paq_trans, iCantPaqTrans;
	float iPeso_total0,iKilosMax, iPesoTotalA, iPesoTotalB, iPesoTotalC,iKilosMaxA,iKilosMaxB,iKilosMaxC;

	//Inicializacion de Variables
	tyPaquete.fKilos = 0;
	iKilosMax = iKilosMaxA = iKilosMaxB = iKilosMaxC = iCantPaqTrans = 0;
	cSigue = 'S';
	tyPaquete.cCategoria = ' ';

	while((cSigue == 'S') || (cSigue == 's')){
		Ingreso(tyPaquete);
		//Modulo que asigna la Categoria a las Cargas segun su peso
		Categoria(tyPaquete);

		//Modulo que muestra de que Categoria es la carga mas pesada
		PaqueteMasPesado(tyPaquete,iKilosMax,cCod_paq_max);

		//Modulo que Calcula el peso total por Categoria
		PesoTotalPorCategoria(tyPaquete.cCategoria, iKilosMaxA, iKilosMaxB, iKilosMaxC, tyPaquete.fKilos);

		//Calcula la cantidad de paquetes transportados hasta que finaliza la carga
		iCantPaqTrans ++;

		cout << endl;
		cout << "Quiere iniciar otra carga? Pulse S para Seguir o N para Finalizar" << endl;
		cin >> cSigue;

		getchar();
		cout << endl;

		system("cls");
	}

	Salida(cCod_paq_max,iKilosMaxA,iKilosMaxB,iKilosMaxC,iCantPaqTrans);

}

void Ingreso(ty_paquete &tyPaquete){
	cout<<"Por favor ingrese el Codigo de Paquete, Destino y Kilos" << endl;
	cout<<"Codigo de Paquete: ";
	cin >> tyPaquete.cCodpaq;
	getchar();
	cout<<"Destino: ";
	cin >> tyPaquete.cDestino;
	getchar();
	cout<<"Kilos (El peso tiene que ser Mayor que 0): ";
	cin >> tyPaquete.fKilos;
	getchar();

	while(tyPaquete.fKilos == 0){
		cout << "Por favor ingrese un peso mayor que 0" << endl;
		cin >> tyPaquete.fKilos;
		getchar();
	}

}

void Categoria(ty_paquete &tyPaquete){
	if(tyPaquete.fKilos <= 10){
		tyPaquete.cCategoria = 'A';} 
	if(tyPaquete.fKilos >10 && tyPaquete.fKilos <=50){
		tyPaquete.cCategoria = 'B';}
	if(tyPaquete.fKilos > 50){
		tyPaquete.cCategoria = 'C';}
}

void PaqueteMasPesado(ty_paquete tyPaquete, float &iKilosMax, ty_Str30 &cCod_paq_max){
	if(iKilosMax < tyPaquete.fKilos){
		iKilosMax = tyPaquete.fKilos;
		strcpy(cCod_paq_max,tyPaquete.cCodpaq);
	}
}

void PesoTotalPorCategoria(char cCategoria, float &iKilosMaxA, float &iKilosMaxB, float &iKilosMaxC, float fKilos){
	switch(cCategoria){
	case 'A':{
		iKilosMaxA = iKilosMaxA + fKilos;
		break;
			 }
	case 'B':{
		iKilosMaxB = iKilosMaxB + fKilos;
		break;
			 }
	case 'C':{
		iKilosMaxC = iKilosMaxC + fKilos;
		break;
			 }
	default:
		cout << "Error de asignacion de Categoria";
		break;
	}
}

void Salida(ty_Str30 &cCod_paq_max, float &iKilosMaxA, float &iKilosMaxB, float &iKilosMaxC, int &iCantPaqTrans){
	cout << "El Codigo del paquete mas pesado es: " << cCod_paq_max << endl;
	getchar();

	cout << "El peso total transportado de categoria A: " << iKilosMaxA << endl;
	cout << "El peso total transportado de categoria B: " << iKilosMaxB << endl;
	cout << "El peso total transportado de categoria C: " << iKilosMaxC << endl;
	getchar();

	cout << "La Cantidad de Paquetes transportados fue de: " << iCantPaqTrans << endl;
	getchar();

	cout << "Presione Cualquier Tecla para Finalizar" << endl;
	getchar();
}
*/