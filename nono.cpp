#include <iostream>
using namespace std;
int main(){
    int matriz[3][3];
    matriz[0][0]= 1;
    matriz[0][1]= 2;
    matriz[0][2]= 3;
    matriz[1][0]= 4;
    matriz[1][1]= 5;
    matriz[1][2]= 6;
    matriz[2][0]= 7;
    matriz[2][1]= 8;
    matriz[2][2]= 9;
    for (int m=0; m<3; m+=1){
        for(int mat=0; mat<3; mat+=1){
            cout << matriz[m][mat] << " ";} 
            cout << endl;}
    return 0;}