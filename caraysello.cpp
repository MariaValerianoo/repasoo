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
    if(num==1){
        cout<<"La computadora elige cara"<<endl;
    }else if(num==2){
        cout<<"La computadora elige sello"<<endl;
    }
    int punto=0;
    int puntoh=0;
    if((num==1 and sh1==2) || (num==2 and sh1==1)){
        cout<<"La computadora gana"<<endl;
        punto++;
    }else if((sh1==1 and num==3) || (sh1==3 and num==2) || (sh1==2 and num==1)){
        cout<<"El humano gana"<<endl;
        puntoh++;
    }else{
        cout<<"Empate"<<endl;
    }

}