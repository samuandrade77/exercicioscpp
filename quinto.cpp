#include <iostream>
using namespace std;
int main(){
    float nota1, nota2;
    cout << "Informe sua primeira nota:" << endl;
    cin >> nota1;
    cout << "Informe sua segunda nota:" << endl;
    cin >> nota2;
    float media = (nota1 + nota2)/2;
    //cout << "Media:" << media << endl;
    //if (media >= 6){
      //  cout << "Aluno aprovado" << endl;}
    //else{
      //  cout << "Bombou, amigao KAKAKAKAKA";}
      if (media < 2.5){
        cout << "Nota D" << endl;}
    else if (media < 5) {
        cout << "Nota C" << endl;}
    else if (media < 7.5) {
        cout << "Nota B" << endl;}
    else{
        cout << "Nota A" << endl;}
    //float freq;
    //cout << "Informe a frequencia do aluno:" << endl;
    //cin >> freq;
    //if (media >= 5 && freq >= 75){
      //cout << "Aluno aprovado" << endl;}
    //else {cout << "Bombou, amigao KAKAKAKAKAKA" << endl;}
    //if (media < 5 || freq < 75){
      //cout << "Bombou, amigao KAKAKAKAKAKA" << endl;}
    //else {
      //cout << "Aluno aprovado" << endl;}
      (media >= 5)? cout << "Aluno aprovado" << endl : cout << "Bombou, amigao KAKAKAKAKA" << endl;
    return 0;} 