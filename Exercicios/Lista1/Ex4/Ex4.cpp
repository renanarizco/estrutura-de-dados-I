/*
Escrever um programa para ler uma temperatura em Fahrenheit e apresentá-la convertida em graus Centígrados.
Fórmula: Centígrados = ((Fahrenheit – 32) x 5)/9.
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