/*
Fazer um programa que leia a capacidade de um elevador e o peso de 6 pessoas. Informar se o elevador está liberado para
subir ou se excedeu a carga máxima. Obs: Utilize vetores.
*/

#include <iostream>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int soma_pesos = 0, peso_maximo = 0;
	int peso_individual[6];

	for (int i = 0; i < 6; i++)
	{
		cout << "Digite o " << i + 1 << "º peso" << endl;
		cin >> peso_individual[i];
	}

	cout << "Digite o peso maximo do elevador: " << endl;
	cin >> peso_maximo;

	for (int i = 0; i < 6; i++)
	{
		soma_pesos = soma_pesos + peso_individual[i];
	}

	if (soma_pesos > peso_maximo)
		cout << "O peso maximo foi excedido, o elevador não irá andar";

	else
		cout << "O peso maximo não foi atingido, o elevador irá andar";

	system("pause>null");
}