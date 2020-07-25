#include <iostream>
#include <string>
#include "pilha.h"

using namespace std;

void main()
{
	Pilha* binario = 0;
	binario = cria();
	int numero = 0, temp = 0; 


	cout << "Digite um numero em decimal:" << endl;
	cin >> numero;

	
	while ((numero / 2) >= 1)
	{
		temp = (numero % 2);
		numero /= 2;
		push(binario, temp);
	} 

	if (numero == 1)
	push(binario, numero);


	while (!vazia(binario))
	{
		pop(binario);
	}

	liberar(binario);

	system("pause>null");
}