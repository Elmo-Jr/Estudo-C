#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "prb");
    float preCompra, preVenda;
    cout << "Preço de compra do produto: R$ ";
    cin >> preCompra;
    preVenda = preCompra + (preCompra * 20/100);
    cout << "Preço sugerido para venda R$ " << preVenda;
}