#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
string produtos[5] = { "Batatas", "Cenouras" , "Couves", "Alfaces "," Br�colos"},
meses[12] = { "Janeiro", "Fevereiro", "Mar�o","Abril","Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro","Dezembro" };
int quantidade[100][100];
int TotalP()
{
	int totalproduto[5] = { 0,0,0,0,0 }, i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 12; j++)
		{
			totalproduto[i] = totalproduto[i] + quantidade[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		cout << " O total de produtos que foi utilizado  " << totalproduto[i] << "do produto " << produtos[i];
	}
	return 0;
}
int InserV()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << "Qual foi a quantidade de \n " <<  produtos[i] << "\n usaste no mes \n" << meses[j];
			cin >> quantidade[i][j];
		}
	}
	return 0;
}
int verfify()
{
	for (int i = 0; i < 5; i++)
	{
		int resultado = 0;
		for (int j = 0; j < 12; j++)
		{
			resultado = quantidade[j][i] + resultado;
		}
		cout << "M�s de  " << meses[i] << "  Comeste  " << resultado << "\n";
	}
	return 0;
}
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int resposta;
	do
	{
		cout << " Queres fazer o qu�?\nCalcular totais mensais - 1\nCalcular totais por preoduto - 2\nInserir valores - 3\nsair - 0\nIntroduza: ";
		cin >> resposta;
		switch (resposta)
		{
		case 1:
		{
			verfify();
			break;
		}
		case 2:
		{
			TotalP();
			break;
		}
		case 3:
		{
			InserV();
			break;
		}
		}
	} while (resposta != 0);
}