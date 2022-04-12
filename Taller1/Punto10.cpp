/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 10
*/
#include<iostream>
using namespace std;

int a=0, n= 0, i= 0, j= 0, x= 0, y= 0, z= 0;

int main(){

    cout<<"valor del tamaño de la lista: \n";

    cin>>a;

    for (int n=1; n<=a; n++){

        if(n % 2 == 0){

            x = n / 2;

        }else{

        x = (n + 1) / 2;

        }

        for(i = 1;i <= n;i++){
            for(j = 1;j <= n;j++){
                if(j < x){

                    y += j;    
                }
                if(j > x){

                    z += j;    
                }
            }

            if(z != 0){
                if (y == z){

                cout<<"es un numero centrico:  "<<x<<endl;

                cout<<"suma lista anterior:   "<<y<<endl;

                cout<<"suma lista posterior:  "<<z<<endl;
                }

                y  = z = 0;
                x++;
            }
        }
    }
}