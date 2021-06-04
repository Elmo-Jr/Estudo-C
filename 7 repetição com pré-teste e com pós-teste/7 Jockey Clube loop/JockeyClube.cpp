#include <iostream>
#include <locale>
using namespace std;
int main () {
    int idade; 
    
    while (idade!=-1)
    {
        cout << "Qual a idade do competidor? ";
        cin >> idade;
        
        if (idade>=7 && idade<=12)
        {
            cout << "O competidor está na categoria INFANTIL \n";
        }
        else if (idade>=13 && idade<=17)
        {
            cout << "O competidor está na categoria JUVENIL \n";
        }
        else if (idade>=18 && idade<=49)
        {
            cout << "O competidor está na categoria ADULTO \n";
        }
        else if (idade>=50)
        {
            cout << "O competidor está na categoria SENIOR \n";
        }
        else
        {
            cout << "O competidor está fora da faixa etaria permitida :( \n";
        }
    }
}