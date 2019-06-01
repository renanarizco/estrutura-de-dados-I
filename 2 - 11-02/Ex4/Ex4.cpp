#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario;
	cout << "Digite seu salário: ";
	cin >> salario;

	if (salario > 900) //se for maior que 900 aumenta em 3%, se não aumenta em 7%
		cout << "Novo salário: " << salario * 1.03; //pra poder aumentar em 3%, é necessário fazer a conta salario * 1.03 ou salario + salario * 0.03
	else
		cout << "Novo salário: " << salario * 1.07; //a mesma coisa acontece com 7%
	//se colocar 900, ele aumenta em 7% pois cai na condição do else, e o exercicio pede para que os que recebem ATÉ 900 aumentar em 7%.

	system("pause>null");
}