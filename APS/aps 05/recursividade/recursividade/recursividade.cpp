#include <iostream>
#include <locale>
#include <string>
using namespace std;

string abrir(int tamanho){
	if (tamanho == 1)
		return "1� aberta, fim da sequ�ncia";
	else{
		cout << tamanho << "� aberta" << endl;
		return abrir(tamanho - 1);
	}
}

string pintar(int tamanho){
	if (tamanho == 4)
		return "4� pintada, fim da sequ�ncia";
	else{
		cout << tamanho << "� pintada" << endl;
		return pintar(tamanho + 1);
	}
}

void main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Abrindo as bonecas" << endl;
	cout << abrir(4) << endl << endl;
	cout << "Pintando as bonecas" << endl;
	cout << pintar(1) << endl;
	system("pause>null");
}
