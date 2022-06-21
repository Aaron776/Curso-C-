# include<iostream>
using namespace std;
int main(){
	// Sentencia de control If-else: permite evaluar el resultado de una variable y dependiendo de ese rewsultado realiza una accion u otra, y el elseif permite anidad varios if en una misma estructura de codigo
	int edad;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	if(edad>=0){
		cout<<"Usted es mayor de edad";
	}else{
		cout<<"Usted es menor de edad";
	}
	
	

	return 0;
}
