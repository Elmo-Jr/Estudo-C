#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    int dias, anos, n;
    cout << "Quantos dias você já viveu? ";
    cin >> dias;
    anos = dias / 365;
    cout << "Você já viveu " << anos << " anos. \n";
        if (anos>=18)
        {
            cout << "Você já é maior de idade :( \n";
        }
        else
        {
            cout << "Você ainda não é maior de idade :) \n";
        }
        
    cout <<"Sair?";
    cin >> n;
}