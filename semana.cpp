#include <iostream>

using namespace std;

int main(){
    //solicitando numero de dia de semana
    int numero = 0;
    cout<<"ingresar un numero del 1 al 7" <<endl;
    cin>> numero;

    //verificando el numero
    switch (numero)
    {
     case 1:
        cout<<"el numero correspondiente al dia lunes"<<endl;
        break;
        case 2:
        cout<<"el numero correspondiente al dia martes"<<endl;
        break;
        case 3:
        cout<<"el numero correspondiente al dia miercoles"<<endl;
        break;
        case 4:
        cout<<"el numero correspondiente al dia jueves"<<endl;
        break;
        case 5:
        cout<<"el numero correspondiente al dia viernes"<<endl;
        break;
        case 6:
        cout<<"el numero correspondiente al dia sabado"<<endl;
        break;
        case 7:
        cout<<"el numero correspondiente al dia domingo"<<endl;
        break;
        //comprobando valores fuera del rango
        case 8:
        cout<<"error el numero esta fuera del rando del 1 al 8"<<endl;
        break;

    default:
       break;
       
    }
    return 0;

}