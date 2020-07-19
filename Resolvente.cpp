#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float a,b,c, resultado1, resultado2;
	
	cout<<"Introduzca el valor de A: "; cin>>a;
	cout<<"Introduzca el valor de B: "; cin>>b;
	cout<<"Introduzca el valor de C: "; cin>>c;
	
	resultado1 = (-b + (sqrt(pow(b,2)  -4*a*c)))/(2*a);
	resultado2 = (-b - (sqrt(pow(b,2)  -4*a*c)))/(2*a);
	
	cout<<"El resultado de la primera x es: "<<resultado1;
	cout<<"El resultado de la segunda x es: "<<resultado2;
	
	
	return 0;
}
