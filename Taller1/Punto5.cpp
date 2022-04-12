/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 5
*/
#include <stdio.h>  
void fnx(int x){  
	if (x) printf("%d \n", x);  
}  
int main() {  
	int i, a = 1234;  
	for (i = 0; i < 4; i++)  
		fnx(a = a/10);  
} 
