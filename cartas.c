#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 100

// Estrutura para armazenar dados da carta
typedef struct {
    char nome_pais[50];
    char continente[30];
    int pib;
} Carta;

int main() {
    Carta cartas[MAX_CARTAS];
    int total_cartas = 0;
    char continuar;

    do {
        printf("\n--- Cadastro de Carta ---\n");

        printf("Nome do país: ");
        scanf(" %[^\n]", cartas[total_cartas].nome_pais);

        printf("Continente: ");
        scanf(" %[^\n]", cartas[total_cartas].continente);

        printf("PIB (número): ");
        scanf("%d", &cartas[total_cartas].pib);

        total_cartas++;

        printf("Deseja cadastrar outra carta? (s/n): ");
        scanf(" %c", &continuar);

    } while ((continuar == 's' || continuar == 'S') && total_cartas < MAX_CARTAS);

    // Exibição dos dados
    printf("\n--- Cartas Cadastradas ---\n");
    for (int i = 0; i < total_cartas; i++) {
        printf("Carta %d:\n", i + 1);
        printf("País: %s\n", cartas[i].nome_pais);
        printf("Continente: %s\n", cartas[i].continente);
        printf("PIB: %d\n\n", cartas[i].pib);
    }

    return 0;
}
