#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero, metade; //necess�rio float pois se o usu�rio escrever um n�mero fracionado, dar certo
	cout << "Digite um n�mero: ";
	cin >> numero;
	metade = (numero / 2);

	if (numero > 40)
		cout << "A metade �: " << metade;
	else
		cout << "Seu numero � menor ou igual a 40";

	system("pause>null");

}