#include <iostream>
#include <string>
#include <locale>
#include <math.h>
#include "pilha.h"

using namespace std;

//Retorna 1: simbolo é um digito
//Retorna 0: simbolo não é um digito
int validar_digito(char simbolo)
{
	return (simbolo >= '0' && simbolo <= '9'); //Precisa das aspas pq é char e ele converte para o correspondente em ascii
}

float calcular_operacao(char simbolo, float op1, float op2)
{
	if (simbolo == '+')
		return (op1 + op2);

	if (simbolo == '-')
		return (op1 - op2);

	if (simbolo == '*')
		return (op1 * op2);

	if (simbolo == '/')
		return (op1 / op2);

	if (simbolo == '$')
		return (pow(op1, op2));

	else
		cout << "Operação inválida";
}

float avaliar(string expressao, Pilha* p)
{
	char simbolo;
	float op1, op2, valor;

	for (int i = 0; i < expressao.length(); i++)
	{
		simbolo = expressao[i];

		if (validar_digito(simbolo))
		{
			cout << "Digito: " << simbolo << endl;

			push(p, simbolo - '0'); // - '0' faz conversão de ascii para char
		}
		else
		{
			cout << "Operador: " << simbolo << endl;

			op2 = (float)pop(p);
			op1 = (float)pop(p);

			valor = calcular_operacao(simbolo, op1, op2);

			cout << "Expressão: " << op1 << simbolo << op2 << " = " << valor << endl << endl;

			push(p, valor);

		}
	}
	return pop(p);
}

void main()
{
	setlocale(LC_ALL, "Portuguese");

	string expressao;
	Pilha* p = cria();

	cout << "Digite a expressão pós-fixa: " << endl;
	cin >> expressao;

	cout << "Resultado: " << avaliar(expressao, p) << endl;

	liberar(p);

	system("pause>null");
}