#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros[4], escolha[4], postitvo = 0, quantidade = 0, i;
	srand(time(0));

	for (int i = 0; i < 4; i++)
	{
		numeros[i] = rand() % 2;
		i + 1;
	}
	do {
		postitvo = 0;
		cout << "Tenta adivinhar os 4 números!!! ( 0/1 ): \n";
		for (i = 0; i < 4; i++)
		{
			cin >> escolha[i];
				i + 1;
		}
		for (i = 0; i < 4; i++)
		{
			if (escolha[i] == numeros[i])
			{
				postitvo++;
			}
		}
		quantidade++;
		cout << " Acertaste!! " << postitvo << "\n";
		if (postitvo == 4)
		{
			cout << "Parabéns ganhaste 1 milhão de dolares, pensava que iria ser mais dificil!!! \n" << "Em " << quantidade << " tentativas";
		}
	} while (postitvo < 4);

}
