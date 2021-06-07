#include <iostream>
using namespace std;
int main(){
    int lin,col,M1[2][4],M2[2][4],M3[2][4];
    
    for (lin=0;lin<=1;lin++){
        for (col=0;col<=3;col++){ 
            cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"] da Matriz 1: ";
            cin >>M1[lin][col];
            cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"] da Matriz 2: ";
            cin >>M2[lin][col];

            M3[lin][col]=M1[lin][col]+M2[lin][col];
        }
    }
    cout << " \n";
    cout <<"*** Elementos da Matriz 3 ***\n";
    
    cout << " \n";
    for (lin=0;lin<=1;lin++){
        for (col=0;col<=3;col++){
            cout <<"Elemento ["<<lin+1<<","<<col+1<<"] -> "<<M3[lin][col]<<"\n";
        }
    }
}