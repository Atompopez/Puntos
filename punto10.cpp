#include <iostream>
#include <string>
using namespace std;

struct producto{
	string num;
	float valor_compra,valor_venta;
};

int main(){
	producto prod1;
	float ganancia=0.3;
	
	//solicita el dato
	cout<<"Ingrese el numero o nombre del producto: ";
	cin>>prod1.num;
	cout<<"Digite el valor del producto: $";
	cin>>prod1.valor_compra;
	
	//realiza el calculo
	prod1.valor_venta=prod1.valor_compra+(prod1.valor_compra*ganancia);
	
	//muestra el valor de la venta
	cout<<endl<<"El valor a vender este producto ("<<prod1.num<<") de: $"<<prod1.valor_venta;
	
	return 0;
}
