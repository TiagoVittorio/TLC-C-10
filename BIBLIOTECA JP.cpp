#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	int i, N[13], S = 0, R;
	for (i = 0; i < 13; i++)
	{
		cin >> N[i];
	}
	for (i = 0; i < 12; i++)
	{
		if (i % 2 == 0)
		{
			S = S + (N[i] * 1);
		}
		else
		{
			S= S + (N[i] * 3);
		}

	}
	R = S % 10;
	R = 10 - R;

	if (R== N[12])
	{
		cout << "OK";
	}
	else
	{
		cout << "ESTA A DAR ERRO, TEM QUR DAR 1 || 3  " << R;
	}

}