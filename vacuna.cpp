#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int peso,meses,dosis;
    cout<<"Hola mamita indicame primero el peso del bebe: "<<endl;
    cin>>peso;
    cout<<"Ahora indicame los meses que tiene el bebe: "<<endl;
    cin>>meses;
    dosis=(peso+10/meses*10)*8;
    cout<<"La dosis que debes aplicar al bebe es de: "<<dosis;

}
