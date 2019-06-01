#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	cout << "Contagem regressiva..." << endl; //endl é o /n mas quebra a linha e limpa a memória

	//Exibir números de 10 a 1
	//Ao término, mostrar mensagem "FIM"
	//Utilize o laço FOR

	for (int i = 10; i > 0; i--)
	{
		cout << i << endl;
		Sleep(1000); //serve para aguardar um tempo em milisegundos
	}
	cout << "FIM";
	system("pause>null");
}