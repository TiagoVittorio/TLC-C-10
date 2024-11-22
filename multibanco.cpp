#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
    setlocale (LC_ALL, "Portuguese")
	int Escolher, Saldo = 15, Depositar, Levantar;

	cout << "1-Depositar\n";
	cout << "2-Leventar\n";
	cout << "3-Sair\n";
	cout << "Qual das opearações queres fazer? ";
	cin >> Escolher;
	while(true)
	{
		if (Escolher == 1)
		{
			cout << "Saldo total é de :> " << Saldo << "\n";
			cout << "Queres depositar quanto ? ";
			cin >> Depositar;
			Saldo = Saldo + Depositar;
			cout << "O saldo é de : > " << Saldo << "\n";
		}
		else if (Escolha == 2)
		{
			cout << "Seu saldo e de > " << Saldo << "\n";
			cout << "Quanto queres Levantar ? ";
			cin >> Levantar;
			if (Levantar <= Saldo)
			{
				Saldo = Saldo - Levantar;
				cout << "Ficaste com um saldo de  > " << Saldo << "\n";
			}
			else {
				cout << "Sen saldo\n";
			}
		}
		else if (Escolha == 3)
		{
			break;
		}
		else
		{
			cout << "Numero errado";
			break;
		}
	}
	
	
}