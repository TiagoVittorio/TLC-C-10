#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	float febreinicial[2], febrefinal[2], febre1 = 0, febre2 = 0;




	for (i = 0; i < 2; i++)
	{
		cin >> febreinicial[i];
	}
	for (i = 0; i < 2; i++)
	{
		cin >> febrefinal[i];
	}
	febre1 = febre1 + febreinicial[0] + febreinicial[1] / 100;
	febre2 = febre2 + febrefinal[0] + febrefinal[1] / 100;
	if (febre2 < 37)
	{
		cout << "Normal";
	}
	else
	{
		if (febre1 == febre2)
		{
			cout << "febre manteve";
		}
		if (febre1 > febre2)
		{
			cout << "febre diminuiu";
		}
		if (febre1 < febre2)
		{
			cout << "febre aumentou";
		}

	}
}
