#include <iostream>
#include "pilha.h"
#include <locale>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int i;
	bool booleano = false;
	string palavra, p_inverso;
	Pilha* palindromo = cria();

	cout << "Digite uma palavra para ver se é palindromo:" << endl;
	cin >> palavra;
	cout << endl;

	//Adiciona as letras na pilha palindromo até o i == tamanho da palavra
	for (i = 0; i < palavra.length(); i++){
		push(palindromo, palavra[i]);
	}

	cout << "Inverso: ";
	//Remove as letras da pilha de trás para frente, armazenando cada valor na variavel p_inverso
	for (i = palavra.length() -1; i >= 0; i--){
		p_inverso = p_inverso + pop(palindromo); //o pop retorna o valor removido após a remoção
	}
	cout << endl << endl;

	//Condição para ver se é palindromo ou não
	if (p_inverso == palavra)
		booleano = true;

	if (booleano)
		cout << "Palindromo" << endl;
	else
		cout << "Não é palindromo" << endl;

	system("pause");
}
