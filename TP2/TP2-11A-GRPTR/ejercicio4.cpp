/*
Fecha de entrega: 

Integrantes: Enzo Toscano, Dario Ratner

Objetivo:
Se ingresan los resultados de las 5 evaluaciones de todos los cursos de Programaci�n y por cada alumno se informa:
- Nro. de matricula 4 Dig. ( 1..9999)
- Calificaci�n 2 D�gitos (0 - 10)
Nota: si el alumno estuvo ausente, quien carga los datos ingresar� 0 en la calificaci�n.
A partir de esta informaci�n se debe calcular e informar:
a) La cantidad de evaluaciones procesadas.
b) Promedio de calificaciones de todos los alumnos.
c) Por cada alumno calificaci�n m�s baja sin tener en cuenta cuando estuvo ausente, salvo en
el caso que haya faltado a todas las evaluaciones cuya nota m�s baja ser� 0.
Tomando como base lo resuelto, realizarle las modificaciones 
necesarias suponiendo que NO se conoce la cantidad de evaluaciones.
realizarle las modificaciones necesarias para que informe, adem�s de lo solicitado anteriormente, lo siguiente:
d) La calificaci�n m�s elevada tomando en cuenta todos los alumnos.
e) El n�mero de matr�cula correspondiente al alumno que obtuvo la mayor calificaci�n (en el caso que haya m�s de 
uno con el mismo valor, mostrar el c�digo del �ltimo que apareci�).
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
void CalcMasBaja(int iCalif, int &iCalifBaja);
void CalifyMatricAlta(int &iCalifMasAlta, int iCalif, int &iMatriculaMax, int iMatricula);
void ValidaSeguir(char &cSigue);
void Salida(int iCantEvalProc, int iAcumNotas, float &fPromCalif, int &iCalifMasAlta, int &iMatriculaMax);
void CalculaPromedio(int iAcumNotas, int iCantEvalProc, float &fPromCalif);



void main(){

	//Declaracion de variables:
	ty_Examen tyExamen;
	int iCantEval, iCantAlum, iCantEvalProc, iAcumNotas, iCalifBaja, iCont0, iCalifMasAlta, iMatriculaMax;
	float fPromCalif;
	char cSigue, cSigueCalif;

	//Inicializacion de Variables:
	tyExamen.iMatricula = tyExamen.iCalif = iCantEval = iCantAlum = iCantEvalProc = iAcumNotas = iCont0 = iCalifMasAlta = iMatriculaMax = 0;
	iCalifBaja = 10;
	fPromCalif = 0;
	cSigue = cSigueCalif = 'S';

	while((cSigue == 'S') || (cSigue == 's')){

		cout << "--------------------------------------------------------------------------" << endl;

		IngresoMatricula(tyExamen.iMatricula);

		iCont0 = 0;
		iCalifBaja = 10;

		cSigueCalif = 's';

		while((cSigueCalif == 'S') || (cSigueCalif == 's')){

			IngresoCalificacion(tyExamen.iCalif, iCont0);

			iAcumNotas = iAcumNotas + tyExamen.iCalif;

			iCantEvalProc++;

			CalcMasBaja(tyExamen.iCalif, iCalifBaja);

			CalifyMatricAlta(iCalifMasAlta, tyExamen.iCalif, iMatriculaMax, tyExamen.iMatricula);

			cout << "Quiere Ingresar otra Calificacion? Ingrese S para Seguir o N para Finalizar" << endl;
			cin >> cSigueCalif;

			ValidaSeguir(cSigueCalif);
			cout << endl;
		}

		if(iCont0 == 5){
			iCalifBaja = 0;
		}

		cout << "La Calificacion mas baja del Alumno " << tyExamen.iMatricula << " es: " << iCalifBaja << endl;
		getchar();

		cout << "--------------------------------------------------------------------------" << endl;
		cout << "--------------------------------------------------------------------------" << endl;

		cout << "Quiere Ingresar otro alumno? Ingrese S para Seguir o N para Finalizar" << endl;
		cin >> cSigue;

		ValidaSeguir(cSigue);
	}

	CalculaPromedio(iAcumNotas, iCantEvalProc, fPromCalif);

	Salida(iCantEvalProc, iAcumNotas, fPromCalif, iCalifMasAlta, iMatriculaMax);

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

void CalcMasBaja(int iCalif, int &iCalifBaja){
	if(iCalif < iCalifBaja){
		if(iCalif != 0){
			iCalifBaja = iCalif;
		}
	}
}

void CalifyMatricAlta(int &iCalifMasAlta, int iCalif, int &iMatriculaMax, int iMatricula){
	if(iCalifMasAlta <= iCalif){
		iCalifMasAlta = iCalif;
		iMatriculaMax = iMatricula;
	}
}

void ValidaSeguir(char &Sigue){
	while((Sigue != 'S') && (Sigue != 's') && (Sigue != 'N') && (Sigue != 'n')){
		cout << "Ingrese S para Seguir o N para Finalizar" << endl;
		cin >> Sigue;
	}
}

void CalculaPromedio(int iAcumNotas, int iCantEvalProc, float &fPromCalif){
	fPromCalif = ((float)iAcumNotas/(float)iCantEvalProc);
}

void Salida(int iCantEvalProc, int iAcumNotas, float &fPromCalif, int &iCalifMasAlta, int &iMatriculaMax){

	cout << "La Cantidad de Evaluaciones Procesadas son: " << iCantEvalProc << endl;
	getchar();
	getchar();

	cout << "El Promedio de Calificaciones de Todos los Alumnos es: " << fPromCalif << endl;
	getchar();

	cout << "La Calificacion mas Elevada entre Todos los Alumnos es: " << iCalifMasAlta << endl;
	getchar();

	cout << "La Matricula de la Calificacion mas Alta es: " << iMatriculaMax << endl;
	getchar();

	cout << "----------------------FIN DEL PROGRAMA----------------------" << endl;
	getchar();

}
*/