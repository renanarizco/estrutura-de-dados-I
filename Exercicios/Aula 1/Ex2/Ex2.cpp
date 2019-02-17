#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int idade;
	cout << "Digite sua idade: ";
	cin >> idade;

	if (idade >= 16)
		cout << "Pode entrar na festa.";
	else
		cout << "Você é muito novo para entrar na festa.";

	system("pause>null");
}