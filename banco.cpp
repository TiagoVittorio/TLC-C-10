#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int depo(int money)
{
	int depo1 = 0;

	cout << "Qual o valor que queres depositar >> ";
	cin >> depo1;

	if (depo1 < 0)
	{
		cout << "Se ao menos tivesses 1 de QI, saberias que só dá para depositar a partir de um 0.1€\n";
	}else
	{
		money = money  + depo1;
		cout << "O valor que introduzi-o no seu depósito foi completo com sucesso\n";}
	return money;
}

int deb(int money)
{
	int lenv1 = 0;

	cout << "Diga o valor que quer levantar \n";
	cin >> lenv1;

	if (lenv1 > money)
	{
		cout << "A quantidade que queres levantar tem que ser inferior ou igual ao que tens na tua conta\n";
	}
	else
	{
		money -= lenv1; 
		cout << "Débito concluído!\n";
	}
	return money; 
}


int enviarDin(int saldo)
{
	string nome;
	int retirar = 0;

	cout << "Para quem queres enviar o teu dinheiro \n ";
	cin >> nome;

	cout << "Qual o montante que queres enviar\n >> ";
	cin >> retirar ;

	if (retirar > saldo)
	{
		cout << " Achas que podes enviar  mais que o que tens!\n";
	}

	else if (retirar  < 0)
	{
		cout << " Não podes retirar valores menores que 0!\n";
	}

	else
	{
		saldo = saldo - retirar ;

		cout << "\nDébito concluido! \n";


	}return saldo;
}

void verificarsaldo(int saldo)
{
	cout << "Tens um saldo de " << saldo << "\n";
}

void start()
{
	setlocale(LC_ALL, "Portuguese");
	int op , saldo = 1000;

	do {

		cout << "1 - Depositar\n  2 - Retirar\n" "3 - Enviar Dinheiro\n"  "4 - Verificar Saldo\n";"0 - Sair\n";

		cout << "Escolhe a opção que quer! ";
		cin >> op ;

		switch (op)
		{
		case 0:
			cout << "Digitou 0 irá sair do programa.";
			break;
		case 1:
		
			saldo = depo(saldo);
			break;
		case 2:
			saldo = deb(saldo);
			break;
		case 3:
			saldo = enviarDin(saldo);
			break;
		case 4:
			verificarsaldo(saldo);
			break;
		}
	} while (escolha != 0);
}

void main()
{
	start();
}