/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 9
*/

#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){

    int filas;

    printf("Ingrese el numero de filas \n");
    cin>>filas;
    while(filas < 11 || filas > 20){
        cin >> filas;
    }

    int e = filas -1;
    int k, x = k;

    for (int i = 1; i < filas; i++)
    {
        for(int j = 0; j < e; j++){
            cout<<" ";
        }

        for(int k = 1; k <= i*2-1; k++){
            if (x>=10){
                x=1;
                cout<< x;
            }else{
                cout<< x;
            }
            x = x+1;
        }
        cout<<endl;
        e--;
    }

}