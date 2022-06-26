//#<>\{|}
/* Ejercicio 4 (Valor 3%): En una fábrica de coches se desea un programa para calcular 
el precio medio de un número de modelos de coche, leído desde teclado. 
Se pide dado un número de modelos de coche, introducir el precio de cada modelo de coche 
y posteriormente calcular el precio medio de los modelos.

 */
#include<iostream>
#include<conio.h>

using namespace std;
int main () {
	
	int NmodelosCarro,tope;
	float Preciomodelo,Pmedio, i, acumm;
	acumm=0;
	cout<<"\n Digite el numero de modelos: "<<endl; cin >>NmodelosCarro;
	cout<<"\n Digite un limite de modelos (el mismo al numero de modelos): "<<endl; cin >>tope;


	for (float i=1;i<=tope;i++){
	cout<<"\n Digite el precio de los modelos de los carros: "<<endl; cin >>Preciomodelo;
	acumm=acumm+Preciomodelo;
	Pmedio=acumm / NmodelosCarro;	
	}	
	cout<<"\n El precio medio de la cantidad de modelos de carro ingresados son: "<<Pmedio<<endl;
	
	getch ();
	return 0;
}

