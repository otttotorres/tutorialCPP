#include<iostream>

using namespace std;

int main(){
	
	int a,b;
	
	cout<<"Introduzca el primer numero: "; cin>>a;
	
	cout<<"Introduzca el segundo numero: "; cin>>b;
	
	
	if(a == b){
		cout<<"Los numeros son iguales";
	}
	else if(a > b){
		cout<<"El numero mayor es: "<<a;
	}else{
		cout<<"El numero mayor es: "<<b;
	}
	
	
	return 0;
}
