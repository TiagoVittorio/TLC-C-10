#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void main()
{
	int numeros[4], escolha[4], postitvo = 0, quantidade = 0;
	srand(time(0));

	for (int i = 0; i < 4; i++)
	{
		numeros[i] = rand() % 2;
		i + 1;
	}
	do {
		postitvo= 0;
		cout << "Adivinha os 4 numeros ( 0/1 ): \n";
		for (int i = 0; i < 4; i++)
		{
			cin >> escolha[i];
			i + 1;
		}
		for (int i = 0; i < 4; i++)
		{
			if (escolha[i] == numeros[i])
			{
				postitvo++;
			}
		}
		quantidade++;
		cout << "Voce acertou " << postitvo<< "\n";
		if (postitvo == 4)
		{
			cout << "Parabens voce  ganhou 1 MILHAO DE DOLARESSSSSSSSS \n" << "Em " << quantidade << " tentativas";
		}
	} while (postitvo < 4);

}