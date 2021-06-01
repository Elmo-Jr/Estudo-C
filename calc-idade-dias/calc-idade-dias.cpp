#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    float dias, anos, n;
    cout << "Quantos dias você já viveu? ";
    cin >> dias;
    anos = dias / 365;
    cout << "Você já viveu " << anos << " anos. \n";
    cout <<"Sair?";
    cin >> n;
}