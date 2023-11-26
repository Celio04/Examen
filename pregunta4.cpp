//
//
//

#include<iostream>
using namespace std;
int main()
{
	int arreglo[5];
	int suma = 0;
	int i = 0;

	do {
		cout<<" ingrese el valor para el elemento:"<<i+1<<":";
		cin>>arreglo[i];

		suma+=arreglo[i];
		i++;
	} while (i < 5);

	cout<<" La suma de los elementos del arreglo es: " <<suma<<endl;
	return (0);
}
	
