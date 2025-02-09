#include <iostream>
#include <string>
#include <locale.h>
int Menor(int Number[10])
{
	int resultado = Number[0], i;
	for (i = 0; i < 10; i++)
	{
		if (resultado > Number[i])
		{
			resultado = Number[i];
		}
	}
	return resultado;
}
int Maior(int Number[10])
{
	int resultado = Number[0], i;
	for (i = 0; i < 10; i++)
	{
		if (resultado < Number[i])
		{
			resultado = Number[i];
		}
	}
	return resultado;
}
int Soma(int Number[10])
{
	int resultado = 0, i;
	for (i = 0; i < 10; i++)
	{
		resultado = resultado +Number[i];
	}
	return resultado;
}
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int i, j, N[10], soma = 0, maior, menor, op = 0;
	do
	{
		cout << "Diz aí 10 números\n";
		for (i = 0; i < 10; i++)
		{
			cin >> N[i];
		}
		soma = Soma(N);
		maior = Maior(N);
		menor = Menor(N);
		cout << " Escolha 1 opção \n 1 - Calcular media 2- calcular menor 3- calcular maior\n 0- Sair \n";
		cin >> op ;
		switch (op) {
		case 1:
			cout << "A média é: " << soma / 10 << "\n";
			break;
		case 2:
			cout << "O menor é: " << menor << "\n";
			break;
		case 3:
			cout << "O maior é: " << maior << "\n";
			break;
		}
	} while (op!= 0);
}