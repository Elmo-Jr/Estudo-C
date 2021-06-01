#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    int anoAtual, anoNasc, idade, n;
    cout <<"Ano atual: ";
    cin >> anoAtual;
    cout <<"Ano de nascimento:";
    cin >> anoNasc;
    idade=anoAtual-anoNasc;
    cout <<"Você tem ou fará " << idade << " anos. \n";
    cout <<"Sair?";
    cin >> n;
}