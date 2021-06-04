#include <iostream>
#include <locale>
using namespace std;
int main () {
    setlocale(LC_ALL,"ptb");
    int par=0, imp=0, limite, cont;

        cout << "Informe o numero limeite da contagem:";
        cin >> limite;

    for (cont=1; cont<=limite; cont++)
    {
        cout << cont << "\n";

        if (cont%2==0)
        {
            par++;
        }
        else
        {
            imp++;
        }
    }
      cout << "de 0 ate " << limite << " tem " << par << " numeros pares e " << imp << " numeros impares";
}