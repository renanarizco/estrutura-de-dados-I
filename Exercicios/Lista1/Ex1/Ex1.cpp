/*
Faça um programa que leia valores para as variáveis X, Y, C e D mostre o resultado da seguinte expressão:
( C * X ) + (Y - D)
*/

#include <iostream>
using namespace std;

void main()
{
	int x, y, c, d, resposta;

	cout << "Digite o valor para X, Y, C, D em sequencia" << endl;
	cin >> x >> y >> c >> d;

	resposta = (c * x) + (y - d);

	cout << "(C * X) + (Y - D) = " << resposta;

	system("pause>null");
}