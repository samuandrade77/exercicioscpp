#include <iostream>
using namespace std;
int fatorial(int x){
    int result = 1;
    int cont = 2;
    while (cont <= x){
        result*=cont;
        cont+=1;}
    return result;}
int main(){
    int y;
    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> y;
    int resultado = fatorial(y);
    cout << "A fatorial de " << y << " e: " << resultado << endl;
    return 0;}