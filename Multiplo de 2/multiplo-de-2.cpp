#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ptb");
    int num, resto, n;
    cout <<"Informe um número qualquer: ";
    cin >> num;
    resto=num%2;
        if (resto==0) {
            cout <<"Este número é múltiplo de 2! \n";
        }
        else
        {
            cout <<"Este número não é múltiplo de 2! \n";
        }
    cout <<"Sair?";
    cin >> n;
}   
