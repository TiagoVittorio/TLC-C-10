#include <iostream>
#include <locale.h>
#include <string>
using namespace std; 
void main() {
	setlocale(LC_ALL, "Portuguese");

	int array[10], i, esc, contar = 0, somar = 0;
	for (i = 0; i < 10; i++) {

		cout << "Diz o " << i + 1 << "ºnúmero\n";
		cin >> array[i];
	}
	cout << "Escolhe uma das operações!;\n 1 para contar número negativos\n e 2 para somar negativos\n";
	cin >> esc;
	
	switch (esc)
	{
	case 1:
		for (i = 0; i < 10; i++)
		{
			if (array[i] < 0)
			{
				contar = contar + 1;
			}
		}
		cout << "Inseriste \n" << contar << " números negativos\n";
		break;

	case 2:
		for (i = 0; i < 10; i++)
		{
			if (array[i] < 0)
			{
				somar = somar + array[i];
			}
		}
		cout << "O valor somado é de : \n" << somar << "|\n";
		break;
}


}