#include <iostream>
#include <string>
#include <locale>
#include "fila.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolha = 0, tamanho = 0;
	string placa;
	Fila* f = criar();

	do
	{
		cout << "1 - Registrar cliente" << endl;
		cout << "2 - Atender primeiro cliente" << endl;
		cout << "3 - Numero de clientes aguardando" << endl;
		cout << "4 - Listar todos os clientes" << endl;
		cout << "5 - Sair" << endl;
		cin >> escolha;
		system("cls");

		switch (escolha)
		{
		case 1:
			cout << "Digite a placa: ";
			cin >> placa;
			inserir(f, placa);
			tamanho++;
			system("cls");
			break;
		case 2:
			cout << "Cliente " << remove(f) << " atendido." << endl;
			tamanho--;
			system("pause>null");
			system("cls");
			break;
		case 3:
			cout << "O número de clientes aguardando é: " << tamanho;
			system("pause>null");
			system("cls");
			break;
		case 4:
			for (int i = 0; i < tamanho; i++)
			{
				cout << remove(f) << endl;
			}
			tamanho = 0;
			system("pause>null");
			system("cls");
			break;
		case 5:
			system("cls");
			liberar(f);
			exit(1);
		default:
			cout << "Somente 1 a 5" << endl;
			system("pause>null");
			system("cls");
			break;
		}
	} while (escolha != 5);
}