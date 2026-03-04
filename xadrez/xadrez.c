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

    //Movimento do Cavalo

    int movimento = 1;
    int opcao;
    printf("Escolha para onde será o movimento da peça:\n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    printf("3. Cima\n");
    printf("4. Baixo\n");
    scanf("%d",&opcao);

    switch (opcao )
    {
    case 1:
        while (movimento < 2)
        {
            for(int i = 0; i < 2; i++)
            {
                printf("Esquerda\n"); // Imprimirá 'Esquerda' 2 vezes
            }

            printf("Cima\n"); // Imprirá 'Cima' 1 vez
            movimento++;
        }
        break;

        case 2:
        while (movimento < 2)
        {
            for(int i = 0; i < 2; i++)
            {
                printf("Direita\n"); // Imprimirá 'Direita' 2 vezes
            }

            printf("Baixo\n"); // Imprirá 'Baixo' 1 vez
            movimento++;
        }
        break;

        case 3:
        while (movimento < 2)
        {
            for(int i = 0; i < 2; i++)
            {
                printf("Cima\n"); // Imprimirá 'Cima' 2 vezes
            }

            printf("Esquerda\n"); // Imprirá 'Esquerda' 1 vez
            movimento++;
        }
        break;

        case 4:
        while (movimento < 2)
        {
            for(int i = 0; i < 2; i++)
            {
                printf("Baixo\n"); // Imprimirá 'Baixo' 2 vezes
            }

            printf("Direita\n"); // Imprirá 'Direita' 1 vez
            movimento++;
        }
        break;
    
    default:
        break;
    }

    return 0;
}