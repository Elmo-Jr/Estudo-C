#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ptb");
    int num, cont, maior=0;
    cout << "informe 15 numeros e veja qual é o maior. \n";
    for (cont=1; cont<=15; cont++) {
        cout << "Informe o " << cont << "º Numero. \n";
        cin >> num;

        if (num>maior)
        {
            maior=num;
        }
    }
    cout << "O maior numero é " << maior <<".";
}