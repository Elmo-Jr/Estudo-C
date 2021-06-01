#include <iostream>
#include <locale>
using namespace std;
int main()
{

    setlocale(LC_ALL, "ptb");
    int num, quadrado, n;
    cout << "Informe um numero qualquer: ";
    cin >> num;
    quadrado = num * num;
    cout << num << " ao quadrado é: " << quadrado <<"\n";
        if (quadrado>25)
        {
            cout << quadrado << " é maior que 25. \n";
        }
        else
        {
            cout << quadrado << " é menor que 25. \n";
        }
        
    cout <<"Sair?";
    cin >> n;
}