#include <iostream>
using namespace std;
int main(){
    cout << "Seja bem vindo(a) ao Auxilio do povo!" << endl;
    cout << "Por gentileza, digite sua idade:" << endl;
    int idade;
    float renda;
    cin >> idade;
    cout << "Agora digite sua renda mensal:" << endl;
    cin >> renda;
    if (idade < 21 && renda >=1200){
        cout << "Voce possui renda acima e idade abaixo do necessario para receber o programa de moradia popular " << endl;
    }
    else if(idade < 21){
        cout << "Voce nao tem idade o suficiente para receber o programa de moradia popular." << endl;}
    else if (renda >= 1200){
        cout << "Sua renda e maior do que a renda permitida para receber o programa de moradia popular." << endl;}
    else{
        cout << "Voce esta apto para receber o programa de moradia popular!" << endl;}
    return 0;}