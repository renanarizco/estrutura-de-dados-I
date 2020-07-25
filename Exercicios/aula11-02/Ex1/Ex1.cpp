#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero, metade; //necessário float pois se o usuário escrever um número fracionado, dar certo
	cout << "Digite um número: ";
	cin >> numero;
	metade = (numero / 2);

	if (numero > 40)
		cout << "A metade é: " << metade;
	else
		cout << "Seu numero é menor ou igual a 40";

	system("pause>null");

}