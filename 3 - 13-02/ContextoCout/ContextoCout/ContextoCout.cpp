#include <iostream>
#include <locale>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[20] = "Gertrude da Silva"; //da pra colocar o contexto inicial
	cout << nome << endl;

	cout << "Fulano" << endl;

	int x = 10;
	cout << "Resultado: " << x << endl;

	//Formatação com base numérica
	//cout << hex;
	//cout << oct;
	//cout << dec;

	int numero = 7;
	
	// cout << hex << "Valor em hex: " << numero << endl; //mostra a variavel numero em hexadecimal

	//Formatação com números reais
	float valor = 3.1214;
	cout << fixed << "Real: " << valor << endl; //faz a formatação em número real 3.121400

	//Formatação com números cientificos
	cout << scientific << "Científico: " << valor << endl; //deixa a variavel valor em número cientifico 3.121400e+00
	cout << dec; //ativa decimal novamente

	//Espaçamento de texto
	int var = 10;

	//   10
	//  100
	// 1000
	//    1
	//sempre são 5 caracteres pois definimos no count.width (5)

	cout.width(5);	//minimo de numeros exibidos na tela
	cout.fill('0'); //Escolhe com qual caractere vai preencher 
					//aspas simples pois é char
					//se não colocar fill, ele preenche com espaço em branco
	cout << var << endl;
	//00010
	//00100
	//01000
	//00001

	//Precisão de números reais
	float val = 23.5999;
	cout.precision(2); //limita as casas depois da vírgula para 2 casas
	cout << fixed << "Formatando casas decimais: " << val << endl; //fixed faz voltar ao padrão ficando 23.60






	system("pause>null");
}