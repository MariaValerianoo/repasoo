#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int sh1,num;
    int c;
    int res;
    srand(time(NULL));
    for(c = 1;c <= 2;c++)
        num = 1 + rand() % (3 - 1);
        do{
            cout<<"Juguemos cara o sello"<<endl;
            cout<<"Para escoger cara seleccione 1"<<endl;
            cout<<"Para escoger sello seleccione 2"<<endl;
            cout<<"seleccione su opcion 1: ";
            cin>>sh1;
            while(sh1!=1 and sh1!=2){
                cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;
                cout<<"Juguemos cara o sello"<<endl;
                cout<<"Para escoger cara seleccione 1"<<endl;
                cout<<"Para escoger sello seleccione 2"<<endl;
                cout<<"seleccione su opcion 1: ";
                cin>>sh1;
            }
            if(num==1 and sh1==2){
                cout<<"La computadora elige cara"<<endl;
                cout<<"Perdiste"<<endl;
                cout<<"Quieres seguir jugando?"<<endl;
                cout<<"1) si"<<endl;
                cout<< "2) no"<<endl;
                cin>>res;
            }else if(num==2 and sh1==1){
                cout<<"La computadora elige sello"<<endl;
                cout<<"Perdiste"<<endl;
                cout<<"Quieres seguir jugando?"<<endl;
                cout<<"1) si"<<endl;
                cout<< "2) no"<<endl;
                cin>>res;
            }else{
                cout<<"Empate"<<endl;
                cout<<"Haz ganado"<<endl;
                cout<<"Quieres seguir jugando?"<<endl;
                cout<<"1) si"<<endl;
                cout<< "2) no"<<endl;
                cin>>res;
            }
            
            
        }while(res==1);
    cout<<"Gracias por jugar:) "<<endl;
    return 0;

}
