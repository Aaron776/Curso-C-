# include <iostream> 
using namespace std;
void saludar(string nombre){
	cout<<"Hola "<<nombre<<" mucho gusto.";
	
} 

int main(){ 
// Los paraemtros de las funciones se ponen entre los parentesis al momento de definir una funcion, un parametro en una funcion es un valor que vamos a enviar a esa funcion para que pueda ser trabajado

saludar("Aaron Ortiz"); // al momento de llamar a la funcion debo poner los parametros que asigen al momento de crear la funcion para que se ejecute correctamente
return 0;
}
