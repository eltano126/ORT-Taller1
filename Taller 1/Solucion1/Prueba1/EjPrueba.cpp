/*
fecha: 17/08/2011
nombre: Programa de prueba
Integrantes: Toscano Enzo, Udler Nicolas 
objetivo: Mostrar un mensaje por pantalla
*/

#include<iostream> //es necesario para mostrar y capturar texto por pantalla
using namespace std; //es una sentencia obligatoria para que el "iostream" funcione

void main(){ //es "main" porque es el programa principal en donde va a estar todo nuestro programa
			 //dentro del "main" funciona nuestro programa	
	/*
	Es un programa para mostrar por pantalla "Hola Mundo!"
	*/

	/*
	cout <<"Hola Mundo!" << endl;		//el "cout" es para mostrar texto por pantalla
										//el "endl" es hace un "enter"(es un fin de linea)

	cout <<"aprendo mas de 1 linea" << " " << "y le pego otra linea" << endl;

	getchar(); //
	*/

/*
-------------------------------------------------------------------------------------------------------
*/

	/*
	Es un programa para pedir un numero entre 1 a 10 y despues mostrarlo por pantalla
	*/
	/*
	int num;
	cout << "Ingrese un numero de 1 a 10" << endl;
	cin >> num; // "cin" es para ingresar un dato a una variable
	getchar();

	cout << "El numero ingresado es " << endl;
	cout << num;
	getchar();
	/*

/*
-------------------------------------------------------------------------------------------------------
*/

	/*
	Es un programa para pedir un numero y despues mostrarlo el maximo por pantalla
	*/
	int num;
	int max;


	cout << "Ingrese un numero" << endl;
	cin >> num;
	
	while(num != 0){
		if(num > 0){

		}
		cout << "Ingrese un numero" << endl;
		cin >> num;
	}
	
	getchar();
	


}