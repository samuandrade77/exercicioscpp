#include <iostream>
using namespace std;
int main (){
    float a;
    cout << "Digite um numero para saber o valor da funcao: f(x)= x^2 - 3x + 5" << endl;
    cin >> a;
    float funcao = a*a - 3*a + 5;
    cout << "O valor da funcao f(" << a << ") e: " << funcao << endl;
    return 0;}