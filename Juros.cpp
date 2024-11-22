#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

void main()
{
    setlocale (LC_ALL, "Portuguese");
	float capital, juros;
	int mês;
	cout << "Diz-me o valor que quer investir para o capital\n";
	cin >> capital;
	cout << "Dá-me os juros ao mês\n";
	cin >> juros;
	cout << "Quantos meses?\n";
	cin >> mes;
	double capitalfinal = capital * pow((1 + juros/100), mes);
	cout << " No final terá  " << mes << " MESES " << capitalfinal;

}