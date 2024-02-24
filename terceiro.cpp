#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a=7, b=2;
    int soma = a+b;
    cout << "Soma:" << soma << endl;
    int subtracao = a-b;
    cout << "Subtracao:" << subtracao << endl;
    int multiplicacao = a*b;
    cout <<  "Multplicacao:" << multiplicacao << endl;
    int quocdiv = a/b;
    cout << "Divisao Quociente:" << quocdiv << endl; 
    int restodiv = a%b;
    cout << "Divisao Resto:" << restodiv << endl;
    float divisao = (float) a/ (float)b;
    cout << "Divisao:" << divisao << endl;
    float potencia = pow(a,b);
    cout << "Potencia:" << potencia << endl; 

    //Incremento e Decremento
    cout << "a antigo:" << a << endl;
    //a = a+1
    //a++
    a+= 1; //funciona pra qualquer número e qualquer operação
    cout << "a novo:" << a << endl;
    return 0;}