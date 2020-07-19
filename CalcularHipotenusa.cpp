#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	float cateto1, cateto2, hipotenusa;
	
	cout<<"Introduzca el valor del primer cateto: "; cin>>cateto1;
	cout<<"Introduzca el valor del segundo cateto: "; cin>>cateto2;
	
	hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
	
	cout<<"La hipotenusa tiene un valor de: "<<hipotenusa;
	
	
	return 0;
}
