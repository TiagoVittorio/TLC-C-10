#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void main() {
    setlocale(LC_ALL, "Portuguese");


    string code1[100], code[74] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",  "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-","..-", "...-", ".--", "-..-", "-.--", "--.." };
    int  tamanho, i, j, escolha;
    char frase[50], alfabeto[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z' };

    cout << "Qual é o tamanho da frase: ";
    cin >> tamanho;

    cout << "Qual tradução queres fazer? \n";
    cout << "1 para a tradução de Portuguese para Morse\n"; cout << "2 para a tradução de Morse para Portuguese\n";
    cin >> escolha;

    switch (escolha)
    {
    case '1':

        for (i = 0; i < tamanho; i++)
        {
            cin >> frase[i];
            for (j = 0; j < 26; j++)
            {
                if (frase[i] == alfabeto[j])
                {
                    cout << code[j] << " ";
                }
            }
        }
        break;
    case '2':

        for (i = 0; i < tamanho; i++)
        {
            cin >> code1[i];
            for (j = 0; j < 26; j++)
            {
                if (code1[i] == code[j])
                {
                    cout << alfabeto[j];
                    break;
                }
            }
        }
    }
}








