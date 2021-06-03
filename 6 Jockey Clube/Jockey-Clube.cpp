#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ptb");
    int idade;
    cout << "Saiba qual categoria você está \n";
    cout << "Informe sua idade";
    cin >> idade;

    if (idade<7)
    {
        cout << "você nãa tem idade suficiente para participar :(";
    }
    else if (idade>=7 && idade<=12)
    {
        cout << "Voce está na categoria INFANTIL ";
    }
    else if (idade>=13 && idade<=17)
    {
        cout << "Voce está na categoria JUVENIL ";
    }
    else if (idade>=18 && idade<=49)
    {
        cout << "Voce está na categoria ADULTO ";
    }
    else if (idade>=50)
    {
        cout << "Voce está na categoria SENIOR ";
    }
    else 
    {
        cout << "Idade INVALIDA";
    }
}