# include <iostream>
# include "2018194059.h"
# include <conio.h>

#define N 20

//Estrutura do Filme
typedef struct
{
	int cod;//código
	char nome[20];//descrição do filme
	int emprest;//utilizado para verificar o controle de empréstimos [0]: disponível para locação  [1]: emprestado
	int dia_dev;//Dia previsto para devolução
	Fila* dia[7]; //Fila com os dias da semana (dom~sab)
}Filme;


int cont = 0;//inicializa contador para código dos filmes
Filme* Filmes[N]; //vetor do Tipo FILMES* para armazenar cadastros

				  //Retorna nova instância do Filme
Filme* criafilme()
{
	Filme* fil = new Filme();
	return fil;
}

int cadastrar()
{
	int i;
	Filme* fil = criafilme();
	Filmes[cont] = fil;

	cout << "Codigo do filme:" << cont;
	fil->cod = cont;

	cout << "\nDigite o nome do filme: ";
	cin >> fil->nome;

	//Marcar o empréstimo do filme como "disponível" (0)
	//Criar uma fila para cada posição do vetor fil->dia[i]. Lembre-se que são 7 dias disponíveis(dom~sab)
	//Exibir mensagem de sucesso
	////Incrementar contador de código de filmes

	//INÍCIO CODIFICAÇÃO
	fil->emprest = 0;

	for (i = 0; i < 7; i++)
	{
		fil->dia[i] = cria();
	}

	cout << "Filme cadastrado com sucesso!" << endl;
	cont++;
	system("pause>null");
	system("cls");
	//FIM CODIFICAÇÃO

	return 0;
}

//Retorna o Filme com o código informado
Filme* pesquisar(int cod)
{
	/*

	- Percorrer todos os Filmes[i] e retornar o filme do código informado
	- Retornar NULL caso a posição do filme seja NULL(não exista o filme procurado)

	*/

	//INÍCIO CODIFICAÇÃO (codificação concluída)

	for (int i = 0; ((i<N) && (Filmes[i] != NULL)); i++)
	{
		if (Filmes[i]->cod == cod)
			return Filmes[i];
	}

	return NULL;

	//FIM CODIFICAÇÃO

}

void locar()
{

	int codigo;
	Filme* fil;

	cout << " Digite o codigo do filme: ";
	cin >> codigo;

	fil = pesquisar(codigo);
	//Busca filme de acordo com o código informado

	/*

	- Verificar se o filme(fil) retornado da busca é diferente de NULL. Se for diferente prosseguir com os procedimentos de locação, caso contrário deve-se informar que o filme não está cadastrado.
	- Verificar se o filme está disponível para locação. Caso esteja disponível, o filme deve ser locado (emprest = 1). Se o filme estiver locado deve-se informar ao usuário.
	- Solicite o dia para devolução (0 Domingo 1 Segunda 2 Terca 3 Quarta 4 Quinta 5 Sexta 6 Sabado)
	- Informar que o filme foi locado com sucesso!

	*/

	//INÍCIO CODIFICAÇÃO

	if (fil != NULL)
	{
		if (fil->emprest == 0)
		{
			fil->emprest = 1;
			cout << "Digite o dia de devolucao (0 Domingo 1 Segunda 2 Terca 3 Quarta 4 Quinta 5 Sexta 6 Sabado):" << endl;
			cin >> fil->dia_dev;
			
			inserir(fil->dia[fil->dia_dev], fil->dia_dev);

			cout << "Filme locado com sucesso" << endl;
		}
		else
		{
			cout << "Filme ja foi locado." << endl;
		}
	}
	else
	{
		cout << "Filme nao cadastrado." << endl;
	}


	system("pause>null");
	system("cls");

	//FIM CODIFICAÇÃO

	_getch();
}

