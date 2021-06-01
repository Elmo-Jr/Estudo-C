#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ptb");
    int anoAtual, anoNasc, idade, n;
    cout <<"Ano atual: ";
    cin >> anoAtual;
    cout <<"Ano de nascimento:";
    cin >> anoNasc;
    idade=anoAtual-anoNasc;
    cout <<"Você tem ou fará " << idade << " anos. \n";
        if (idade>=16)
        {
            cout <<"Você já pode votar! \n";
        }
        else
        {
            cout <<"Você ainda não pode votar! \n";
        }
        
    cout <<"Sair?";
    cin >> n;
} 