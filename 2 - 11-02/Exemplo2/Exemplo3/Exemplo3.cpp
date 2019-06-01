/*
Criar a estrutura basica para c++
Solicitar valor int para representar a m�dia de nota de um aluno
Exibir mensagem de acordo com os criterios:

7 - tente melhorar
8 - OK
9 - OK
10 - bom
Demais valores: precisa estudar mais
*/

#include <iostream>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese"); //habilita simbolos e acentos do portugu�s
	int nota;
	cout << "Digite sua nota: ";
	cin >> nota;

	switch (nota)
	{
	case 0: 
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6: // da pra fazer stack nos cases para economizar espa�o no c�digo
		cout << "Precisa estudar mais";
		break;

	case 7:
		cout << "Tente melhorar";
		break;

	case 8:
		cout << "OK";
		break;

	case 9:
		cout << "OK";
		break;

	case 10:
		cout << "Bom";
		break;

	default: 
		cout << "Nota inv�lida";
		break;

	}
	system("pause>null");
}