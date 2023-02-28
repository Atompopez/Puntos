#include <iostream>
using namespace std;

struct presu{
	float monto,pre_gin,pre_trau,pre_ped;
};

int main(){
	presu p1;
	//solicita los datos
	cout<<"Ingrese el monto presupuestal: $";
	cin>>p1.monto;
	
	//realiza los calculos
	p1.pre_gin=p1.monto*0.4;
	p1.pre_ped=p1.monto*0.3;
	p1.pre_trau=p1.monto*0.3;
	
	//muestra los resultados
	cout<<endl<<"	Sus recursos serian"<<endl<<endl;
	cout<<"Ginecologia:   (40%) $"<<p1.pre_gin<<endl;
	cout<<"Traumatologia: (30%) $"<<p1.pre_trau<<endl;
	cout<<"Pediatria:     (30%) $"<<p1.pre_ped;
	
	return 0;
}
