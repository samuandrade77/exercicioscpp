#include <iostream>
using namespace std;
float potencia(float b, int e){
    float c = b;
    int multi = 2;
    while(multi<=e){
        c*=b;
        multi+=1;}
    return c;}

int main(){
    float base;
    int expoente;
    cout << "Digite a base da sua potencia:" << endl;
    cin >> base;
    cout << "Digite um numero inteiro positivo que sera o expoente da sua potencia:" << endl;
    cin >> expoente;
    float conta = potencia(base, expoente);
    cout << "O resultado da potencia " << base << "^" << expoente << " e: " << conta << endl;
    cout << "Deseja calcular outra potencia? Digite 1 para sim e 0 para nao" << endl;
    int res;
    cin >> res;
    if(res==0){
        cout << "Fim do programa, obrigado por utilizar nosso site" << endl;}
    else if (res==1){
        cout << "Reinicie o programa" << endl;}
    return 0;}