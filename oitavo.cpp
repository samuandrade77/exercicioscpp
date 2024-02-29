#include <iostream>
using namespace std;
int main(){
    // Alocação Estática
    
    // int vet [5];
    // vet[1]=3;
    // vet[0]=11;
    int vet[5]={4,5,27,91};
    // cout << vet[4];
    cout <<"[";
    for(int s=0; s<5; s+=1){
        cout << vet[s] << " ";}
    cout << "]" <<endl;
    int L = sizeof(vet)/sizeof(int);
    cout << "Quantidade de elementos no vetor e de: " << L << endl;
    
    // Alocação Dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    for(int i=0; i<tamanho; i+=1){
        cout << "Digite o elemento " << i << " do vetor" << endl;
        cin >> vetor[i];}
    for(int i=0; i<tamanho; i+=1){
        cout << vetor[i] << " ";}
    cout << endl;
    delete [] vetor;
    return 0;}