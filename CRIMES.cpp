#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
void main()
{
	int Q , IC, FC, IA, FA;

	string alibi[100];

	setlocale(LC_ALL, "Portuguese");

	cin >> Q;
	cout << "\n";

	for (int i = 0; i < Q; i++)
	{
		cin >> IC;
		cin >> FC;
		cin >> IA;
		cin >> FA;
	

		if ((IA <= IC) && (FA >= FC))
		{
			alibi[i] = "Com alibi";
		}

		else
		{
			alibi[i] = "Sem alibi";
		}
	}

	for (int i = 0; i < Q i++)
	{
		cout << alibi[i] << "\n";
	}
}