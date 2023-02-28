#include <iostream>
#include <string>
using namespace std;

struct inversion{
	string inversor;
	int inversion;
	
};

int main(){
	inversion inv1,inv2;
	int invTotal,porc_inv1,porc_inv2;
	
	//solicita los datos
	cout<<"	Digite los datos de las inversiones."<<endl<<endl;
	cout<<"Inversor 1: ";
	cin>> inv1.inversor;
	cout<<"Valor inversion: $";
	cin>>inv1.inversion;
	cout<<"Inversor 2: ";
	cin>> inv2.inversor;
	cout<<"Valor inversion: $";
	cin>>inv2.inversion;
	
	//realiza la operacion
	invTotal=inv1.inversion+inv2.inversion;
	porc_inv1=inv1.inversion*100/invTotal;
	porc_inv2=inv2.inversion*100/invTotal;
	
	//muestra los porcentajes
	cout<<endl<<endl<<"Inversior "<<inv1.inversor<<": "<<porc_inv1<<"%"<<endl;
	cout<<"Inversior "<<inv2.inversor<<": "<<porc_inv2<<"%";
	
	return 0;
}
