#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    int num, quadrado, cubo, n;
    cout << "Informe um numero qualquer: ";
    cin >> num;
    quadrado = num * num;
    cubo = num * num * num;
    cout << num << " ao quadrado é: " << quadrado <<"\n";
    cout << num << " ao cubo é: " << cubo <<"\n";
    cout <<"Sair?";
    cin >> n;
}