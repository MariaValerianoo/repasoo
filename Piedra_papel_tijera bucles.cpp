#include<iostream>
#include<cstdlib>
using namespace std;

int puntoshumano=0;
int puntosmaquina=0;
int main()
{
    int res;
    do{
        do{
        int sh;
        int res;
        cout<<"Juguemos piedra, papel y tijera"<<endl;
        cout<<"Para escoger piedra seleccione 1"<<endl;
        cout<<"Para escoger papel seleccione 2"<<endl;
        cout<<"Para escoger tijera seleccione 3"<<endl;
        cout<<"Jugador, seleccione su opcion: "<<endl;
        cin>>sh;
        while(sh!=1 and sh!=2 and sh!=3){
                cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;
                cout<<"Juguemos piedra, papel y tijera"<<endl;
                cout<<"Para escoger piedra seleccione 1"<<endl;
                cout<<"Para escoger papel seleccione 2"<<endl;
                cout<<"Para escoger tijera seleccione 3"<<endl;
                cout<<"Jugador, seleccione su opcion: "<<endl;
                cin>>sh;
        }
        
        int num, a;
        srand(time(NULL));
        for(a = 1; a <= 3; a++);
        num = 1 + rand()%(4-1);
        if (num==1){
            cout<<"El computador escoge piedra"<<endl;
            break;
        }else if(num==2){
        cout<<"El computador escoge papel"<<endl;
        break;
        }else{
        cout<<"El computador escoge tijera"<<endl;
        break;
        }
        if((num==1) && (sh==3) || (num==3) && (sh==2) || (num==2) && (sh==1)){
            cout<<"¡El computador gana!"<<endl;
            puntosmaquina++;
        }else if((sh==1 && num==3) || (sh==3 && num==2) || (sh==2 && num==1)){
            cout<<"¡El humano gana!"<<endl;
            puntoshumano++;
        }else{
            cout<<"Empate"<<endl;
            break;
        }
        cout<<" - Puntos humano: "<<puntoshumano<<endl;
        cout<<" - Puntos máquina: "<<puntosmaquina<<endl;
    }while(puntoshumano<3 && puntosmaquina<3);
    cout<<"Quieres volver a jugar? "<<endl;
    cout<<"1)Si"<<endl;
    cout<<"2)No "<<endl;
    cin>>res;
    break;
}while(res==1);
cout<<"Gracias por jugar:)"<<endl;
return 0;
}
