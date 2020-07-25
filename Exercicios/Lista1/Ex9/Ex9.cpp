/*
Fazer um programa para ler 3 números e mostrá-los em ordem decrescente.
*/
#include <iostream>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero_1 = 0, numero_2 = 0, numero_3 = 0;

	cout << "Digite o 1º, 2º e 3º número" << endl;
	cin >> numero_1 >> numero_2 >> numero_3;

	if (numero_1 > numero_2)
		if (numero_2 > numero_3)
			cout << numero_1 << numero_2 << numero_3;
		else
			if (numero_1 > numero_3)
				cout << numero_1 << numero_3 << numero_2;
			else
				cout << numero_3 << numero_1 << numero_2;
	else
		if (numero_2 > numero_3)
			if (numero_1 > numero_3)
				cout << numero_2 << numero_1 << numero_3;
			else
				cout << numero_2 << numero_3 << numero_1;
		else
			cout << numero_3 << numero_2 << numero_1;

	system("pause>null");
}
