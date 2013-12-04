#include <iostream>
using namespace std;

//Declaracion de encabezados
void Suma(int numero1, int numero2, int &totalSuma);
void Ingreso(int &numero);

void main(){
	//Declaracion de variables
	int num1;
	int num2;
	int total;

	//Desarrollo del programa
	Ingreso(num1);
	Ingreso(num2);

	//Llamo al modulo
	Suma(num1, num2, total);
	
	//Muestro el resultado
	cout<<"Total: " << total;
	getchar();
}

//Desarrollo de los modulos
void Suma(int numero1, int numero2, int &totalSuma)
{
	totalSuma = numero1 + numero2;
}

void Ingreso(int &numero)
{
	cout << "Ingrese un numero" << endl;
	cin >> numero;
	getchar();

}