#include <iostream>
#include <locale.h>
using namespace std;
int DI(float D, float P)
{
	float R;
R  = D / P;
	return R;
}
void main()
{
	float D,P;
	cin >>D > P;
	cout << DI(D, P);
}