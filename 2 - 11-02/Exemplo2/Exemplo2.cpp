#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	cout << "Contagem regressiva..." << endl; //endl � o /n mas quebra a linha e limpa a mem�ria

	//Exibir n�meros de 10 a 1
	//Ao t�rmino, mostrar mensagem "FIM"
	//Utilize o la�o FOR

	for (int i = 10; i > 0; i--)
	{
		cout << i << endl;
		Sleep(1000); //serve para aguardar um tempo em milisegundos
	}
	cout << "FIM";
	system("pause>null");
}