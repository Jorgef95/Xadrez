#include <stdio.h>
  //Jogo de Xadrez
    int main() {
        
        //Movendo a Torre 5 casas para a direita usando for;
        
        printf("Movendo a Torre 5 casas para a direita...\n");
        for (int torre = 0; torre < 5; torre++)
        {
            printf("Direita\n");
        }
        //Movendo o bispo 5 casas na diagonal para cima - direita usando while;
        printf("Movendo o bispo 5 casas na diagonal para cima - direita...\n");
                      
        int bispo = 0;
        while (bispo < 5)
        {
            printf("Cima Direita\n");
            bispo++;
        }
        //Movendo a Rainha 8 casas para esquerda usando do-while;
        printf("Movendo a Rainha 8 casas para esquerda...\n");
        int rainha = 0;
        do {
            printf("Esquerda\n");
            rainha++;
        } while (rainha < 8);

        return 0;
    }
