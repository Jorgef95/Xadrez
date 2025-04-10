#include <stdio.h>

    int main() {
        //Jogo de Xadrez
        //Movendo a Torre 5 casas para a direita usando for;
        
        printf("\nMovendo a Torre 5 casas para a direita...\n");
        for (int torre = 0; torre < 5; torre++)
        {
            printf("Direita\n");
        }
        //Movendo o bispo 5 casas na diagonal para cima - direita usando while;
        printf("\nMovendo o bispo 5 casas na diagonal para cima - direita...\n");
                      
        int bispo = 0;
        while (bispo < 5)
        {
            printf("Cima Direita\n");
            bispo++;
        }
        //Movendo a Rainha 8 casas para esquerda usando do-while;
        printf("\nMovendo a Rainha 8 casas para esquerda...\n");
        int rainha = 0;
        do {
            printf("Esquerda\n");
            rainha++;
        } while (rainha < 8);
      
        //Movendo o cavalo 2 casas para baixo - esquerda usando for;
        printf("\nMovendo o cavalo 2 casas para baixo - esquerda...\n");
        int cavalo = 1;
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Baixo\n");
            }
        printf("Esquerda\n");
        }       

        return 0;
    }
