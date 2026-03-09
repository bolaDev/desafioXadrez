#include <stdio.h>
// prototipo recursividade movimento peça Torre
void moverTorre(int casas)
{    
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas -1);
    }
}

// prototipo recursividade movimento peça Bispo
void moverBispo()
{
    for(int i = 0; i <1; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Cima e Direita\n");
        }
    }
}

// prototipo recursividade movimento peça Rainha
void moverRainha(int casas)
{
    if(casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
}


int main(){
    //variáveis de controle
    int i = 0;
    int j = 0;
    //variável parâmetro função recursiva
    int casas;

    printf("Desafio Xadrez!\n");
    printf("Movimento da Torre\n");

    //Chama recursividade movimento Torre
    moverTorre(casas = 5);
    printf("--------------------\n");
    printf("Movimento do Bispo\n");


    //chama função recursiva movimento Bispo 
    moverBispo();

    printf("--------------------\n");
    printf("Movimento da Rainha\n");

    moverRainha(casas = 8);

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