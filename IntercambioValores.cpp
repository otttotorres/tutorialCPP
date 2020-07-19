//Intercambio de valores

#include<iostream>

using namespace std;

int main(){
	
	int x,y,aux;
	
	x = 5;
	y = 2;
	
	cout<<"La X vale "<<x<<" y la Y vale "<<y;
	
	cout<<"\n";
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"Ahora la X vale "<<x<<" y la Y vale "<<y;
	
	return 0;
}
