/*Materia : Computacion Paralela
 *Fecha : 1/2/2022
 *Autor : Juan Camilo Rodriguez
 *Tema : Taller
 *Punto: 11
*/
#include <iostream>

using namespace std;

int main(){

   int t, km, toneladas;

    cout <<"Elige el medio de transporte" << endl;
    cout <<"(1) Bicicleta" << endl;
    cout <<"(2) Moto" << endl;
    cout <<"(3) Auto" << endl;
    cout <<"(4) Camion" << endl;
    cout <<"(5) Salir" << endl;
    cin >>t;

   if(t == 1){
       cout<<"El total a pagar es:"<<100<<endl;
    }

    if (t == 2 || t == 3){
        cout <<"Digita los Km recorridos" <<endl;
        cin>>km;
        cout<<"El total a pagar es:"<<km * 30<<endl;

    }
    if (t == 4){
        cout <<"Teclea las toneladas del camion" <<endl;
        cin>>toneladas;
        cout <<"Digita los Km recorridos" <<endl;
        cin>>km;
        cout<<"El total a pagar es:"<<(km * 30)+(toneladas*25)<<endl;
        }
}