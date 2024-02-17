#include <iostream>
using namespace std;
#include <math.h>
int main() {
    int estrato;
    int deuda;
    int descuento;
    cout<<"Bienvenido a la secretaria de hacienda"<<endl;
    cout<<"Primero ingresa tu estrato: "<<endl;
    cin>>estrato;
    if(estrato==1 or estrato==2 or estrato==3){
        cout<<"Para poder saber a que descuento puedes acceder, ingresa el valor de tu deuda sin puntos o comas: "<<endl;
        cin>>deuda;
        if(deuda>=60000 and deuda<150000){
        descuento=(deuda*20)/100;
        cout<<"El descuento a realizar es del 20%"<<endl;
        cout<<"El total a pagar con el descuento es de: "<<deuda-descuento<<endl;
    }else if(deuda>=150000 and deuda<300000){
        descuento=(deuda*30)/100;
        cout<<"El descuento a realizar es del 30%"<<endl;
        cout<<"El total a pagar con el descuento es de: "<<deuda-descuento<<endl;
    }else if(deuda>=300000 and deuda<800000){
        descuento=(deuda*40)/100;
        cout<<"El descuento a realizar es del 40%"<<endl;
        cout<<"El total a pagar con el descuento es de: "<<deuda-descuento<<endl;
    }else if(deuda>=800000){
        descuento=(deuda*50)/100;
        cout<<"El descuento a realizar es del 50%"<<endl;
        cout<<"El total a pagar con el descuento es de: "<<deuda-descuento<<endl;
    }else{
        cout<<"El valor no aplica para la deuda"<<endl;
    }
    
    }else{
        cout<<"El estrato no aplica para el descuento:(";
    }
    

    return 0;
}