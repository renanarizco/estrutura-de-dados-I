#include <iostream>

using namespace std;
//namespace serve facilitar o acesso para aumentar a produtividade pois varios comandos começam por std

void main()
{
	int idade = 0;
	cout << "Informe a idade: ";
	//cout é o printf
	cin >> idade;
	//cin é o scanf

	if (idade >= 18)
		cout << "Permitido o acesso!";
		//nao precisa de {} quando tem só uma

	system("pause>null");
	// system("pause") do c++


}