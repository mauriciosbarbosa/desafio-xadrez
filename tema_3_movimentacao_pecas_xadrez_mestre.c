#include <stdio.h>

void moverTorre(int n) {
    if (n > 0) {
        printf("Direita\n");
        moverTorre(n - 1);
    }
}

void moverBispo(int n) {
    if (n > 0) {
        for (int i = 1; i > 0; i--) {
            printf("Cima ");
            for (int j = 1; j > 0; j--) {
                printf("Direita\n");
            }
        }
        moverBispo(n - 1);
    }
}

void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        moverRainha(n - 1);
    }
}

void moverCavalo() {

//    // Uma posibilidade:
//    for (int i = 1; i > 0; i--) {
//        for (int j = 2; j > 0; j--) {
//            printf("Cima\n");
//        }
//        printf("Direita\n");
//    }

   int i = 2;
    while (i > 0) {
        printf("Cima\n");
        i--;
        if (i >= 1) {
            continue;
        }
        printf("Direita");
   }
}

int main() {

    int peca;

    printf("XADREZ\n");
    printf("(1) Torre\n(2) Bispo\n(3) Rainha\n(4) Cavalo\n");
    printf("Esolha qual peça deseja controlar: ");
    scanf("%d", &peca);
 
    switch (peca) {
        case 1:
            printf("TORRE se movendo...\n");
            moverTorre(5);
            break;
    
        case 2:
            printf("BISPO se movendo...\n");
            moverBispo(5);   
            break;

        case 3:
            printf("RAINHA se movendo...\n");
            moverRainha(8);
            break;

        case 4:
            printf("CAVALO se movendo...\n");
            moverCavalo();
            break;

        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}