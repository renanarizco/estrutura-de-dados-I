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

	cout << "Digite uma palavra para ver se � palindromo:" << endl;
	cin >> palavra;
	cout << endl;

	//Adiciona as letras na pilha palindromo at� o i == tamanho da palavra
	for (i = 0; i < palavra.length(); i++){
		push(palindromo, palavra[i]);
	}

	cout << "Inverso: ";
	//Remove as letras da pilha de tr�s para frente, armazenando cada valor na variavel p_inverso
	for (i = palavra.length() -1; i >= 0; i--){
		p_inverso = p_inverso + pop(palindromo); //o pop retorna o valor removido ap�s a remo��o
	}
	cout << endl << endl;

	//Condi��o para ver se � palindromo ou n�o
	if (p_inverso == palavra)
		booleano = true;

	if (booleano)
		cout << "Palindromo" << endl;
	else
		cout << "N�o � palindromo" << endl;

	system("pause");
}
