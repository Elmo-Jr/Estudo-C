#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ptb");
    int num_int[3][4], col, lin, multiplo=0;

    for (lin=0; lin<=2; lin++) {
        cout << " \n";
        cout << "Escreva o numero da linha " << lin+1 << ": \n";
        
        for (col=0; col<=3; col++) {
            cout << "Coluna " << col+1 << ": ";
            cin >> num_int[lin][col];
            
            if (num_int[lin][col]%5==0)
            {
                multiplo++;
            }
        }
    }
    cout << "Foram escritos " << multiplo << " numeros multiplos de 5.";
}
