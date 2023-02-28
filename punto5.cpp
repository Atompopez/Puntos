#include <iostream>
#include <iomanip>
using namespace std;

struct dato{
	string genero;
	int valor;
};

int main(){
	dato d1,d2;
	int total;
	float t_muj,t_hom;
	
	//solicita los datos
	d1.genero="Hombre(s)";
	cout<<"Ingrese el numero de estudiantes hombres: ";
	cin>>d1.valor;
	d2.genero="Mujer(es)";
	cout<<"Ingrese el numero de estudiantes mujeres: ";
	cin>>d2.valor;
	
	//realiza los calculos
	total=d1.valor+d2.valor;
	t_muj=d2.valor*100/total;
	t_hom=d1.valor*100/total;
	
	//muestra los resultados
	cout<<endl<<"El porcentaje de "<<d2.genero<<" es de: "<<setprecision(4)<<t_muj<<"%"<<endl;
	cout<<"El porcentaje de "<<d1.genero<<" es de: "<<setprecision(4)<<t_hom<<"%";
	
	return 0;
}
