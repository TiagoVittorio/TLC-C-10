#include <iostream>
#include <locale.h>
using namespace std;


void main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;


    cout << "Digite um n�mero: ";
    cin >> numero;


    for (int i = numero; i >= 0; i--) {
        cout << i << " ";
    }

}
