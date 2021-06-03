#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    int hora, n;
    cout << "Quantas horas são?";
    cin >> hora;
    if (hora>6 && hora<18)
    {
        cout << "Agora é dia! \n";
    }
    else
    {
        cout << "Agora é noite! \n";
    }
    cout << "Sair?";
    cin >> n;
}