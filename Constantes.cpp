# include <iostream> 
# define nombre"Aaron Ortiz"  // primera forma de definir una constante es usando el termine define y ponemos el nombre de la variable que sera constante y le agregamos el valor que tendra y no es necesario poner el igual(=) 
using namespace std;
int main(){ 
// Las constantes son valores o varaibles que no van a poder cambiar a lo largo del programa y para declara una variable que sea constante podemos hacerlo de dos formas
cout<<nombre<<endl;

// Segunda forma es usar el termino const segido del tipo de variable que sera y luego su nombre y valor
const int edad=23;

cout<<edad;

return 0;
}
