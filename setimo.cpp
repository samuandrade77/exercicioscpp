#include <iostream>
#include <cstddef>
using namespace std;
int main(){
    int var1;
    int* pont1;
    var1= 5;
    pont1=&var1;
    cout << "Valor da variavel pelo seu nome e: " << var1 << endl;
    cout << "Endereco da variavel pelo ponteiro e : " << pont1 << endl; 
    cout << "Valor da variavel, atraves do ponteiro e: " << *pont1 << endl;
    // int* pont2;
    // pont2 = NULL;
    // cout << *pont2;
    int* pont3 = new int;
    *pont3 = 77;
    cout << *pont3;
    delete pont3;
    return 0;}