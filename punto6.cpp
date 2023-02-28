#include <iostream>
#include <ctime>
using namespace std;

struct fecha{
	string x;
	int dia,mes,anio;
};

int main(){
	fecha f1,f2;

    // Pedir la fecha de nacimiento
    cout << "Ingresa tu fecha de nacimiento (DD/MM/AAAA): "<<endl;
    cin >> f1.dia >> f1.mes >> f1.anio;
    f1.x="Nacimiento";

    // Obtener la fecha actual
    time_t t = time(NULL); // Obtiene la fecha y hora actual
    tm* tiempo_actual = localtime(&t);
    f2.dia = tiempo_actual->tm_mday;
    f2.mes = tiempo_actual->tm_mon + 1;
    f2.anio = tiempo_actual->tm_year + 1900;
    f2.x="Actual";

    // Calcular la edad
    int edad = f2.anio - f1.anio;
    if (f2.mes < f1.mes || (f2.mes == f1.mes && f2.dia < f1.dia)) {
        edad--;
    }

    // Mostrar la edad
    cout << "Tu edad es: " << edad << " anios" << endl;

    return 0;
}

