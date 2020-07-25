/*
Faça um programa para ler a quantidade de aulas em um semestre, o percentual limite de frequência para aprovação e o
total de faltas de um aluno. O sistema deve identificar se o aluno foi aprovado ou reprovado por faltas, exibir a quantidade
e o percentual calculado.
*/
#include <iostream>
#include <locale>
using namespace	std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	float quantidade_aulas, total_faltas;
	float percentual_limite, percentual_faltas;

	cout << "Digite quantas aulas tem no semestre" << endl;
	cin >> quantidade_aulas;

	cout << "Digite o percentual limite de frequência para aprovação" << endl;
	cin >> percentual_limite;

	cout << "Digite o total de faltas do aluno" << endl;
	cin >> total_faltas;

	total_faltas = (quantidade_aulas - (quantidade_aulas*(percentual_limite / 100)));
	percentual_faltas = (quantidade_aulas - total_faltas);

	if (total_faltas >= percentual_faltas)
		cout << "Aluno aprovado." << endl;
	else
		cout << "Aluno reprovado." << endl;

	system("pause>null");
}