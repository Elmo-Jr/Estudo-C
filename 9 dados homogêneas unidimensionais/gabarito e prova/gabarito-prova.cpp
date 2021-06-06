#include <iostream>
#include <locale>
using namespace std;
int main () {
    setlocale(LC_ALL,"ptb");
    int indi, qtdeAlunos, qtdeAcertos=0, qtdeErros=0, alune;
    char gabarito[15], prova[15], alternativa;

    cout << "GABARITO \n";
    cout <<" \n";
    cout << "Informe a alternativa correta das questões \n";

    for (indi=0; indi<=14; indi++) {
        cout << "questão " << indi+1 << ": ";
        cin >> alternativa;
        gabarito[indi]=alternativa;
    }

    cout <<" \n";
    cout << "Informe a quantidade de alunes na turma: ";
    cin >> qtdeAlunos;

    cout <<" \n";
    cout << "PROVA \n";

    for (alune=1; alune<=qtdeAlunos; alune++) {
        cout <<" \n";
        cout << "Informe as alternativas marcadas pelo(a) Alune " << alune << ": \n";

        qtdeAcertos=0;
        qtdeErros=0;

        for (indi=0; indi<=14; indi++) {
            cout << "questão " << indi+1 << ": ";
            cin >> prova[indi];

            if (gabarito[indi]==prova[indi]) {
                qtdeAcertos++;
            }
            else {
                qtdeErros++;
            }
        } 
        cout <<" \n";
        cout << "Alune " << alune << " teve " << qtdeAcertos << " ACERTOS e " << qtdeErros << " ERROS. \n";
    }
}