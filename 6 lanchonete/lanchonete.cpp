#include <iostream>
#include <locale>
using namespace std;
int main () {
    setlocale(LC_ALL, "ptb");
    char *item;
    int qntde, codigo;
    float valor=0;
    bool invalido=false;

    cout << "*** Cardápio *** \n";
    cout << "100 – Hambúrguer – R$5,50 \n";
    cout << "101 – Cachorro-quente – R$4,50 \n";
    cout << "102 – Milkshake – R$7,00 \n";
    cout << "103 – Pizza brotinho – R$8,00 \n";
    cout << "104 - Cheeseburguer – R$8,50 \n";
    cout << "Informe o código do seu pedido:";
    cin >> codigo;
    cout << "Informe a quantidade:";
    cin >> qntde;

    switch (codigo)
    {
    case 100:
        item="Hambúrguer", valor=qntde*5.50;
        break;
    case 101:
        item="Cachorro-quente", valor=qntde*4.50;
        break;
    case 102:
        item="Milkshake", valor=qntde*7.00;
        break;
    case 103:
        item="Pizza brotinho", valor=qntde*8.00;
        break;
    case 104:
        item="Cheeseburguer", valor=qntde*8.50;
        break;
    default:
        cout << "Pedido Invalido";
        invalido=true;
    }
    if (!invalido)
    {
        cout << qntde << " x " << item << " = " << valor;
    }
}