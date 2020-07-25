#include <iostream>
using namespace std;

void main() 
{
	int hora_1, minuto_1, segundo_1, hora_2, minuto_2, segundo_2, hora_final, minuto_final, segundo_final;

	cout << "Hora inicial" << endl;
	cin >> hora_1;

	cout << "Minuto inicial" << endl;
	cin >> minuto_1;

	cout << "Segundo inicial" << endl;
	cin >> segundo_1;

	cout << "Hora final" << endl;
	cin >> hora_2;

	cout << "Minuto final" << endl;
	cin >> minuto_2;

	cout << "Segundo final" << endl;
	cin >> segundo_2;

	hora_final = hora_2 - hora_1;
	minuto_final = minuto_2 - minuto_1;
	segundo_final = segundo_2 - segundo_1;

	cout << hora_final << ":" << minuto_final << ":" << segundo_final;
	system("pause>null");
}