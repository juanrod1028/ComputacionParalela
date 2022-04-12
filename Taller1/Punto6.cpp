/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 6
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n1, n2, suma = 0, aux;

	printf("Ingrese numero 1: ");
	cin>>n1;
	while(n1<0){
		cin>>n1;
	}
	printf("Ingrese numero 2: ");
	cin>>n2;
	while(n2<0){
		cin>>n2;
	}
	if(n1 > n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	for(int i= n1; i<n2; i++){
		if (i%5 == 0){
			suma = suma + i;
			cout << i <<endl;
		}
	}

	printf("La suma de los numeros entre %d y %d es: %d", n1, n2, suma );
}