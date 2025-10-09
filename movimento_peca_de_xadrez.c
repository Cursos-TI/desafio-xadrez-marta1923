#include <stdio.h>

int main()
{
    // ===========================================================
    // Simulação de movimentação das peças de xadrez:
    // Torre (for), Bispo (while), Rainha (do-while), Cavalo (loops aninhados)
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

    printf("\n"); // linha em branco para separar as saídas

    // ---------------------------
    // Movimento do CAVALO (loops aninhados)
    // ---------------------------
    // O cavalo move-se em "L": duas casas em uma direção e uma casa perpendicularmente.
    // Aqui ele se moverá duas casas para BAIXO e uma casa para a ESQUERDA.
    //
    // Usaremos um loop for (para as duas casas para baixo)
    // e um loop while aninhado (para a casa à esquerda).

    int casas_baixo = 2;
    int casas_esquerda = 1;

    printf("Movimento do CAVALO:\n");

    // Loop principal (for): movimento para baixo
    for (int i = 1; i <= casas_baixo; i++)
    {
        printf("Baixo\n");

        // Loop interno (while): movimento para a esquerda após completar o movimento para baixo
        int j = 1;
        while (i == casas_baixo && j <= casas_esquerda)
        {
            printf("Esquerda\n");
            j++;
        }
    }

    // Fim do programa
    return 0;
}


