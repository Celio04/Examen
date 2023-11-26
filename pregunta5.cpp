//programa: calcular el area de un circulo
//autor: Celio Andres Gonzalez Campuzano
//fecha: 2023/11/24

#include<iostream>                                                    
using namespace std;

const float pi=3.1416;

float calculaperimetro(float r){	return pi*r*r;
}

int main ()
{

	float radio;

	cout<<"ingrese el radio del circulo:"; cin>>radio;

	cout<<"el area del circulo es:";calculaperimetro(radio);

	return (0);
}

