/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 4
*/
#include <stdio.h>  
int main()  
{  
	int x = 0, y = 0;  
	for (x = 6; x > 0; x -= 2)  
		for (y = 0; y < 2; y++)  
			printf("%d \n", x-y);  
} 
