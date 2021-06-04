#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    int num, cont=0, qtdem3=0; 
    
    cout << "Escreva 10 numeros e saiba quantos deles é multiplo de 3. \n";
    for (cont=1;  cont<=10; cont++)
    {
        cout << "escreva o " << cont << "º numero: \n";
        cin >> num;
        if (num%3==0)
        {
            qtdem3+=1;
        }
    }
    cout << "foram escritos " << qtdem3 << " numeros multiplos de 3.";
}