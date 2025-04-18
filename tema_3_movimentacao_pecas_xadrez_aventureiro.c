#include <stdio.h>

int main() {

    int peca, i, j;

    printf("XADREZ\n");
    printf("(1) Torre\n(2) Bispo\n(3) Rainha\n(4) Cavalo\n");
    printf("Esolha qual peça deseja controlar: ");
    scanf("%d", &peca);
 
    switch (peca) {
        case 1:
            printf("TORRE se movendo...\n");
            for (i = 0; i < 5; i++) {
                printf("Direita\n");
            }  
            break;
    
        case 2:
            printf("BISPO se movendo...\n");
            for (i = 0; i < 5; i++) {
                printf("Cima, Direita\n");
            }     
            break;

        case 3:
            printf("RAINHA se movendo...\n");
            for (i = 0; i < 8; i++) {
                printf("Esquerda\n");
            }
            break;

        case 4:
            printf("CAVALO se movendo...\n");
            j = 2;
            for (i = 1; i > 0; i--) {
                while (j > 0) {
                    printf("Baixo\n");
                    j--;
                }
                printf("Esquerda\n");
            }
            break;

        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}