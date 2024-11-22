#include <iostream>
#include <locale.h>;
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char operações;
    float  num1, num2, resultado;

    cout << "Escolha a operação (+ para somar, - para subtrair, * para multiplicar, / para dividir): ";
    cin >> operações;

    
    cout << "Diz-me o primeiro número: ";
    cin >> num1;
    cout << "Diz-me o segundo número: ";
    cin >> num2;

 
    switch (operações) {
    case '+':
        resultado = num1 + num2;
        cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado ;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado ;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado ;
        break;
    case '/' :
            resultado = num1 / num2;
            cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado;
        break;
    default:
        cout << "As operações era \n + \n -\n * \n \ \n" ;
        break;
    }


}
