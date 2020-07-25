#include<iostream>
using namespace std;

#define MAXIMO 2 //CONSTANTE

//defini��o da estrutura e membros
typedef struct
{
	int inicio, fim;
	int vetor[MAXIMO];
}Fila;

//aloca em mem�ria o ponteiro Fila*
Fila* cria()
{
	Fila* f = new Fila();//instancia ponteiro
	f->inicio = f->fim = 0;//atribui��o aninhada

	return f;//retorna o ponteiro
}

//Verifica se a fila est� vazia
//[0]: falso, quando a fila "n�o" esta vazia
//[1]: verdadeiro, quando a fila est� vazia
int vazia(Fila* f)
{
	return(f->inicio == f->fim);
}

//recebe a �ltima posi��o e retorna a pr�xima, ou seja,
// fim + 1
int incremento(int i)
{
	return((i + 1) % MAXIMO);
	//RETORNA A POSI��O FIM+1 respeitando o limite do vetor
	//Ex: vetor[5] retorna sempre de 0 a 4
}

//Verifica se a fila est� cheia
//0: falso
//1: verdade
int cheia(Fila* f)
{
	return(incremento(f->fim) == f->inicio);
	//Se o retorno = inicio a fila est� cheia!
}

//enqueue
//insere um elemento na fila
void inserir(Fila* f, int elemento)
{
	if (cheia(f))
	{
		cout << "FILA CHEIA!!" << endl;
		system("pause>null");
		exit(1);
	}
	f->vetor[f->fim] = elemento;//atribui elemento da pos. FIM do vetor
	f->fim = incremento(f->fim);//atribui posi��o fim+1
}

//remove elemento da fila
int remover(Fila* f)
{
	int elemento;
	if (vazia(f))
	{
		cout << "FILA VAZIA!!" << endl;
		system("pause>null");
		exit(1);
	}

	elemento = f->vetor[f->inicio];
	//remove e atribui o elemento do inicio da fila

	f->inicio = incremento(f->inicio);
	//incrementa posicao do inicio

	return elemento;//retorna elemento removido
}

//libera mem�ria alocada para o ponteiro
void libera(Fila* f)
{
	delete(f);
}