#include <stdio.h>

int main(){
    
    int i = 0;
    int j;

    printf("Desafio Xadrez!\n");
    printf("Movimento da Torre\n");

    for(int i = 0; i < 5; i++){
        printf("Direita\n");
    }
    printf("--------------------\n");
    printf("Movimento do Bispo\n");

    while (i < 5)
    {
        printf("Cima e Direita\n");
        i++;
    }
    
    
    return 0;
}