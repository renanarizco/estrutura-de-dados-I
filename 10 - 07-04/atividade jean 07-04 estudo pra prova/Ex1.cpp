#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int num = 0, i = 0;

	for (i = 200; i <= 800; i++)
	{
		if ((i % 9) == 5)
			cout << i << " ";
	}

	system("pause>null");
}