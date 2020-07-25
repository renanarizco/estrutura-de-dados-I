/*
Fazer um programa para ler três notas, os pesos de cada nota e mostrar a média ponderada. Cálculo da Média Ponderada =
(nota 1 * peso da nota 1) + (nota 2 * peso da nota 2) + (nota 3 * peso da nota 3) / soma dos pesos
*/

#include <iostream>
using namespace std;

void main()
{
	float nota1, nota2, nota3, peso1, peso2, peso3, somapesos;
	float mediaponderada;

	cout << "Digite as notas 1, 2 e 3 em sequencia" << endl;
	cin >> nota1 >> nota2 >> nota3;

	cout << "Digite o peso das notas 1, 2 e 3 respectivamente" << endl;
	cin >> peso1 >> peso2 >> peso3;

	somapesos = peso1 + peso2 + peso3;

	mediaponderada = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / somapesos;

	cout << "Media ponderada: " << mediaponderada;

	system("pause>null");
}