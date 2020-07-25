#include <iostream>
#include <locale>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Portuguese");

	//Matriz unidimensional

	int x[10] = {2, 12, 23, 5, 40, 35, 14, 450, 32, 65};
	char s[10] = {'B', 'o', 'a', ' ', 'N', 'o', 'i', 't', 'e', '!'};
	char t[5] = {'z'};

	//Posição do primeiro elemento da matriz x. Valor apresentado: "2"
	cout << x[0] << endl;

	//Posição do quinto elemento da matriz x. Valor apresentado: "40"
	cout << x[4] << endl;

	//Posição do setimo elemento da matriz x. Valor apresentado: "14"
	cout << x[6] << endl;

	//Posição do primeiro elemento da matriz t. Valor apresentado: "z"
	cout << t[0] << endl;

	//Matriz Multidimensional

	int z[5][5] = {
		{12,  17,    3, 741,   6},
		{22,  43,  444,	 57,   1},
		{ 2,  66,  654,  67,  11},
		{ 5,  34,   22,  41, 765},
		{ 9,   1,   90,  30, 666},
	};

	//Exibir o valor 17
	cout << z[0][1] << endl;

	//Exibir o valor 30
	cout << z[4][3] << endl;

	system("pause>null");
}