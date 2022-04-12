/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 7
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    float x, y, res, num, cont = 0;
    printf("Ingrese el valor de x: ");
    cin >> x;
    printf("Ingrese el valor de y: ");
    cin >> y;
    printf("Ingese la cantidad de veces a mostrar: ");
    cin >> num;

    do{
        res = 1 / (x +  (cont * y) );
        printf("Resultado: %f \n", res);
        cont++;
        num--;
    }while(num);
}