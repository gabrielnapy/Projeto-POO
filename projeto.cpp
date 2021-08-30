#include <iostream>
using namespace std;

void inicializar(int tabuleiro[3][3]);
void mostrar(int tabuleiro[3][3]);

int main(){
    int tabuleiro[3][3];
    inicializar(tabuleiro);
    mostrar(tabuleiro);
    return 0;
}

void inicializar(int tabuleiro[3][3]){
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            tabuleiro[i][j]=0;
        }
    }
}

void mostrar(int tabuleiro[3][3]){
    cout<<"\n"<<endl;
    for(int linha=0;linha<3;linha++){
        cout<<" "<<" |";
        cout<<" "<<" |";
        cout<<" "<<endl;
        if(linha == 2){
            break;
        }
        cout<<"---------"<<endl;
        
        
    }
    cout<<"\n"<<endl;
}
