#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario;
	cout << "Digite seu sal�rio: ";
	cin >> salario;

	if (salario > 900) //se for maior que 900 aumenta em 3%, se n�o aumenta em 7%
		cout << "Novo sal�rio: " << salario * 1.03; //pra poder aumentar em 3%, � necess�rio fazer a conta salario * 1.03 ou salario + salario * 0.03
	else
		cout << "Novo sal�rio: " << salario * 1.07; //a mesma coisa acontece com 7%
	//se colocar 900, ele aumenta em 7% pois cai na condi��o do else, e o exercicio pede para que os que recebem AT� 900 aumentar em 7%.

	system("pause>null");
}