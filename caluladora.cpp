#include <iostream>
#include <locale.h>;
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char opera��es;
    float  num1, num2, resultado;

    cout << "Escolha a opera��o (+ para somar, - para subtrair, * para multiplicar, / para dividir): ";
    cin >> opera��es;

    
    cout << "Diz-me o primeiro n�mero: ";
    cin >> num1;
    cout << "Diz-me o segundo n�mero: ";
    cin >> num2;

 
    switch (opera��es) {
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
        cout << "As opera��es era \n + \n -\n * \n \ \n" ;
        break;
    }


}
