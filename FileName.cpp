#include <iostream>
#include <locale.h>
int multi(int c) {
	c = c * 2;
	return c;
}

int som(int d) {
	d = d - 2;
	return d;
}

int divi(int e) {

	e = e / 2;
	return e;
}

int sub(int f) {
	f = f - 2;
	return f;
}

void main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int n, op, resultado;
	cout << "Diz 1 n�mero";
	cin >> n ;
	do {


	cout << "Escolha a opera��o (1 para multiplica��o, 2 para soma, 3 para dividir , 4 para subtrair, 0 a sair): ";
	cin >> op;

	switch (op) {
	case 1 :
		resultado = multi(n);
		cout << "Multiplica��o do n�meros que pediste � de :" << resultado;
		break;
	case 2 :
		resultado = som(n);
		cout << "Soma dos n�meros que pediste � de : " << resultado;
		break;
	case 3:
		resultado = divi(n);
		cout << "Divis�o dos n�meros que pediste � de : " << resultado ;
		break;
	case 4:
		resultado = sub(n);
		cout << "A subtra��o dos n�meros que pediste � de : " << resultado ;
		break;
	default :
		cout << "Op��o errada n�";
		break;
	}
	} while (op!= 0);

} 