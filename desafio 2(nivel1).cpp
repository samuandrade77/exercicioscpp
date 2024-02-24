#include <iostream>
using namespace std;
int main (){
    string nome;
    cout << "Informe seu nome:" << endl;
    cin >> nome;
    float nota1;
    float nota2;
    float nota3;
    cout << nome << ", digite suas tres notas:" << endl;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    float media = (nota1 + nota2 + nota3)/3;
    float mediaturma;
    cout << nome << ", digite a media de sua turma:" << endl;
    cin >> mediaturma;
    if (mediaturma > media){
        cout << "Sua nota esta abaixo da media da turma" <<endl;}
    else if (mediaturma = media){
        cout << "Sua nota esta na media da turma" <<endl;}
    else {
        cout << "Sua nota esta acima da media da turma" << endl;}
    system ("pause");
    return 0;}