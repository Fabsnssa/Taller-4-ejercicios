//#<>\{|}[]
/*
Ejercicio 2 (valor 2%): Escriba un programa que se comporte como una calculadora simple que realice 
operaciones hasta que el usuario introduzca el carácter '&'. Para ello deberá tener 
las siguientes características:
 
*Solo efectuará operaciones con dos operandos.
*Operaciones permitidas: (+,-,*,/).
*Se trabajará con operandos enteros.- Pedirá en primer lugar
*La operación a realizar, y a continuación los dos operandos.
*Si el operador no se corresponde con alguno de los indicados se emitirá un mensaje de error.

*/
#include<iostream>
#include<conio.h>
using namespace std;
int main () {
	int Numero1,Numero2,operacion;
	int suma,resta,mult,div;
	char caracter;
	
	do {
		cout<<"\t Calculadora simple de operaciones basicas"<<endl;
	cout<<"\n Ingrese dos numeros al sistema: "; cin>>Numero1>>Numero2;
	
	cout<<"\t Seleccione una de las siguientes opciones segun la operacion que desee calcular"<<endl;
	
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"4. Division"<<endl;
	cin>>operacion;
	
	cout<<"\n Digite un caracter: "; cin>>caracter;
	
	if (caracter=='&'){
		cout<<"\n Error, los datos ingresados no son correctos";
		getch ();
		return 0;
	}
	else {
		switch (operacion){
	case 1: 
	suma = Numero1 + Numero2;
	cout<<"\n El resultado de la operacion suma es: "<<suma;break;
	
	case 2:
	resta = Numero1 - Numero2;
	cout<<"\n El resultado de la operacion resta es: "<<resta;break;
	
	case 3:
	mult= Numero1 * Numero2;
	cout<<"\n El resultado de la operacion multiplicacion es: "<<mult;break;
	
	case 4:
	div= Numero1 / Numero2;
	cout<<"\n El resultado de la operacion division es: "<<div;break;
	
	default:cout<<"\n Error, los datos ingresados no son correctos";break;
}
	}
	

	} while (caracter != '&');
	
	getch ();
	return 0;
}
