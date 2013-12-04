/*Fecha 14-9-11
Integrantes: Toscano Enzo , Ratner Dario.
Objetivo:
Una empresa necesita calcular los jornales de sus empleados. Por cada uno se ingresa el legajo,
el turno en el cuál trabajó y la cantidad de horas trabajadas en el mes. El fin del ingreso será cuando el
operador ingrese un 0(cero) en el número de legajo.
Se consideran horas simples hasta un tope de 180 horas mensuales para los turnos diurno y vespertino, y 150 para el de la noche, siendo el excedente horas extraordinarias. Por cada hora extra se cobra un 40 % más.
El valor de la hora simple se considera uniforme para todos los empleados y es en este momento de $ 10, pero puede cambiar en cualquier momento (trabajar con constantes para que tenga el menor impacto el cambio de valor). Por último, el turno nocturno es bonificado con un 15% sobre el total a cobrar.
Se necesita informar:
a) El importe a pagar a cada empleado.
b) El importe total a abonar en concepto de horas extras para cada turno.
c) Quiénes realizaron más de 24 horas extras durante el mes.

*/


# include <iostream>
using namespace std;

// Aca declaramos los encabezados de las variables
void Ingreso (int & iLegajo, char &cTurno, int &iHoras);

void CalcSueldo (char cTurno , int iHoras, int iDifHoras ,int &contHorasD,int &contHorasV,int &contHorasN , const int ciHorasS, const int ciHorasEx , float &fTotSueldo);

//Aca comienza el main
void main () {
	
	// Aca declaramos las variables
	
	char cTurno;
	int iLegajo,iHoras, AcumExD, AcumExV, AcumExN, iDifHoras ,contHorasD , contHorasV,contHorasN;
	float fTotSueldo;
	const int ciHorasS=10;
	const int ciHorasEx=14;

	// Aca inicializamos las variables

	iHoras=0;
	iDifHoras =0;
	contHorasD=0;
	contHorasV=0;
	contHorasN=0;

	
	
	Ingreso (iLegajo,cTurno,iHoras);

	while ( iLegajo != 0 ){
	
		CalcSueldo( cTurno , iHoras,iDifHoras ,contHorasD,contHorasV,contHorasN ,ciHorasS,ciHorasEx ,fTotSueldo);
	
		Ingreso (iLegajo, cTurno, iHoras);

	}

	cout << "Estadistica:" << endl;
	cout << "El importe a abonar al turno Diurno por horas extras es de: " << contHorasD << endl;
	cout << "El importe a abonar al turno Vespertino por horas extras es de: " << contHorasV << endl;
	cout << "El importe a abonar al turno Nocturno por horas extras es de: " << contHorasN << endl;
	getchar();

}
// Aca finaliza el main

// Aca desarrollamos los modulos
void Ingreso (int & iLegajo, char &cTurno, int &iHoras){

	cout << " Ingrese el numero de legajo del empleado ( Para Finalizar ingrese 0) " << endl;
	cin >> iLegajo;
	getchar();

	if ( iLegajo != 0 ){
	
		cout << "Ahora Ingrese el Turno ( D, V, N )" << endl;
		cin >> cTurno;
		getchar();

		cout << "Y la cantidad de horas trabajadas" << endl;
		cin >> iHoras;
		getchar();

	}
	
}


void CalcSueldo(char cTurno , int iHoras, int iDifHoras ,int &contHorasD,int &contHorasV,int &contHorasN , const int ciHorasS, const int ciHorasEx , float &fTotSueldo){

iDifHoras = 0;

	switch (cTurno) {
	
	case 'D':
	
		if (iHoras <=180){
			
			fTotSueldo = iHoras * ciHorasS;
		}

		else {
		
			iDifHoras= iHoras - 180;
			
			fTotSueldo = (180 * ciHorasS) + (iDifHoras * ciHorasEx);
		
		}

		if (iDifHoras != 0){

			contHorasD = contHorasD + iDifHoras ;
		}


		if ( iDifHoras > 24){

		cout << "Este empleado trabajo mas de 24 hs. extras" << endl;
		getchar();

		}

		cout << "El sueldo a abonar para este empleado es de $" << fTotSueldo << endl;
		getchar();
		
	break;

	case 'V':

		if (iHoras <=180){
			
			fTotSueldo = iHoras * ciHorasS;
		}

		else {
		
			iDifHoras= iHoras - 180;
			
			fTotSueldo = (180 * ciHorasS) + (iDifHoras * ciHorasEx);
		
		}

		if (iDifHoras != 0){

			contHorasV = contHorasV + iDifHoras ;
		}


		if ( iDifHoras > 24){
		
		cout << "Este empleado trabajo mas de 24 hs. extras" << endl;
		getchar();
		
		}
	
		cout << "El sueldo a abonar para este empleado es de $" << fTotSueldo << endl;
		getchar();

	break;

	case 'N':
	
	if (iHoras <= 150){
			
			fTotSueldo = iHoras * ciHorasS;
		}

		else {
		
			iDifHoras= iHoras - 150;
			
			fTotSueldo = (150 * ciHorasS) + (iDifHoras * ciHorasEx);
		
			fTotSueldo = fTotSueldo + (fTotSueldo * 0.15);
		
		}

		if (iDifHoras != 0){

			contHorasN = contHorasN + iDifHoras ;

		}
		
		if ( iDifHoras > 24){
		
		cout << "Este empleado trabajo mas de 24 hs. extras" << endl;
		getchar();
		
		}
	
		cout << "El sueldo a abonar para este empleado es de $" << fTotSueldo << endl;
		getchar();

	break;	

	}

	
}


