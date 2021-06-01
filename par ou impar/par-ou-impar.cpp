#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    int num, resto, n;
    cout << "insira qualquer numero";
    cin >> num;
    resto=num%2;
    if (resto==0)
    {
        cout << "Esse numero é par. \n";
    }
    else
    {
        cout << "Esse numero é impar \n";
    }
    cout << "Sair?";
    cin >> n;
}