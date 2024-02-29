#include <iostream>
using namespace std;
int main(){
    float fml1;
    float fml2;
    float fml3;
    float fml4;
    float fml5;
    cout << "Digite os gastos de alimentacao da primeira familia:" << endl;
    cin >> fml1;
    cout << "Digite os gastos de alimentacao da segunda familia:" << endl;
    cin >> fml2;
    cout << "Digite os gastos de alimentacao da terceira familia:" << endl;
    cin >> fml3;
    cout << "Digite os gastos de alimentacao da quarta familia:" << endl;
    cin >> fml4;
    cout << "Digite os gastos de alimentacao da quinta familia:" << endl;
    cin >> fml5;
    float media = (fml1+fml2+fml3+fml4+fml5)/5;

    if(fml1<media){
        cout << "Os gastos da primeira familia foram abaixo da media." << endl;}
    else if(fml1==media){
        cout << "Os gastos da primeira familia foram na media." << endl;}
    else{
        cout << "Os gastos da primeira familia foram acima da media." << endl;}

    if (fml2<media){
        cout << "Os gastos da segunda familia foram abaixo da media." << endl;}
    else if(fml2==media){
        cout << "Os gastos da segunda familia foram na media." << endl;}
    else{
        cout << "Os gastos da segunda familia foram acima da media." << endl;}

    if (fml3<media){
        cout << "Os gastos da terceira familia foram abaixo da media." << endl;}
    else if(fml3==media){
        cout << "Os gastos da terceira familia foram na media." << endl;}
    else{
        cout << "Os gastos da terceira familia foram acima da media." << endl;}
    
    if (fml4<media){
        cout << "Os gastos da quarta familia abaixo da media." << endl;}
    else if(fml4==media){
        cout << "Os gastos da quarta familia foram na media." << endl;}
    else{
        cout << "Os gastos da quarta familia foram acima da media." << endl;}
    
    if (fml5<media){
        cout << "Os gastos da quinta familia foram abaixo da media." << endl;}
    else if (fml5==media){
        cout << "Os gastos da quinta familia foram na media." << endl;}
    else {
        cout << "Os gastos da quinta familia foram acima da media." << endl;}
    return 0;}