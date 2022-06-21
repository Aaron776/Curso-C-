# include <iostream> 
using namespace std;
int main(){ 
/* 
Una matriz se puede llenar tambien mediante un ciclo anidado
*/

	 int matriz[3][3];
	 int valor=0;
	 
	 for(int i=0;i<3;i++){
	 	for(int u=0;u<3;u++){
	 		valor=valor+10; // el valor de 10 es opcinal y sriev para saber de que valor vas a iniciar llenado la matriz por ejemplo si quieres que en cada coordenada se guarde 10, 20 30 y asi
	 		matriz[i][u]=valor;	
	 	}
	 	
	 }
	
	cout<<"El valor en estas coordenadas es: "<<matriz[1][0]<<endl;
	
	for(int i=0;i<3;i++){ // este ciclo for es para postrar todos los valor que tiene la matriz
	 	for(int u=0;u<3;u++){
	 		cout<<matriz[i][u]<<endl;
	 	}
	 	
	 }

return 0;
}