void reservar()
{
	int dia_reserva, cli_cod, filme_cod;

	cout << "\nDigite o codigo do cliente: ";
	cin >> cli_cod;
	cout << "\nDigite o codigo do filme: ";
	cin >> filme_cod;

	Filme* fil;
	fil = pesquisar(filme_cod);


	/*

	- Verificar se o filme(fil) retornado da busca é diferente de NULL. Se for diferente prosseguir com os procedimentos de reserva, caso contrário deve-se informar que o filme não está cadastrado.

	- Solicite o dia para reserva (0 Domingo 1 Segunda 2 Terca 3 Quarta 4 Quinta 5 Sexta 6 Sabado).
	Verifique se o dia informado é válido (entre 0 e 6). Se o dia for válido, armazene o dia escolhido (Fila* f = fil->dia[dia_reserva];)

	- Verificar se o dia pretendido para reserva está disponível (Verificar se a fila criada está cheia). Se estiver cheia, informe que as reservas estão esgotadas.
	Se não estiver reservado, prossiga com a reserva inserindo o código do cliente.

	- Informe que o filme foi reservado com sucesso.



	*/


	//INÍCIO CODIFICAÇÃO
	if (fil != NULL)
	{
		cout << "Digite o dia da reserva (0 Domingo 1 Segunda 2 Terca 3 Quarta 4 Quinta 5 Sexta 6 Sabado):" << endl;
		cin >> dia_reserva;
		if (dia_reserva >= 0 && dia_reserva <= 6)
		{
			Fila* f = fil->dia[dia_reserva];

			if (cheia(f))
			{
				cout << "As reservas para este filme estao esgotadas." << endl;
			}
			else
			{
				inserir(f, cli_cod);
				cout << "Filme reservado com sucesso." << endl;
			}
		}
	}
	else
	{
		cout << "Filme nao cadastrado." << endl;
	}
	system("pause>null");
	system("cls");


	//FIM CODIFICAÇÃO

	_getch();

}

void devolver()
{
	int filme_codigo, cli_codigo, cli_codigo_auxiliar;
	char op;
	Filme* fil;

	cout << "Digite o codigo do cliente:" << endl;
	cin >> cli_codigo;

	cout << "Digite o codigo do filme:" << endl;
	cin >> filme_codigo;

	fil = pesquisar(filme_codigo);


	/*

	- Verificar se o filme(fil) retornado da busca é diferente de NULL. Se for diferente prosseguir com os procedimentos de devolução, caso contrário deve-se informar que o filme não está cadastrado.
	- Verifique se o filme está emprestado(emprest). Caso afirmativo, marque o filme como disponível(0).
	- Informe que a devolução foi realizada com sucesso.

	- Verifique se no dia da devolução do filme(fil->dia_dev) existe reserva. [Verificar se a fila "fil->dia[fil->dia_dev]" é diferente de vazia]
	Caso exista reserva para o filme, o usuário deve ser informado e questionado se deseja locar novamente. [S/N] ?
	Se ele optar em locar novamente, compare se o código do cliente que havia efetuado a reserva é o mesmo que pretende locar.
	Efetue uma nova locação caso afirmativo, senão, informe que o filme está reservado para outro cliente.

	*/

	//INÍCIO CODIFICAÇÃO

	if (fil != NULL)
	{
		if (fil->emprest == 1)
		{
			cli_codigo_auxiliar = remover(fil->dia[fil->dia_dev]);
			fil->emprest = 0;
			cout << "O filme foi devolvido com sucesso." << endl;
		}

		if (!vazia(fil->dia[fil->dia_dev]))
		{
			cout << "Existe reserva para o filme." << endl;
			cout << "Voce deseja locar novamente? [S/N]" << endl;
			op = _getch();
			
			switch (op)
			{
			case 's':
				if (cli_codigo_auxiliar == cli_codigo)
				{
					system("cls");
					locar();
				}
				else
				{
					cout << "O filme esta reservado para outro cliente." << endl;
				}
			break;
			}


			//if (op = 's')
			//{
			//	cli_codigo_auxiliar = remover(fil->dia[fil->dia_dev]);
			//
			//	if (cli_codigo_auxiliar == cli_codigo)
			//	{
			//		system("cls");
			//		locar();
			//	}
			//	else
			//	{
			//		cout << "O filme esta reservado para outro cliente." << endl;
			//	}
			//	//compare se o código do cliente que havia efetuado a reserva é o mesmo que pretende locar.
			//	//Efetue uma nova locação caso afirmativo, senão, informe que o filme está reservado para outro cliente.
			//}
				
		}
	}
	else
	{
		cout << "Filme nao cadastrado." << endl;
	}

	system("pause>null");
	system("cls");
	//FIM CODIFICAÇÃO

	_getch();
}





int main()
{
	int i, j;
	char op;

	do {
		cout << "1 - Cadastrar" << endl;
		cout << "2 - Locar" << endl;
		cout << "3 - Reservar" << endl;
		cout << "4 - Devolver" << endl;
		cout << "ESC - Sair" << endl;
		op = _getch();

		switch (op)
		{
		case '1':
			cadastrar();
			break;
		case '2':
			locar();
			break;
		case '3':
			reservar();
			break;
		case '4':
			devolver();
			break;
		case 27:
			for (i = 0; i < N; i++)
				if (Filmes[i] != NULL) {
					for (j = 0; j < 7; j++)
						if (Filmes[i]->dia[j] != NULL)
							delete(Filmes[i]->dia[j]);

					delete(Filmes[i]);
				}
			break;
		default: "Opcao invalida";
		}

		system("cls");

	} while (op != 27);
}





