#include <iostream>
#include "pilha.h"
#include <locale>
#include <string>

using namespace std;

void main() 
{
	setlocale(LC_ALL, "Portuguese");
	Pilha* binario = 0;
	binario = cria();
	string dividido;
	int numero = 0;

	cout << "Digite um numero em decimal:" << endl;
	cin >> numero;

	numero /= 2;

	cout << numero;

	system("pause>null");
};