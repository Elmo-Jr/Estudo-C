#include <iostream>
#include <locale>

using namespace std;
int main(){
    int lado1, lado2, lado3;
    cout << "Saiba se o triangulo é quilátero, escaleno ou isósceles. \n";
    cout << "informe o primeiro lado do triangulo";
    cin >> lado1;
    cout << "informe o segundo lado do triangulo";
    cin >> lado2;  
    cout << "informe o terceiro lado do triangulo";
    cin >> lado3;

    if (lado1==lado2 && lado2==lado3)
    {
        cout << "O triangulo é Equilátero";
    }
    else if (lado1==lado2 || lado1==lado3 || lado2==lado3)
    {
        cout << "O triangulo é Escaleno";
    }
    else if (lado1!=lado2 && lado2!=lado3)
    {
        cout << "O triangulo é Isósceles";
    }
    else
    {
        cout << "INVALIDO";
    }
}