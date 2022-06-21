# include <iostream> 
using namespace std;
double restar(double n1,double n2){
	double resultado=n1-n2;
	return resultado;
	
	
} 

int main(){ 
/* EL return o retorno de valor en una funcion implica que una funcion va a devover un valor dependiendo del tipo de dato que esperamos que la funcion nos retorne, para que una funcion nos devuleva un tipo 
de dato en especifico debemos poner el tipo de dato que queremos que nos retorne esa funcion antes del nombre de la funcion y dentro de la funcion usamos la palabra return*/

cout<<"El resultado de la funcion es: "<<restar(8,6)<<endl; // al momento de llamar a una funcion que tiene un return el resultado de la funcion no se mostrar en pantalla a menos que se imprima en consola con el cout 

double respuesta= restar(34,22); //o guardarle en una variable e imprimir esa variable mismo
cout<< respuesta;

return 0;
}
