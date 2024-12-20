#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");  

    char vogal[5] = { 'a', 'e', 'i', 'o', 'u' }, letra = 'p',  palavra[50];
    int i, corpo;


    cout << "Quantas letras tem a tua palavra? ";
    cin >> corpo;


    cout << "Diz-me uma palavra: ";
    for (i = 0; i < corpo; i++) {
        cin >> palavra[i];
    }


    for (i = 0; i < corpo; i++) {

        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            cout << palavra[i] << letra << palavra[i];;
        }
    }
    

}
