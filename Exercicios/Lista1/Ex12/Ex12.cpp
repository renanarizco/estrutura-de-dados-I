#include <iostream>
using namespace std;

void main()
{
	int entrada_segundos, horas, minutos, segundos;

	cout << "Digite os segundos: " << endl;
	cin >> entrada_segundos;

	segundos = (entrada_segundos - (3600 * horas) - (minutos * 60));
	minutos = (entrada_segundos - (3600 * horas)) / 60;
	horas = (entrada_segundos / 3600);

	cout << horas << ":" << minutos << ":" << segundos;

	system("pause>null");
}