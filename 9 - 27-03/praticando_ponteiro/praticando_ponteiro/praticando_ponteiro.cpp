#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	/*
	- O Endereço (&): Acessa o endereço de uma variável
	- O Ponteiro (*): Acessa o conteúdo e declara ponteiro

	*/
	
	cout << "Operadores unários" << endl;
	//& e *

	int valor = 10;
	cout << "valor: " << valor << endl; //10

	cout << "&valor: " << &valor << endl; //OOEFF824
	//exibe o endereço da variavel valor
	

	//Operador Ponteiro
	//
	//
	//O ponteiro obrigatoriamente deve ser inicializado
	cout << endl << "Operador Ponteiro" << endl;
	int * p_valor = 0;//definição do ponteiro
	
	p_valor = &valor;//armazena o endereço da posição referenciada

	cout << " p_valor = " << p_valor << endl; //Endereço da variavel valor = //OOEFF824
	cout << "*p_valor = " << *p_valor << endl; //Conteudo do endereço valor = 10
	cout << "&p_valor = " << &p_valor << endl; //Endereço do ponteiro p_valor = 010FFE60


	//Operações aritméticas
	//
	//
	cout << endl << "Operações aritméticas" << endl;
	valor++;
	cout << "   valor = " << valor << endl; //11
	cout << "*p_valor = " << *p_valor << endl; //11
	//Conteudo do ponteiro que tem o endereço da variavel valor


	//Operações diretas no ponteiro
	//
	//
	cout << endl << "Operações diretas no ponteiro" << endl;

	(*p_valor)++;
	//Precisa colocar o ponteiro entre parenteses para poder mudar o conteudo do ponteiro (atribui + 1)

	cout << "   valor = " << valor << endl;//12
	//Altera o conteúdo da variavel
	cout << "*p_valor = " << *p_valor << endl;//12

	
	//Incremento direto no ponteiro
	//Quando incrementa o endereço da variavel p_valor, ele troca o 12 para o novo endereço, ficando -858993460
	//
	//
	cout << endl << "Incremento direto no ponteiro" << endl;

	p_valor++;
	//Avançou uma posição da memoria
	cout << "   valor = " << valor << endl;//12
	//Não altera o conteúdo da variavel
	cout << "*p_valor = " << *p_valor << " no endereço (p_valor)" << p_valor << endl;//-858993460


	//Decremento para observar posições
	//Volta o conteudo de p_valor para o antigo endereço de valor, ficando 12 novamente
	//
	cout << endl << "Decremento direto no ponteiro" << endl;

	p_valor--;
	cout << "   valor = " << valor << endl;//12
	//Não altera o conteúdo da variavel
	cout << "*p_valor = " << *p_valor << " no endereço (p_valor)" << p_valor << endl;//12


	//Alocando memória
	//
	//
	cout << "Alocando memória" << endl;
	cout << "Tamanho inteiro: " << sizeof(int) << endl;
	cout << "Tamanho float: " << sizeof(float) << endl;
	cout << "Tamanho char: " << sizeof(char) << endl;
	cout << "Tamanho double: " << sizeof(double) << endl;


	//stack: pilha de memória do sistema
	//heap: área da memória em que o programador é responsavel


	system("pause>null");
}