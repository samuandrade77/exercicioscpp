#include <iostream>
using namespace std;
#define pi 3.14;

void cdb(){
    cout << "A copa do brasil chegou de vez\nO brasileiro ja ganhamos seis\n";
    cout<< "Lembrar voces\nSou tricampeao mundial\n";}

int subtrair(int x, int y){
    int sub;
    sub = x-y;
    return sub;}

int main(){
    cdb();
    int a;
    int b;
    cout << "Digite o primeiro numero:" << endl;
    cin >> a;
    cout << "Digite o segundo numero:" << endl;
    cin >> b;
    int s;
    s = subtrair (a,b);
    cout << "Subtração:" << s << endl;
    return 0;}