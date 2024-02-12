#include<iostream>
using namespace std;

int main(){
    int cant1=0;
    int cant2=0;
    int suma2=0;
    int suma1=0;
    int suma=0;
    cout<<"por favor ingrese la cantidad de numeros que quiere ingresar en esta primera casilla: "<<endl;
    cin>>cant1;
    string numeros1[cant1];
    for (int j = 0; j < cant1; j++)
    {
        cout<<"Ingrese el numero en la posicion: "<<j<<endl;
        cin>>numeros1[j];
        suma1=suma+numeros1[j];
     
    }
    cout<<"por favor ingrese la cantidad de numeros que quiere ingresar en esta segunda casilla: "<<endl;
    cin>>cant2;
    string numeros2[cant2];
    for (int i = 0; i < cant2; i++)
    {
        cout<<"Ingrese el numero en la posicion: "<<i<<endl;
        cin>>numeros2[i];
        suma2=suma+numeros2[i];
    
    }
    if(suma1==suma2){
        cout<<"Los numeros son iguales"<<endl;
    }else if(suma1>suma2)
    {
        cout<<"La sumatoria de la primera casilla es mayor"<<endl;
    }else if(suma2>suma1){
        cout<<"La sumatoria de la segunda casilla es mayor"<<endl;

    }
        cout<<"La sumatoria de los numeros de la primera casilla es: "<<suma1<<endl;
        cout<<"La sumatoria de los numeros de la segunda casilla son: "<<suma2<<endl;
    
}
