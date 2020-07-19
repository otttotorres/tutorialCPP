#include<iostream>

using namespace std;

int main(){
	
	int n1,n2,n3;
	
	cout<<"Introduzca el primer numero: "; cin>>n1;
	cout<<"Introduzca el segundo numero: "; cin>>n2;
	cout<<"Introduzca el tercer numero: "; cin>>n3;
	
	if(n1 == n2 && n2 == n3){
		cout<<"Los numeros son iguales";
	}
	else if(n1 > n2 && n1 > n3){
		cout<<"El numero mayor es: "<<n1;
	}else if(n2 > n1 && n2 > n3){
		cout<<"El numero mayor es: "<<n2;
	}else{
		cout<<"El numero mayor es: "<<n3;	
	}
	
	return 0;	
}
