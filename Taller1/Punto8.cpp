/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 8
*/
#include<iostream>
#include<stdlib.h>


using namespace std;


int main (){
    int dia, mes, anio, n_1, n_2, n_3;
    cout<< "Ingrese fecha de la forma: Dia/Mes/Año" << endl;

    cout<< "Dia: ";
    cin>> dia;

    while(dia >= 31 ){
        cin >> dia;
    }

    cout<< "Mes: ";
    cin>> mes;
    while(mes >= 12 ){
        cin >> mes;
    }

    cout<< "Año: ";
    cin>> anio;
    while(dia >= 2021 ){
        cin >> anio;
    }

    n_1 = dia + mes + anio;
    n_2 = (n_1%10)+((n_1/10)%10)+((n_1/100)%10)+((n_1/1000));
    n_3 = (n_2%10) + (n_2/10);

    cout<< "Su numero de tarot es: "<<n_3<<endl;
}