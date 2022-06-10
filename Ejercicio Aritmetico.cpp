# include<iostream> 
# include <math.h> // esta liberia me permite usar operaciones matematicas complejas como sacar rais cuadrada, potenciacion, etc.
using namespace std;
int main(){ 
	int numero1,numero2,suma,resta,multi,division,raiz_cuadrada,potencia;
	cout<<"Digite el primero numero: ";
	cin>>numero1;
	
	cout<<"Digite el segundo numero: ";
	cin>>numero2;
	
	suma=numero1+numero2;
	resta=numero1-numero2;
	multi=numero1*numero2;
	division=numero1/numero2;
	raiz_cuadrada=sqrt(numero1);
	potencia=pow(numero2,numero1);
	
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicaion es: "<<multi<<endl;
	cout<<"La division es: "<<division<<endl;
	cout<<"La raiz cuadrada es: "<<raiz_cuadrada<<endl;
	cout<<"La potencia es: "<<potencia<<endl;
	
	
	return 0; 
}
