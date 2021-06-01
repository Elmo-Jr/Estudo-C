#include <iostream>
using namespace std;
int main(){
	float tempF, tempC, n;
	cout << "Temperatura em Fahrenheit: ";
	cin >> tempF;
	tempC=(tempF-32)/1.8;
	cout << "Temperatura em graus Celsius: " << tempC <<"\n";
    cout <<"Sair?";
    cin >> n;
}
