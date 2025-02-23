#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	float FI[2], FF[2], F1 = 0, F2 = 0;




	for (i = 0; i < 2; i++)
	{
		cin >> FI[i];
	}
	for (i = 0; i < 2; i++)
	{
		cin >> FF[i];
	}
	F1 = F1 + FI[0] + FI[1] / 100;
	F2 = F2 + FI[0] +FI[1] / 100;
	if (F2 < 37)
	{
		cout << "Está estado Normal";
	}
	else
	{
		if (F1 == F	2
		{
			cout << " Esta febre manteve";
		}
		if (F1 > F2)
		{
			cout << "Esta febre diminuiu";
		
		if (F1 < F2)
		{
			cout << "Esta febre aumentou";
		}

	}
}
