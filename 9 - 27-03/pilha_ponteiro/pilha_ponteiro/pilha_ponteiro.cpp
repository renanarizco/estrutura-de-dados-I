#include <iostream>
#include "pilha.h"
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");



	//Disponibilizar os seguintes recursos:
	//1- Criar pilha
	//2- Adicionar elemento
	//3- Remover todos os elementos (exibindo-os)
	//4- Remover um elemento da Pilha
	//5- Remover Pilha
	//6- Encerrar

	int escolha;
	int valor;
	Pilha* p;

	cout << "1- Criar pilha" << endl;
	cout << "2- Adicionar elemento" << endl;
	cout << "3- Remover todos os elementos" << endl;
	cout << "4- Remover um elemento da Pilha" << endl;
	cout << "5- Remover Pilha" << endl;
	cout << "6- Encerrar" << endl;
	cin >> escolha;

	do
	{
		switch (escolha)
		{
		case 1:
			p = cria();
			cout << "Pilha Criada." << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "Digite o valor a ser inserido: " << endl;
			cin >> valor;
			Pilha* push(Pilha* p, int valor);
			cout << "Valor inserido" << endl;
			system("pause>null");
			system("cls");
			break;
		case 3:
			char pop(Pilha* p);
			break;
		case 4:
			char pop(Pilha* p);
			break;
		case 5:

			break;

		case 6:
			exit(1);

		default:
			cout << "Invalido, somente 1 a 6";
			break;
		}
		
		cout << "1- Criar pilha" << endl;
		cout << "2- Adicionar elemento" << endl;
		cout << "3- Remover todos os elementos" << endl;
		cout << "4- Remover um elemento da Pilha" << endl;
		cout << "5- Remover Pilha" << endl;
		cout << "6- Encerrar" << endl;
		cin >> escolha;
	} while (escolha != 6);

}