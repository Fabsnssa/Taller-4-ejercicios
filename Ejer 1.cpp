//#<>\{|}[]
/* Ejercicio 1 (valor 2%): En una constructora un operario se conoce su sueldo y los años de antigüedad.
 Escribir un programa que lea los datos de entrada e informe lo siguiente:
 
* Si su sueldo es mayor a 110.000 $ y su antigüedad es igual o superior a 10 años, 
otorgarle un aumento del 20%, mostrar el sueldo a pagar.

* Si su sueldo es inferior a 110.000 $, pero su antigüedad es menor a 10 años 
otorgarle un aumento de 5% como un bono adicional.

* Si el sueldo es mayor o igual a 110.000 $, mostrar el sueldo en pantalla sin cambios. 
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main () {
	float sueldo,SueldoFinal;
	int yearsAntiguo;
	cout <<"\n Indique cuanto es su salario: "; cin >>sueldo;
	cout <<"\n Ingrese por cuantos years a estado trabajando en la constructora: "; cin >>yearsAntiguo;
	
	if ((sueldo>110.000) && (yearsAntiguo>=10)){
		SueldoFinal=((sueldo*20)/100)+sueldo;
		cout <<"\n El sueldo total otorgado es: "<<SueldoFinal<<endl;
	}
	else if ((sueldo<110.00) && (yearsAntiguo<10)){
		SueldoFinal=((sueldo*5)/100)+sueldo;
		cout<<"\n El sueldo total otorgado es: "<<SueldoFinal<<endl;
	}
	else if ( (sueldo>=110.000) && (yearsAntiguo==0)){
		cout<<"\n Sueldo actual es: "<<sueldo<<endl;
	}
	else {
		cout<<"\n Los datos ingresados son incorrectos";
	}


	getch ();
	return 0;
}

/*
En el parametro 3 solo indica que el sueldo debe ser mayor o igual a 110.000 mas no especifica nada sobre
los años de antiguedad, por lo tanto represente antiguedad==0 para que no ocurriera errores en el programa.
*/