#include <iostream>
using namespace std;

void mostrar_tabuleiro();
void vez_jogador();


char tabuleiro[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char vez;

int main(){
    vez='X';
    for(int i=0;i<10;i++){
        mostrar_tabuleiro();
        vez_jogador();
    }
    return 0;
}


void mostrar_tabuleiro(){
    cout<<"\n";
    cout<<" "<<tabuleiro[0][0]<<" | "<<tabuleiro[0][1]<<" | "<<tabuleiro[0][2]<<endl;
    cout<<"------------"<<endl;
    cout<<" "<<tabuleiro[1][0]<<" | "<<tabuleiro[1][1]<<" | "<<tabuleiro[1][2]<<endl;
    cout<<"------------"<<endl;
    cout<<" "<<tabuleiro[2][0]<<" | "<<tabuleiro[2][1]<<" | "<<tabuleiro[2][2]<<endl;
    cout<<"\n"<<endl;
}

void vez_jogador(){
    int escolha, linha=0, coluna=0;
    
    if(vez=='X'){
        cout<<"Em qual número deseja colocar o 'X'? ";
    }
    if(vez=='O'){
        cout<<"Em qual número deseja colocar o 'Y'? ";
    }
    cin>>escolha;
    
    switch(escolha){
        case 1: linha=0; coluna=0; break;
        case 2: linha=0; coluna=1; break;
        case 3: linha=0; coluna=2; break;
        case 4: linha=1; coluna=0; break;
        case 5: linha=1; coluna=1; break;
        case 6: linha=1; coluna=2; break;
        case 7: linha=2; coluna=0; break;
        case 8: linha=2; coluna=1; break;
        case 9: linha=2; coluna=2; break;
        default: cout<<"Casa inválida! Tente novamente\n"<<endl;
        ///vez_jogador();
    }
    
    if(vez=='X' && tabuleiro[linha][coluna]!='X' && tabuleiro[linha][coluna]!='O'){
        tabuleiro[linha][coluna]='X';
        vez='O';
    }
    
    else if(vez=='O' && tabuleiro[linha][coluna]!='X' && tabuleiro[linha][coluna]!='O'){
        tabuleiro[linha][coluna]='O';
        vez='X';
    }
    
    else{
        cout<<"A posição encontra-se ocupada. Tente novamente."<<endl;
        vez_jogador();
    }
}
