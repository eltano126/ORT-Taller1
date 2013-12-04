
	/* Fecha de entrega: 7/9/11
	
	Integrantes: Enzo Toscano, Dario Ratner
	
	Objetivo:
	El Instituto Hidrográfico de la provincia necesita hacer una estadística del
	total de precipitaciones caídas en las últimas cuatro semanas.
	Para ello se ingresa en cada semana siete valores (uno por cada día de la
	semana), que indica el total de lluvia caída en cada día en milímetros.
	Se desea saber:
	a) Por cada semana: qué porcentaje de días sin lluvia hubo (un día sin
	lluvia es cuando el valor
	ingresado por el operador es 0).
	b) Por cada semana: el promedio de lluvia caída en milímetros.
	c) En todo el período: Qué número de semana fue la que más promedio de
	lluvia tuvo.
	d) En todo el período: La cantidad de lluvia caída en milímetros.

	*/
 
	#include<iostream>
	using namespace std;
 
	//Aca declaramos los encabezados de los m{odulos
 
	void Ingreso (int iContD, int &iDia);
	void Contador0Lluvia (int iDia , int &iContD0);
	void SumaLluvia ( int iDia , int &iSumaSemana);
	void PromSem ( int iSumaSemana  ,float &fPromSemana);
	void CalcD0 (  int iContD0 , float &fPorcentD0 );
	void MaxSemana (float fPromSemana, int iContSem, int &iMaxContSem , float &fMaxPromedio );
	void TotalPeriodo ( float fPromSemana , float &fTotalPer);
 
	void main(){
 
		int iContSem;
		int iContDia;
		int iDia;
		int iContDia0;
		int iSumaSem;
		int iContMaxSem;
		float fMaxProm;
		float fPromSem;
		float fPorcentD0;
		float fTotPer;
		const int ciTotSems = 4;
		const int ciTotDias = 7;
 
		iContSem = 0;
		iContDia = 0;
		iDia = 0;
		iContDia0 = 0;
		iSumaSem = 0;
		fMaxProm = 0;
		fTotPer = 0;
	
		//Aca comienza el While externo
	
		while (iContSem < ciTotSems ) {
 
			iContDia= 0 ;
			iDia = 0;
			iContDia0 = 0;
			iSumaSem = 0;
 
			cout << "SEMANA " << iContSem + 1 << endl;
 
			//Acacomienza el while interno
		
			while ( iContDia < ciTotDias) {
 
				Ingreso (iContDia ,iDia);
				Contador0Lluvia (iDia , iContDia0);
 
				CalcD0 (iContDia0 , fPorcentD0);
 
				SumaLluvia (iDia,iSumaSem);
 
				PromSem ( iSumaSem, fPromSem);
 
				iContDia++;
 
			 }
			// Aca finaliza el while interno
			
			MaxSemana (fPromSem, iContSem , iContMaxSem , fMaxProm);
		
			TotalPeriodo ( iSumaSem , fTotPer );
		
			cout << endl;
 
			cout << "Estadistica Semanal:" << endl;
			getchar();
		
			cout << "El Porcentaje de días sin lluvia de esta semana fue del: " << fPorcentD0 << "%"<< endl;
			getchar();
 
			cout << " El Promedio de lluvia caida en esta semana fue de " << fPromSem << " milimetros " << endl;
			getchar();
 
			iContSem++;
		
		}
		// Aca finaliza el while externo
 
		cout << endl;
 
		cout << "Estadistica de todo el período:" << endl;
	
		cout << "La semana que mas promedio de lluvia tuvo fue la semana: " << iContMaxSem << endl;
		getchar();
 
		cout << "La cantidad total de lluvia que hubo fue de " << fTotPer << "milimetros" << endl;
		getchar();
	
	}
	//Aca finaliza el main
 
	// Aca desarrollamos los modulos
 
		void Ingreso (int iContD, int &iDia){
		
			cout << "Dia: " << iContD +1 <<", Ingrese total de lluvia en milimetros" << endl;
	
			cin >> iDia;
	
			getchar();
		}
 
 
		void Contador0Lluvia (int iDia , int &iContD0){
		
			if ( iDia == 0){
			
				iContD0= iContD0 +1 ;
			}
		}
 
		void SumaLluvia ( int iDia , int &iSumaSemana){
		
			iSumaSemana = iSumaSemana + iDia ;
		}
 
 
		void PromSem ( int iSumaSemana ,float &fPromSemana){
		
			fPromSemana = (float) iSumaSemana / 7;
		}
 
 
		void CalcD0 (  int iContD0 , float &fPorcentD0 ) {
 
			fPorcentD0 = ( iContD0 * 100 ) / 7;
		}
 
 
 
		void MaxSemana (float fPromSemana, int iContSem, int &iMaxContSem , float fMaxPromedio  ) {
 
			if (fPromSemana > fMaxPromedio)  {
 
				fMaxPromedio = fPromSemana;
 
				iMaxContSem = iContSem ;
			}
		}
 
		void TotalPeriodo ( float fPromSemana , float &fTotalSemana) {
 
			fTotalSemana = fTotalSemana + fPromSemana;
		 }