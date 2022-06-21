# include <iostream> 
using namespace std;
int main(){ 
/* 
Las matrices son  una coleccion de datos que va a permitir almacenar datos pero de forma distinta a los arreglos, el tamaño de una matriz ya no sera lineal y sera 
bilineal ya con filas y columnas y para acceder a un elemento de una matriz se hara mediante cordenadas, para crear una matriz ponemos el tipo de dato, el nombre de la matriz 
y el tamaño que tendra por ejemplo si es una matriz 3*3 seria mediante corchtes [3][3] y luego en cada coordenadas ponemos el valor que tendra
*/
 int matriz[2][2];
 matriz[0][0]=1;
 matriz[0][1]=4;
 matriz[1][0]=7;
 matriz[1][1]=10;
 
 cout<<"El valor que hay en esas coordenas de la matriz es: "<<matriz[1][1]<<endl; // si se quiere imprimir un valor de la matriz debemos hacer uso de sus coordenadas
 


return 0;
}
