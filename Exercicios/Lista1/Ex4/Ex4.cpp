/*
Escrever um programa para ler uma temperatura em Fahrenheit e apresent�-la convertida em graus Cent�grados.
F�rmula: Cent�grados = ((Fahrenheit � 32) x 5)/9.
*/
#include <iostream>
using namespace std;

void main()
{
	float temperatura_f, temperatura_c;
	
	cout << "Entre com a temperatura em Fahrenheit:" << endl;
	cin >> temperatura_f;

	temperatura_c = ((temperatura_f - 32) * 5) / 9;
	
	cout << "Em centigrados: " << temperatura_c;

	system("pause>null");
}