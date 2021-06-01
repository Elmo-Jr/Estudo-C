#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    int num, n;
    cout << "Digite um numero";
    cin >> num;
    if (num>0)
    {
        cout << num << " é positivo \n";
    }
    else
    {
        cout << num << " é negativo \n";
    }
    cout << "Sair?";
    cin >> n;
}