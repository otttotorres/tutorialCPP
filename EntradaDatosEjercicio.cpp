#include<iostream>

using namespace std;

int main(){
	
	/*
	EJERCICIO DE ENTRADA DE DATOS
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Introduzca su edad: "; cin>>edad;
	cout<<"Introduzca su sexo: "; cin>>sexo;
	cout<<"Introduzca la estatura: "; cin>>altura;
	
	cout<<"Su edad es: "<<edad<<" su sexo es: "<<sexo<<" y su estatura es: "<<altura;
	*/
	
	//EJERCICIO TRANSFORMAR EXPRESION A CODIGO
	float a,b,c,d, resultado = 0; //Por qué se inicializa ésta y las otras no?
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	cout<<"Digite el valor de d: "; cin>>d;
	
	
	resultado = (a+b) / (c+d);
	
	cout.precision(2); //UNA FUNCIÓN PARA DEFINIR LA CANTIDAD DE DECIMALES QUE QUIERO QUE SE IMPRIMAN
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}
