/*
Gertrudes quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para fazer uma viagem até
a casa de sua irmã. Dados extras:
- Distância da casa de Gertrudes até sua irmã : 280 km
- Seu carro consome 0,08 litros de gasolina por Km/rodado.
- Ela abastece sempre no mesmo posto, onde o preço da gasolina é R$ 4,05 o litro.
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