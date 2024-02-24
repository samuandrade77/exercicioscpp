#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Digite um numero inteiro nao negativo:" << endl;
    cin >> n;
    int soma=0;
    int cont=1;
    //while (cont<=n){
        //soma+=cont;
        //cont+=1;}
    //cout << "A soma dos numeros de 0 ate " << n << "=" << soma << endl;
    //do {
        //soma+=cont;
        //cont+=1;}
        //while (cont<=n);
    for (int s=1 ; s<=n ; s+=1){
        soma += s;}   
    cout << "A soma dos numeros de 0 ate " << n << "=" << soma << endl;
    return 0;}