#include<iostream>

using namespace std;

int main (){
	
	float nota, aux;
	
	cout<<"Introduzca la primera nota: ";
	
	cin>>nota;
	
	aux = nota;
	
	cout<<"Introduzca la segunda nota: ";
	
	cin>>nota;
	
	aux = aux + nota;
	
	cout<<"Introduzca la tercera nota: ";
	
	cin>>nota;
	
		aux = aux + nota;
	
	cout<<"Introduzca la cuarta nota: ";
	
	cin>>nota;
	
		aux = aux + nota;
		
	cout<<"El promedio de las notas es "<<aux/4;		
	
	return 0;
}
