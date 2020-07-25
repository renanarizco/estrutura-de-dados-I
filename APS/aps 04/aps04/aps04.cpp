#include <iostream>
#include <string>
#include <locale>
#include "pilha.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	bool sair = false;
	int i = 0, escolha = 0;
	string palavra;
	Pilha* p1 = cria();

	cin >> palavra;
	push(p1, palavra);
	system("cls");

	while (sair != true)
	{
		//printa tudo o que foi inserido
		for (i = 0; i < p1->topo; i++)
		{
			cout << p1->vetor[i] << " ";
		}
		
		//menu
		cout << endl;
		cout << "Desfazer?" << endl;
		cout << "1 - Sim" << endl;
		cout << "2 - Não" << endl;
		cout << "3 - Sair" << endl;
		cin >> escolha;
		system("cls");

		//switch para o menu
		switch (escolha)
		{
		case 1:
			//se não for vazia, desempilhar
			if (!vazia(p1))
				pop(p1);
			else
			{
				cout << "Pilha Vazia, não é possivel desfazer." << endl;
				system("pause>null");
			}
			break;

		case 2:
			//ler o valor e inserir na pilha
			for (i = 0; i < p1->topo; i++)
				cout << p1->vetor[i] << " ";

			cin >> palavra;
			push(p1, palavra);
			break;
		case 3:
			//boolean vira true e sai do programa
			sair = true;
			break;
		default:
			//caso não digite 1, 2 ou 3 ele dá uma mensagem de erro e volta para o menu
			cout << "Somente 1, 2 ou 3" << endl;
			system("pause");
			system("cls");
			break;
		}

		system("cls");

	}
	
	liberar(p1);
	
	system("pause>null");
}