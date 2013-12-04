/*
Fecha de entrega: 

Integrantes: Enzo Toscano, Dario Ratner

Objetivo:
Se ingresan los resultados de las 5 evaluaciones de todos los cursos de Programación y por cada alumno se informa:
- Nro. de matricula 4 Dig. ( 1..9999)
- Calificación 2 Dígitos (0 - 10)
Nota: si el alumno estuvo ausente, quien carga los datos ingresará 0 en la calificación.
A partir de esta información se debe calcular e informar:
a) La cantidad de evaluaciones procesadas.
b) Promedio de calificaciones de todos los alumnos.
c) Por cada alumno calificación más baja sin tener en cuenta cuando estuvo ausente, salvo en
el caso que haya faltado a todas las evaluaciones cuya nota más baja será 0.
*/

/*
#include<iostream>
using namespace std;

typedef struct ty_Examen{
	int iMatricula;
	int	iCalif;
};

void IngresoMatricula(int &iMatricula);
void ValidaMatricula(int &iMatricula);
void IngresoCalificacion(int &iCalif, int &iCont0);
void ValidaCalificacion(int &iCalif);
void ValidaSeguir(char &cSigue);
void Salida(int iCantEvalProc, int iAcumNotas, float &fPromCalif);
void CalculaPromedio(int iAcumNotas, int iCantEvalProc, float &fPromCalif);



void main(){

	//Declaracion de variables:
	ty_Examen tyExamen;
	int iCantEval, iCantAlum, iCantEvalProc, iConteval5, iAcumNotas, iCalifBaja, iCont0;
	float fPromCalif;
	char cSigue;

	//Inicializacion de Variables:
	tyExamen.iMatricula = tyExamen.iCalif = iCantEval = iCantAlum = iCantEvalProc = iConteval5 = iAcumNotas = iCont0 = 0;
	iCalifBaja = 10;
	fPromCalif = 0;
	cSigue = 'S';


	while((cSigue == 'S') || (cSigue == 's')){

		cout << "--------------------------------------------------------------------------" << endl;
		IngresoMatricula(tyExamen.iMatricula);

		//Inicializo las variables internas
		iConteval5 = iCont0 = 0;
		iCalifBaja = 10;


		while(iConteval5 < 5){

			IngresoCalificacion(tyExamen.iCalif, iCont0);
			iAcumNotas = iAcumNotas + tyExamen.iCalif;

			iConteval5++;

			iCantEvalProc++;

			if(tyExamen.iCalif < iCalifBaja){
				if(tyExamen.iCalif != 0){
					iCalifBaja = tyExamen.iCalif;
				}
			}


		}

		if(iCont0 == 5){
			iCalifBaja = 0;
		}

		cout << "La Calificacion mas baja del Alumno " << tyExamen.iMatricula << " es: " << iCalifBaja << endl;
		getchar();
		cout << "--------------------------------------------------------------------------" << endl;

		cout << "Quiere Ingresar otro alumno? Ingrese S para Seguir o N para Finalizar" << endl;
		cin >> cSigue;
		ValidaSeguir(cSigue);
	}

	CalculaPromedio(iAcumNotas, iCantEvalProc, fPromCalif);

	Salida(iCantEvalProc, iAcumNotas,fPromCalif);


}



void IngresoMatricula(int &iMatricula){

	cout << "Por favor ingrese el numero de matricula: ";
	cin >> iMatricula;
	cout << endl;

	ValidaMatricula(iMatricula);
}

void ValidaMatricula(int &iMatricula){
	while(iMatricula > 9999){ // Validacion de Matricula
		cout << "Ingrese una matricula entre 1 - 9999 por favor" << endl;
		cin >> iMatricula;
		cout << endl;
	}
}

void IngresoCalificacion(int &iCalif, int &iCont0){
	cout << "Por favor ingrese la calificacion (1-10). Si estuvo ausente ingrese 0" << endl;
	cin >> iCalif;
	cout << endl;

	ValidaCalificacion(iCalif);

	if(iCalif == 0){
		iCont0++; 
	}

}

void ValidaCalificacion(int &iCalif){

	while(iCalif > 10){
		cout << "La Calificacion tiene que ser Menor o Igual que 10" << endl;
		cin >> iCalif;
		cout << endl;
	}
}

void ValidaSeguir(char &cSigue){
	while((cSigue != 'S') && (cSigue != 's') && (cSigue != 'N') && (cSigue != 'n')){
		cout << "Ingrese S para Seguir o N para Finalizar" << endl;
		cin >> cSigue;
	}
}


void CalculaPromedio(int iAcumNotas, int iCantEvalProc, float &fPromCalif){
	fPromCalif = ((float)iAcumNotas/(float)iCantEvalProc);
}


void Salida(int iCantEvalProc, int iAcumNotas, float &fPromCalif){

	cout << "La Cantidad de Evaluaciones Procesadas son: " << iCantEvalProc << endl;
	getchar();
	getchar();
	cout << "El Promedio de Calificaciones de Todos los Alumnos es: " << fPromCalif << endl;
	getchar();
	getchar();


	cout << "----------------------FIN DEL PROGRAMA----------------------" << endl;
	getchar();


}
*/