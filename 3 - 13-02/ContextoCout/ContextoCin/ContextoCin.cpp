#include <iostream>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	cout << "Informe um nome:" << endl;
	//cin >> nome;

	cin.getline(nome, 10); //quantos caracteres o cin vai pegar, no caso pega os 10 primeiros caracteres
	cout << "Resultado:" << nome;




	system("pause>null");
}