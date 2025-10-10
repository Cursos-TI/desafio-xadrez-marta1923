#include <stdio.h>

// ===========================================================
// FUNÇÕES RECURSIVAS PARA TORRE, BISPO E RAINHA
// ===========================================================

// Torre: recursiva, move-se N casas para a direita
void moverTorre(int casas)
{
    if (casas == 0)
        return; // caso base
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: recursiva + loops aninhados (externo = vertical, interno = horizontal)
// Aqui cada iteração diagonal imprime "Cima, Direita"
void moverBispo(int casas)
{
    if (casas == 0)
        return; // caso base

    // loop externo (vertical) e loop interno (horizontal) - ambos percorrem 1 passo por diagonal
    for (int vert = 1; vert <= 1; vert++)
    {
        for (int hor = 1; hor <= 1; hor++)
        {
            printf("Cima, Direita\n");
        }
    }

    // chamada recursiva para a próxima casa diagonal
    moverBispo(casas - 1);
}

// Rainha: recursiva, move-se N casas para a esquerda
void moverRainha(int casas)
{
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ===========================================================
// PROGRAMA PRINCIPAL
// ===========================================================
int main()
{
    printf("=== Simulação de movimentação das peças de xadrez ===\n\n");

    // Torre
    int casas_torre = 5;
    printf("Movimento da TORRE:\n");
    moverTorre(casas_torre);
    printf("\n");

    // Bispo
    int casas_bispo = 5;
    printf("Movimento do BISPO:\n");
    moverBispo(casas_bispo);
    printf("\n");

    // Rainha
    int casas_rainha = 8;
    printf("Movimento da RAINHA:\n");
    moverRainha(casas_rainha);
    printf("\n");

    // Cavalo - loops complexos (aninhados) -> 2x Cima, 1x Direita (movimento em "L")
    int casas_cima = 2;
    int casas_direita = 1;

    printf("Movimento do CAVALO:\n");

    // Loop externo: controla o movimento vertical (Cima)
    for (int v = 1; v <= casas_cima; v++)
    {
        printf("Cima\n");

        // Se ainda não terminou o deslocamento vertical, vai para a próxima iteração imediatamente.
        // (uso demonstrativo de 'continue' para controlar o fluxo)
        if (v < casas_cima)
            continue;

        // Quando chegamos à última casa vertical, executamos o loop interno para o movimento horizontal.
        // Loop interno com múltiplas variáveis/condições é usado para demonstrar controle (e usar 'break').
        for (int h = 1, guard = 0; h <= casas_direita; h++, guard++)
        {
            // imprimimos a direção horizontal necessária
            printf("Direita\n");

            // usamos 'break' para interromper o loop interno após cumprir o movimento necessário
            break;
        }
    }

    printf("\n=== Fim da simulação ===\n");
    return 0;
}



