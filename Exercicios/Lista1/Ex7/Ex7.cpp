#include <iostream>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	float nota_aluno[4];
	float media_aluno = 0;

	for (int i = 0; i < 4; i++)
	{
		cout << "Digite a nota " << i << endl;
		cin >> nota_aluno[i];
		media_aluno += nota_aluno[i];
	}

	media_aluno = media_aluno / 4;

	cout << "A média do aluno é: " << media_aluno << endl;

	if (media_aluno >= 7)
	{
		cout << "O aluno está aprovado";
	}
	else if ((media_aluno >= 5) && (media_aluno < 7))
	{
		cout << "O aluno está de exame";
	}
	else if (media_aluno < 5)
	{
		cout << "O aluno foi reprovado";
	}
	system("pause>null");
}