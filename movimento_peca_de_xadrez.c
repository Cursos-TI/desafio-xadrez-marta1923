#include <stdio.h>

int main()
{
    // ===========================================================
    // Simulação de movimentação das peças de xadrez:
    // Torre (for), Bispo (while), Rainha (do-while)
    // ===========================================================

    // ---------------------------
    // Movimento da TORRE (for)
    // ---------------------------
    // A torre move-se em linha reta. Aqui ela andará 5 casas para a direita.

    int casas_torre = 5;
    printf("Movimento da TORRE:\n");

    for (int i = 1; i <= casas_torre; i++)
    {
        printf("Direita\n");
    }

    printf("\n"); // linha em branco para separar as saídas

    // ---------------------------
    // Movimento do BISPO (while)
    // ---------------------------
    // O bispo move-se na diagonal. Aqui ele andará 5 casas para cima e à direita.

    int casas_bispo = 5;
    int contador_bispo = 1;

    printf("Movimento do BISPO:\n");

    while (contador_bispo <= casas_bispo)
    {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    printf("\n"); // linha em branco para separar as saídas

    // ---------------------------
    // Movimento da RAINHA (do-while)
    // ---------------------------
    // A rainha pode se mover em todas as direções. Aqui ela andará 8 casas para a esquerda.

    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da RAINHA:\n");

    do
    {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    // Fim do programa
    return 0;
}
