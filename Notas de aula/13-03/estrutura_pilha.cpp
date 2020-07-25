//Pilha simples
#include <iostream>
#include <locale>
using namespace std;

const int MAX = 5;
int base, topo;
int pilha[MAX];


//inserções e remoções da pilha são sempre pelo topo
void empilhar(int valor);//push
int desempilhar();
int vazia();
int cheia();

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolher, val, condicao_exit = 1;
	base = 0, topo = 0;

	//Criar menu para solicitar ações na PILHA
	do
	{
		cout << "Operações Pilha:" << endl;
		cout << "1 - Inserir" << endl;
		cout << "2 - Remover" << endl;
		cout << "3 - Remover todos" << endl;
		cout << "4 - Sair" << endl;
		cin >> escolher;

		switch (escolher)
		{
		case 1:
				cout << "Digite o valor a ser inserido:" << endl;
				cin >> val;
				empilhar(val);
				cout << "Valor inserido";
				system("pause>null");
			break;

		case 2:
			cout << "Valor desempilhado: " << desempilhar();
			system("pause>null");
			break;

		case 3:	
			while (!vazia())
				cout << "Valor desempilhado: " << desempilhar() << endl;
			system("pause>null");
			break;

		case 4:
			condicao_exit = 0;
			break;

		default: 
			cout << "Valor incorreto. somente 1 ao 4" << endl;
			break;
		}
		system("cls");
	} while (condicao_exit == 1);

	system("pause>null");
}

//Verificar se a pilha esta vazia
//Retorna 1 se a pilha estiver vazia
//Retorna 0 se a pilha não estiver vazia
int vazia()
{
	return (base == topo);
}

//Verificar se a pilha esta cheia
//Retorna 1 se a pilha estiver cheia
//Retorna 0 se a pilha não estiver cheia
int cheia()
{
	return (topo == MAX);
}

//insere no topo da pilha o valor do parametro
void empilhar(int valor)
{

	if (!cheia())
	{
		//Inserir um novo valor

		pilha[topo] = valor;
		topo++;
	}
	else
		cout << "PILHA CHEIA!" << endl;
}

//Remove um item do topo da pilha e retorna o valor removido
int desempilhar()
{
	int valor;

	if (!vazia())
	{
		//Remover um item da pilha
		
		valor = pilha[topo - 1];
		topo--;

		return valor;
	}
	else
		cout << "PILHA ESTÁ VAZIA!" << endl;
}