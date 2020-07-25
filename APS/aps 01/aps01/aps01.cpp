#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int valorA, valorB, valorC;
	
	cout << "Digite o valor para A, B e C:" << endl;
	cout << "A: ";
	cin >> valorA;
	cout << "B: ";
	cin >> valorB;
	cout << "C: ";
	cin >> valorC;
	cout << "----------------------------" << endl;

	//Primeira condição
	cout << valorA << " = " << valorB << " E " << valorB << " > " << valorC << " = ";
	if ((valorA == valorB) && (valorB > valorC))
		cout << "VERDADEIRO";
	else
		cout << "FALSO";

	cout << endl << endl;

	//Segunda condição
	cout << valorA << " <> " << valorB << " OU " << valorB << " < " << valorC << " = ";
	if ((valorA != valorB) || (valorB < valorC))
		cout << "VERDADEIRO";
	else
		cout << "FALSO";

	cout << endl << endl;

	//Terceira condição
	cout << valorA << " > " << valorB << " NÃO = ";
	if (valorA > valorB)
		cout << "FALSO";
	else
		cout << "VERDADEIRO";

	cout << endl << endl;

	//Quarta condição
	cout << valorA << " < " << valorB << " E " << valorB << " > " << valorC << " = ";
	if ((valorA < valorB) && (valorB > valorC))
		cout << "VERDADEIRO";
	else
		cout << "FALSO";

	cout << endl << endl;

	//Quinta condição
	cout << valorA << " >= " << valorB << " OU " << valorB << " = " << valorC << " = ";
	if ((valorA >= valorB) || (valorB == valorC))
		cout << "VERDADEIRO";
	else
		cout << "FALSO";

	cout << endl << endl;

	//Sexta condição
	cout << valorA << " <= " << valorB << " NÃO = ";
	if (valorA <= valorB)
		cout << "FALSO";
	else
		cout << "VERDADEIRO";

	cout << endl << "----------------------------";

	system ("pause > null");
}