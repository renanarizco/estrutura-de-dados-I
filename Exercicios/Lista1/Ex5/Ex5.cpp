/*
Gertrudes quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para fazer uma viagem at�
a casa de sua irm�. Dados extras:
- Dist�ncia da casa de Gertrudes at� sua irm� : 280 km
- Seu carro consome 0,08 litros de gasolina por Km/rodado.
- Ela abastece sempre no mesmo posto, onde o pre�o da gasolina � R$ 4,05 o litro.
*/

#include <iostream>;
using namespace std;

void main()
{
	float valor, litros;

	valor = litros * 4.05;
	litros = 0.08 * 280;

	cout << "Gertrudes vai precisar de " << litros << " litros." << endl;
	cout << "Vai gastar R$ " << valor << endl;

	system("pause>null");
}