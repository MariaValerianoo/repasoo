#include <iostream>
using namespace std;
int main(){
	int cal1,Tllamada,tiempo;
	cout<<"Hola bienvenido a telefonia P"<<endl;
	cout<<"Por favor digita la opcion de tu llamada"<<endl;
	cout<<"1)Llamada Internacional "<<endl;
	cout<<"2)Llamada celular "<<endl;
	cout<<"3)Llamada fijo "<<endl;
	cin>>Tllamada;
	switch(Tllamada){
		case 1:
			cout<<"Cuanto durara tu llamada?"<<endl;
			cout<<"El valor es de 500 pesos"<<endl;
			cin>>tiempo;
			cal1=tiempo*500;
			cout<<"El valor de la llamada es de: "<<cal1<<endl;
			break;
		case 2:
			cout<<"Cuanto durara tu llamada?"<<endl;
			cout<<"El valor es de 300 pesos"<<endl;
			cin>>tiempo;
			cal1=tiempo*300;
			cout<<"El valor de la llamada es de: "<<cal1<<endl;
			break;
		case 3:
			cout<<"Cuanto durara tu llamada?"<<endl;
			cout<<"El valor es de 200 pesos"<<endl;
			cin>>tiempo;
			cal1=tiempo*200;
			cout<<"El valor de la llamada es de: "<<cal1<<endl;
			break;
	}
	
		
}