# include<iostream>
using namespace std;
int main(){
	// Sentencia de control switch case permite ejecutar una accion dependiendo del valor de una variable, es como tener varios ifelse
	int numero;
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	switch(numero){
		case 1: 
		cout<<"El numero es 1";
		break;
		case 2: 
		cout<<"El numero es 2";
		break;;
		case 3: 
		cout<<"El numero es 3";
		break;
		case 4: 
		cout<<"El numero es 4";
		break;
		case 5: 
		cout<<"El numero es 5";
		break;
		default: 
		cout<<"El numero ingresado esta fuera del rango";
		break;
	
	}
	
	

	return 0;
}
