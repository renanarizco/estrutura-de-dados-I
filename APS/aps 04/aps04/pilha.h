#include <iostream>
#include <string>
using namespace std;

typedef struct
{
	int topo;
	string vetor[100];
}Pilha;


//Criar nova pilha
Pilha* cria()
{
	//p = malloc(sizeof(Pilha))
	Pilha* p = new Pilha();
	p->topo = 0;

	return p;
}

//Verificar se a pilha est� cheia
int cheia(Pilha* p)
{
	return (p->topo == 100);
}

//Verificar se a pilha est� vazia
int vazia(Pilha* p)
{
	return (p->topo == 0);
}


//Inserir novo valor na pilha
//Retorna mensagem se a pilha estiver cheia
void push(Pilha* p, string valor)
{
	if (cheia(p))
	{
		cout << "Pilha cheia!" << endl;
		exit(1);//sai da fun��o push
	}

	p->vetor[p->topo] = valor;
	p->topo++;
}
//criar fun��o para remover item da pilha
//retornar mensagem se a pilha estiver vazia.

string pop(Pilha* p)
{
	string elem;

	if (vazia(p))
	{
		cout << "Pilha vazia!" << endl;
		exit(1);
	}

	elem = p->vetor[p->topo - 1];
	p->topo--;
	return elem;
}

void liberar(Pilha* p)
{
	delete p;
}