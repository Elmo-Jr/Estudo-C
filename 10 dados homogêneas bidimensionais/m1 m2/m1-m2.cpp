#include <iostream>
using namespace std;
int main(){
    int aux,lin,col,M1[2][2],M2[2][2];

    for (lin=0;lin<=1;lin++){

        for (col=0;col<=1;col++){ 
            cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"] da Matriz 1: ";
            cin >>M1[lin][col];

            cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"] da Matriz 2: ";
            cin >>M2[lin][col];
            
            if (lin==col){
                aux=M1[lin][col];

                M1[lin][col]=M2[lin][col];
                M2[lin][col]=aux;
            }
        }
    }

    for (lin=0;lin<=1;lin++){
        cout <<"Elemento ["<<lin+1<<","<<lin+1<<"] da Matriz 1: "<<M1[lin][lin]<<"\n";
        cout <<"Elemento ["<<lin+1<<","<<lin+1<<"] da Matriz 2: "<<M2[lin][lin]<<"\n";
    }
}