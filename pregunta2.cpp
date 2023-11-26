//Programa: Numero positivo o negativo.
//autor: Celio Andres Gonzalez Campuzano
//fecha: 24/11/2023

#include<iostream>
using namespace std;
int main ()
{
	int df;
	cout<<"ingrese un numero:";cin>>df;

	if (df > 0){
		cout<<" El numero ingresado es positivo." <<endl;
	} else if (df < 0) {
		cout<<" El numero ingresado es negativo."<<endl;
	} else { 
		cout<<" El numero ingresado es cero."<<endl;
	}
	return (0);
}
