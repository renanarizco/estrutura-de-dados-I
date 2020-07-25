#include <iostream>
#include <string>
using namespace std;

#define MAX 4

typedef struct
{
	int inicio, fim;
	string vetor[MAX];
}Fila;

Fila* criar()
{
	Fila* f = new Fila();
	f->inicio = 0;
	f->fim = 0;
	return f;
}

int incrementar(int i)
{
	return ((i + 1) % MAX);
}

int cheia(Fila* f)
{
	return (incrementar(f->fim) == f->inicio);
}

int vazia(Fila* f)
{
	return (f->inicio == f->fim);
}

void inserir(Fila* f, string valor)
{
	if (cheia(f))
	{
		cout << "Fila cheia!" << endl;
		exit(1);
	}

	f->vetor[f->fim] = valor;
	f->fim = incrementar(f->fim); 
}

string remove(Fila* f)
{
	string elem;

	if (vazia(f))
	{
		cout << "Fila vazia!" << endl;
		exit(1);
	}

	elem = f->vetor[f->inicio]; 
	f->inicio = incrementar(f->inicio); 

	return elem;
}


void liberar(Fila* f)
{
	delete f;
}