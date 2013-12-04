/**Nombre:Juego de Numeros
Fecha: 31/8
Integrantes: Sami D. Alhadeff, Ratner Darío
Objetivo: Ingresar 10 juegos de 4 valores , sumarlos y sacar el promedio**/

# include <iostream>
using namespace std;
// aca declaramos los encabezados de los módulos
void suma (int Numero1,int Numero2,int Numero3,int Numero4,int &TotalSuma);
void promedio (int TotalSuma, float &Promedio);

void main() {
	// aca inicializamos variables
	int iN1 = 0;
	int iN2 = 0;
	int iN3 = 0;
	int iN4 = 0;
	int iTotalSuma = 0;
	float fPromedio = 0;
	int iCont = 0;
	// aca comienza el while
	
	while ( iCont < 10) {

			cout<< "ingrese el Numero 1" << endl;
			cin>> iN1 ;
			getchar();
			cout<< "ingrese el Numero 2" << endl;
			cin>> iN2 ;
			getchar();
			cout<< "ingrese el Numero 3" << endl;
			cin>> iN3 ;
			getchar();
			cout<< "ingrese el Numero 4" << endl;
			cin>> iN4 ;
			getchar();
			
			suma (iN1,iN2,iN3,iN4,iTotalSuma);

			promedio (iTotalSuma,fPromedio);

			cout<< "El promedio de este juego da " <<fPromedio <<endl;
			getchar();

			cout << "Ingrese otro juego de numeros" << endl;
			getchar();

			iCont++;
			
			}
	// Acá finaliza el while
	

	cout<< " Muchas gracias por jugar!!!! " ;
	 
	getchar();
}
// aca desarrollamos los módulos
void suma (int Numero1,int Numero2,int Numero3,int Numero4,int &TotalSuma)
{

	TotalSuma = Numero1 + Numero2 + Numero3 + Numero4;
}

void promedio (int TotalSuma, float &Promedio)
{

	Promedio = (float) TotalSuma /4;

}