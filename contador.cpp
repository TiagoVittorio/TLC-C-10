#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
    setlocale (LC_ALL, "Portuguese")
	int num, i;

	cout << "Diz-em um número: ";
	cin >> num;
	for (i = num; i > 0; i--)
	{
		cout << "\n" << i << " Segundos";
	}
}