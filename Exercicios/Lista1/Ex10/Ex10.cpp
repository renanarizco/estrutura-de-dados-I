#include <iostream>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int tipo_passagem = 0, quantidade = 0;
	float valor_ida = 180.80, valor_volta = 190.60, valor_ida_volta = 395.00, valor_passagem = 0, valor_pago = 0, valor_troco = 0;

	cout << "Digite o tipo da passagem" << endl;
	cout << "1 Ida - R$180.80" << endl;
	cout << "2 Volta - R$190.60" << endl;
	cout << "3 Ida e Volta - R$395.00" << endl;
	cin >> tipo_passagem;


	switch (tipo_passagem)
	{
	case 1:
		valor_passagem = valor_ida;
		break;
	case 2:
		valor_passagem = valor_volta;
		break;
	case 3:
		valor_passagem = valor_ida_volta;
		break;
	}

	cout << "Digite o valor pago" << endl;
	cin >> valor_pago;

	quantidade = valor_pago / valor_passagem;

	if (valor_pago > valor_passagem)
	{
		valor_troco = valor_pago - (valor_passagem * quantidade);
		cout << "Quantidade: " << quantidade << endl;
		cout << "Valor Total: R$ " << valor_passagem << endl;
		cout << "Troco: R$ " << valor_troco << endl;
	}
	else if (valor_pago < valor_passagem)
	{
		cout << "Valor pago é menor que o valor da passagem";
	}
	else if (valor_pago = valor_passagem)
	{
		cout << "Quatidade adquirida: " << quantidade << endl;
		cout << "Valor Total: R$ " << valor_passagem << endl;
	}
	system("pause>null");


}