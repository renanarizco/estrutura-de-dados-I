#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	/*
	- O Endere�o (&): Acessa o endere�o de uma vari�vel
	- O Ponteiro (*): Acessa o conte�do e declara ponteiro

	*/
	
	cout << "Operadores un�rios" << endl;
	//& e *

	int valor = 10;
	cout << "valor: " << valor << endl; //10

	cout << "&valor: " << &valor << endl; //OOEFF824
	//exibe o endere�o da variavel valor
	

	//Operador Ponteiro
	//
	//
	//O ponteiro obrigatoriamente deve ser inicializado
	cout << endl << "Operador Ponteiro" << endl;
	int * p_valor = 0;//defini��o do ponteiro
	
	p_valor = &valor;//armazena o endere�o da posi��o referenciada

	cout << " p_valor = " << p_valor << endl; //Endere�o da variavel valor = //OOEFF824
	cout << "*p_valor = " << *p_valor << endl; //Conteudo do endere�o valor = 10
	cout << "&p_valor = " << &p_valor << endl; //Endere�o do ponteiro p_valor = 010FFE60


	//Opera��es aritm�ticas
	//
	//
	cout << endl << "Opera��es aritm�ticas" << endl;
	valor++;
	cout << "   valor = " << valor << endl; //11
	cout << "*p_valor = " << *p_valor << endl; //11
	//Conteudo do ponteiro que tem o endere�o da variavel valor


	//Opera��es diretas no ponteiro
	//
	//
	cout << endl << "Opera��es diretas no ponteiro" << endl;

	(*p_valor)++;
	//Precisa colocar o ponteiro entre parenteses para poder mudar o conteudo do ponteiro (atribui + 1)

	cout << "   valor = " << valor << endl;//12
	//Altera o conte�do da variavel
	cout << "*p_valor = " << *p_valor << endl;//12

	
	//Incremento direto no ponteiro
	//Quando incrementa o endere�o da variavel p_valor, ele troca o 12 para o novo endere�o, ficando -858993460
	//
	//
	cout << endl << "Incremento direto no ponteiro" << endl;

	p_valor++;
	//Avan�ou uma posi��o da memoria
	cout << "   valor = " << valor << endl;//12
	//N�o altera o conte�do da variavel
	cout << "*p_valor = " << *p_valor << " no endere�o (p_valor)" << p_valor << endl;//-858993460


	//Decremento para observar posi��es
	//Volta o conteudo de p_valor para o antigo endere�o de valor, ficando 12 novamente
	//
	cout << endl << "Decremento direto no ponteiro" << endl;

	p_valor--;
	cout << "   valor = " << valor << endl;//12
	//N�o altera o conte�do da variavel
	cout << "*p_valor = " << *p_valor << " no endere�o (p_valor)" << p_valor << endl;//12


	//Alocando mem�ria
	//
	//
	cout << "Alocando mem�ria" << endl;
	cout << "Tamanho inteiro: " << sizeof(int) << endl;
	cout << "Tamanho float: " << sizeof(float) << endl;
	cout << "Tamanho char: " << sizeof(char) << endl;
	cout << "Tamanho double: " << sizeof(double) << endl;


	//stack: pilha de mem�ria do sistema
	//heap: �rea da mem�ria em que o programador � responsavel


	system("pause>null");
}