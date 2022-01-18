#include<iostream>

using namespace std;

int main() {
	int horasTrabajadas;
	float costoHora;
	float sueldo;

	cout << "Ingrese Horas trabajadas por operario: ";
	cin >> horasTrabajadas;

	cout << "Ingrese el pago por hora: ";
	cin >> costoHora;

	sueldo = horasTrabajadas * costoHora;

	cout << "el sueldo del operario es: ";
	cout << sueldo;

	return 0;

}