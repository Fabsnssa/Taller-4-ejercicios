//#<>\{|}
/* Ejercicio 3 (valor 2%): Escriba un programa que lea números hasta que se lee un negativo y 
muestra la suma de los números leídos. El proceso se repetirá hasta que se introduzca un 0.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main () {
	
	float numero, sumanumeros=0,totalsuma=0;
	
	
	while (numero >= 0){
			cout<<"\n Digite un numero al sistema: "<<endl; cin>>numero;
		
		if (numero<=-1){
			totalsuma=sumanumeros;
		}
		else { 
		sumanumeros=sumanumeros + numero;
		totalsuma=sumanumeros;
		}
	}
	
	cout<<"\n la suma total de los numeros ingresados es: "<<totalsuma<<endl;
	
	return 0;
}
