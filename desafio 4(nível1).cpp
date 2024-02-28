#include <iostream>
using namespace std;
float potencia(float b, int e){
    float pot = 1;
    int cont = 1;
    while(cont<=e){
        pot*=b;
        cont+=1;}
    return pot;}

int main(){
    float base;
    int expoente;
    while(1){
    cout << "Digite a base da sua potencia:" << endl;
    cin >> base;
    cout << "Digite um numero inteiro positivo que sera o expoente da sua potencia:" << endl;
    cin >> expoente;
    float conta = potencia(base, expoente);
    cout << "O resultado da potencia " << base << "^" << expoente << " e: " << conta << endl;
    cout << "Deseja calcular outra potencia? Digite 1 para sim e 0 para nao" << endl;
    int res;
    cin >> res;
    if(res==0)
        cout << "Fim do programa, obrigado por utilizar nosso site" << endl;
        break;}
    return 0;}