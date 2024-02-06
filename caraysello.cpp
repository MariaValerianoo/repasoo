#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int sh1,num;
    cout<<"Juguemos cara o sello"<<endl;
    cout<<"Para escoger cara seleccione 1"<<endl;
    cout<<"Para escoger sello seleccione 2"<<endl;
    cout<<"seleccione su opcion 1: ";
    cin>>sh1;
    int c;
    srand(time(NULL));
    for(c = 1;c <= 2;c++)
        num = 1 + rand() % (3 - 1);
    if(sh1!=1 and sh1!=2){
        cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;
    }else if(num==1){
        cout<<"La computadora elige cara"<<endl;
        cout<<"Perdiste"<<endl;
    }else if(num==2){
        cout<<"La computadora elige sello"<<endl;
        cout<<"Perdiste"<<endl;
    }else{
        cout<<"Empate"<<endl;
    }
    return 0;

}
