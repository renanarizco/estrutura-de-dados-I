#include <iostream>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int frequencia;
	cout << "Digite a porcentagem de sua frequência (0 a 100): ";
	cin >> frequencia;

	if (frequencia >= 80 && frequencia <= 100) //maior ou igual a 80 e menor ou igual a 100 ele imprime: Permitido.
		cout << "Permitido.";
	else
		cout << "Não permitido.";

	system("pause>null");
}