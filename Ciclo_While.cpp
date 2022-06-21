# include <iostream> 
using namespace std;
int main(){ 
/* Un ciclo un bloque de codigo que se va a repetir indefinidadmente a menos que le demos una condicion para detenerse
el ciclo while siginifica mientras dentro del paretesis ponemos la condicion hasta donde queremos que se repita y entre llaves poenmos la accion que uqeremos que se repita
y como consejo  para un ciclo se debe tener una variable contador para que el ciclo no se ejecute indefinidadmente

*/

int contador=0;
int i=0;
while(contador<20){ // en el parentesis se evalua una condicon booleana (true o false) mientras la condicion sea verdadeera se ejecutara el ciclo y si se hace falsa ya se detrndra
	i++;
   cout<<"El numero es: "<<i<<endl;
	contador++;
		
	
}

return 0;
}
