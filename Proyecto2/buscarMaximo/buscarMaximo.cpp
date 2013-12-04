/*
Nombe: Buscar maximo
Objetivo: Buscar el valor maximo de un grupo de valores dados por el usuario
Autos: Todos
Fecha: 24/08/2011
*/

#include<iostream>
using namespace std;

void main(){

	//Declaracion de Variables
	int num; //Guarda el numero ingresado
	int max; //Guarda el valor maximo


		//Desarrollo del programa
	
	//Pedimos un numero para el programa
	cout << "Por favor ingrese un numero.                =========> 0 (Cero) Para terminar." << endl;
	cout << "Presione ENTER para continuar" << endl;

	cin >> num; //Guardamos el valor en la Variable "num"
	getchar();

	//Guardamos el numero como maximo
	max = num;

	//Ejecutamos un ciclo
	while (num!=0) //Si ingresa un "0" no cumple la condicion y no entra en el ciclo
	{
		
		if (num > max) //Preguntamos si el valor en "num" es mayor que el valor en "max"
		{
			max = num; //Si num es mayor a max, se guarda en max el valor de num
		}
		//Como no hago nada "si NO se cumple", no pongo el "else"

		cout << "Por favor ingrese un numero.                =========> 0 (Cero) Para terminar." << endl; //Pedimos otro numero
		
		cin >> num; //Guardamos el nuevo valor en la Variable "num"
		getchar();

	}

		if (max != 0) //Preguntamos si el valor de max es distinto de 0
		{
			cout << "El Maximo es: " << max;
		}
		else
		{
			cout << "Chau!!" ;
		}

		getchar();

}