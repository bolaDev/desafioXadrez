#include <stdio.h>

int main(){
    //variáveis de controle
    int i = 0;
    int j = 0;

    printf("Desafio Xadrez!\n");
    printf("Movimento da Torre\n");

    //lógica movimento Torre
    for(int i = 0; i < 5; i++){
        printf("Direita\n");
    }
    printf("--------------------\n");
    printf("Movimento do Bispo\n");


    //lógica movimento Bispo
    while (i < 5)
    {
        printf("Cima e Direita\n");
        i++;
    }

    printf("--------------------\n");
    printf("Movimento da Rainha\n");

    do
    {
        printf("Esquerda\n");
        j++;
    }while (j < 8);
   
    return 0;
}