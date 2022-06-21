# include<iostream> 
using namespace std;
void saludar(){
	cout<<"Hola C++";
	saludar();
}

int main(){ 
	// La recursividad se aplica a las funciones, una funcion es recursiva cuando se la esta llamando dentro de si misma

	saludar();
	return 0; 
}
