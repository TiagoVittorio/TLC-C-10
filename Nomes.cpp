#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void main()
{
    setlocale (LC_ALL, "Portuguese");
	string nomes[6];
	int i;
	char s;

	do{
		for (i = 0; i < 5; i++)
		{
			cout << "Dá-me " << i + 1 << " nome ";
			cin >> nomes[i];
		}
		for (i = 4; i > 0; i--)
		{
			cout << "O nome é " << nomes[i] << " e o " << i << "\n";
		}
		cout << "Deseja continuar ? s/n";
		cin >> s ;
		if ( s != 's' && 'n')
		{
			cout << "Tens que colocar  s/n, outras teclas não são opções";
		}
		if ( s == 'n')
		{
			break;
		}
	
	} while ( s == 's');
}
