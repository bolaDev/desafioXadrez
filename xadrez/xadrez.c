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
    //variável para função movimento cavalo
    int movimento = 1;
    //variável para switch case
    int opcao;

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

    printf("Escolha para onde será o movimento da peça:\n");
    printf("1. Cima \n");
    printf("2. Direita\n");
    printf("3. Esquerda\n");
    printf("4. Baixo\n");
    scanf("%d",&opcao);

    switch (opcao )
    {
    case 1:
        for(i = 0, i < 6;i+= (i % 2 == 0)? 1: 2;)
        {
            if(i==0)
            {
                continue;
            }
            if(i == 1)
            {
                printf("Cima\n");
            }
            if(i == 3)
            {
                printf("Cima\n");
            }
            if(i == 5)
            {
                printf("Direita\n");
            }
            if(i > 5)
            {
                break;
            }
        }
        break;

        case 2:
        while (movimento < 2)
        {
            for(int i = 0, j = 3; i <= j; i++,j--)
            {
                printf("Direita\n"); // Imprimirá 'Direita' 2 vezes
            }

            printf("Baixo\n"); // Imprirá 'Baixo' 1 vez
            movimento++;
        }
        break;

        case 3:
            for(int i = 0, j = 10; i < 3 && j > 7; i++,j--)
            {
                printf("Esquerda \n");
                if((i!= 0)&&  i % 2 == 0)
                {
                    printf("Cima\n");
                }
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