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
	cout << "Diz 1 número";
	cin >> n ;
	do {


	cout << "Escolha a operação (1 para multiplicação, 2 para soma, 3 para dividir , 4 para subtrair, 0 a sair): ";
	cin >> op;

	switch (op) {
	case 1 :
		resultado = multi(n);
		cout << "Multiplicação do números que pediste é de :" << resultado;
		break;
	case 2 :
		resultado = som(n);
		cout << "Soma dos números que pediste é de : " << resultado;
		break;
	case 3:
		resultado = divi(n);
		cout << "Divisão dos números que pediste é de : " << resultado ;
		break;
	case 4:
		resultado = sub(n);
		cout << "A subtração dos números que pediste é de : " << resultado ;
		break;
	default :
		cout << "Opção errada né";
		break;
	}
	} while (op!= 0);

} 