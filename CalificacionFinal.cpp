#include<iostream>

using namespace std;

int main (){
	
	float practica, teorica, participacion, final;
	
	 cout<<"Introduzca la nota de las practicas: "; cin>>practica;
	 
	 cout<<"Introduzca la nota teorica: "; cin>>teorica;
	 
	 cout<<"Introduzca la nota de la participacion: "; cin>>participacion;
	 
	 practica = practica * 0.30;
	 teorica = teorica * 0.60;
	 participacion = participacion * 0.10;
	 
	 final = practica + teorica + participacion;
	 
	 cout<<"La nota final es: "<<final;
	
	return 0;
}
