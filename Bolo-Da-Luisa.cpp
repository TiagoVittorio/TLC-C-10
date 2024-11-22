#include <iostream>
using namespace std;

void main()
{
	int fatias, familia, resultado, sobra;
	
	cout << "Quantas fatias foram cortadas?\n";
	cin >> fatias;
	cout << "Quantas pessoas existem na familia?\n";
	cin >> familia;
	if (fatias < familia)
	{
		cout << "Existe mais pessoas do que as fatias que foram cortadas\n ";
	}
	else {
		resultado = fatias / familia;
		sobra = fatias % familia;
		cout << "cada membro da pessoa recebeu \n" << resultado;
		cout << "E os numeros de fatias que sobraram foi\n" << sobra;
	}

}