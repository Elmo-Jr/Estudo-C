#include <iostream>
#include <locale>
using namespace std;
int main () {
    setlocale(LC_ALL, "ptb");

    float num[4][4];
    int col, lin;

    for (lin=0; lin<=3; lin++) {
        cout << " \n";
        cout << "Escreva o numero da linha " << lin+1 << ": \n";
        
        for (col=0; col<=3; col++) {
            cout << "Coluna " << col+1 << ": ";
            cin >> num[lin][col];
        }
    }
    cout << " \n";
    cout << "Qual linha queres exibir?";
    cin >> lin;
    cout << "e qual coluna?";
    cin >> col;

    cout << " \n";
    cout << "Linha: " << lin << " Coluna: " << col << " -> " << num[lin-1][col-1];
}

