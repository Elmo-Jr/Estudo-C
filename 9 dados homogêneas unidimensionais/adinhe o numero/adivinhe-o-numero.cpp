#include <iostream>
#include <locale>
using namespace std;
int main (){
    setlocale(LC_ALL, "ptb");
    int num[10], tentativasTem=3, tentativasUsou=1, indi, palpite;
    bool acertou=false;

    for(indi=0; indi<=9; indi++) {
        cout << "Informe o " << indi+1 << "º Numero:";
        cin >> num[indi];
    }
    
    while (tentativasUsou<=3) {
        cout << "Voce tem " << tentativasTem << " tentativas, Qual é o seu palpite?";
        cin >> palpite;
        tentativasTem--;
        
        for (indi=0; indi<=9; indi++){
            if (palpite==num[indi])
            {
                cout << "Parabéns! Este número está na posição " << indi << " do vetor! Você usou " << tentativasUsou << " tentativas. \n";
                tentativasUsou=4;
                acertou=true;
            }
        }

        tentativasUsou++;
    }
     if (!acertou)
     {
        cout << "Que pena! Você não acertou.";
     }
}