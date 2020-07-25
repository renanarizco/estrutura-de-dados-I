#include <iostream>
#include <locale>
using namespace std;

//Exemplo função com parâmetros
/*
int multiplicacao(int numero1, int numero2) //recebe dois valores inteiros
{
	return numero1 * numero2;
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int valor1, valor2;
	//Solicitar dois valores inteiros para o usuario
	cout << "Digite o valor 1: ";
	cin >> valor1;
	cout << "Digite o valor 2: ";
	cin >> valor2;

	cout << "Resultado da multiplicação: " << multiplicacao(valor1, valor2) << endl;
	system("pause>null");
}
*/

//Exemplo função com multiplos retornos
/*
int comparar(int primeiro, int segundo)
{
	if (primeiro == segundo)
		return 0;
	else if (primeiro > segundo)
		return 1;
	else
		return 2;
}

int main()
{
	cout << "Resultado: " << comparar(1, 2) << endl;

	system("pause>null");
}
*/

//Exemplo função recursiva
//Criar função com o nome fatorial, retornar resultado com o tipo long
//Exemplo fatorial: 5! = 5.4.3.2.1 
//Fatorial de 1 ou 0 = 1

unsigned long fatorial(int n)
{
	setlocale(LC_ALL, "Portuguese");
	unsigned long resultado;
	if ((n == 0) || (n == 1))
		return 1;

	//fatorial
	resultado = n * fatorial(n - 1);

	return resultado;
}


void main()
{
	int numero;	
	unsigned long fat;		//unsigned não permite valores negativos 
							//long seria uma variavel maior
	 
	cout << "Informe um valor: " << endl;
	cin >> numero;

	fat = fatorial(numero); //fat armazena o retorno da função fatorial
	cout << "O fatorial de " << numero << " é: " << fat << endl;

	system("pause>null");
}