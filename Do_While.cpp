# include <iostream> 
using namespace std;
int main(){ 
/* Un ciclo do while se diferencia del ciclo while es que va hacer una accional menos una vez y luego entra a analizar si la condicion es true o false

*/

int contador=0;
do{
 // ejecuta al menos una vez el codigo que este dentro del do aunque la condicion del while sea false
	cout<<"Hola Mundo "<<endl;
	contador++;
	
}while(contador<10);

return 0;
}
