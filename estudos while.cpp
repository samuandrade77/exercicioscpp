#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Digite um nmero de 25 pra cima:" << endl;
    cin >> n;
    int resultado = 25;
    int contador = 26;
    while (contador <= n){
        resultado += contador;
        contador += 1;}
    cout << "A soma dos numeros de 25 ate" << n << "=" << resultado << endl;
    return 0;}