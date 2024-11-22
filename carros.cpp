#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void main()
{
    setlocale (LC_ALL, "Portuguese");
	int Carro;
	string carros[3] = { "Ferrari","Bugatti","BMW" };
	cout << "Tens 3 carros\n";
	cout << "Qual dos carros, queres ver\n: ";
	cin >> Carro;
	cout << carros[CR];
}