#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int nota;
	cout << "Digite sua nota (0 a 10): ";
	cin >> nota;

	switch (nota)
	{
	case 10:
	case 9: //para economizar memória e tempo, dá pra utilizar vários cases juntos em vez de repetir a mensagem em todos.
		cout << "Ótimo!";
		break; //necessário break em todos os cases, inclusive no default.
	case 8:
	case 7:
		cout << "Bom.";
		break;
	case 6:
	case 5:
	case 4:
		cout << "Regular.";
		break;
	case 3:
	case 2:
	case 1:
	case 0:
		cout << "Insatisfatório.";
		break;

	default:
		cout << "Permitido somente notas de 0 a 10.";
		break;
	}

	system("pause>null");
}