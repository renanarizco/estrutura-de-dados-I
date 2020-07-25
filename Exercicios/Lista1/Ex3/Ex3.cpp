/*
Escreva um programa de ajuda para vendedores. A partir de um valor total recebido do teclado, mostrar:
- o total a pagar com desconto de 15%;
- o valor de cada parcela, no parcelamento de 3 x sem juros;
- a comissão do vendedor, no caso da venda ser a vista (10% sobre o valor com desconto )
- a comissão do vendedor, no caso da venda ser parcelada (10% sobre o valor total)
Obs: Utilize funções.
*/

#include <iostream>
#include <locale>
using namespace std;

float fdesconto(float valor_recebido)
{
	float resposta, desconto = 0.15;
	resposta = valor_recebido - (valor_recebido * desconto);
	return resposta;
}

float fparcela(float valor_recebido)
{
	float resposta;
	resposta = valor_recebido / 3;
	return resposta;
}

float fcomissao_vista(float total_desconto)
{
	float resposta;
	resposta = total_desconto * 0.10;
	return resposta;

}

float fcomissao_parcela(float valor_recebido)
{
	float resposta;
	resposta = valor_recebido * 0.10;
	return resposta;
}


void main()
{
	setlocale(LC_ALL, "Portuguese");

	float valor_recebido, total_desconto, valor_parcela, comissao_vista, comissao_parcela;

	cout << "Digite o valor total" << endl;
	cin >> valor_recebido;
	
	total_desconto = fdesconto(valor_recebido);
	valor_parcela = fparcela(valor_recebido);
	comissao_vista = fcomissao_vista(total_desconto);
	comissao_parcela = fcomissao_parcela(valor_recebido);

	cout << "Total a pagar com desconto: " << total_desconto << endl;
	cout << "Valor da parcela: " << valor_parcela << endl;
	cout << "Comissão do vendedor a vista: " << comissao_vista << endl;
	cout << "Comissão do vendedor parcelado: " << comissao_parcela << endl;

	system("pause>null");
}