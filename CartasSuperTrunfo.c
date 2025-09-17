#include <stdio.h>
#include <string.h>

// A função 'limpar_buffer' é uma boa prática para evitar problemas com o scanf.
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// A função 'imprimir_menu' ajuda a manter o código mais limpo.
void imprimir_menu(int atributos_disponiveis[]) {
    printf("--- ESCOLHA O ATRIBUTO ---\n");
    if (atributos_disponiveis[0]) printf("1. Populacao\n");
    if (atributos_disponiveis[1]) printf("2. Area\n");
    if (atributos_disponiveis[2]) printf("3. PIB\n");
    if (atributos_disponiveis[3]) printf("4. Pontos Turisticos\n");
    if (atributos_disponiveis[4]) printf("5. Densidade Populacional\n");
    if (atributos_disponiveis[5]) printf("6. PIB per Capita\n");
}

int main() {
    // Variáveis para a primeira carta
    int carta1;
    char estado1[3];
    char cod_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Variáveis para a segunda carta
    int carta2;
    char estado2[3];
    char cod_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // --- LEITURA DA PRIMEIRA CARTA ---
    printf("Insira os dados da PRIMEIRA CARTA:\n");
    printf("Numero da Carta: ");
    scanf("%d", &carta1);
    limpar_buffer();
    printf("Estado (UF): ");
    scanf("%s", estado1);
    limpar_buffer();
    printf("Codigo da carta: ");
    scanf("%s", cod_carta1);
    limpar_buffer();
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    limpar_buffer();
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    limpar_buffer();
    printf("Area (km2): ");
    scanf("%f", &area1);
    limpar_buffer();
    printf("PIB (milhoes de reais): ");
    scanf("%f", &pib1);
    limpar_buffer();
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    limpar_buffer();

    // --- LEITURA DA SEGUNDA CARTA ---
    printf("\nInsira os dados da SEGUNDA CARTA:\n");
    printf("Numero da Carta: ");
    scanf("%d", &carta2);
    limpar_buffer();
    printf("Estado (UF): ");
    scanf("%s", estado2);
    limpar_buffer();
    printf("Codigo da carta: ");
    scanf("%s", cod_carta2);
    limpar_buffer();
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    limpar_buffer();
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    limpar_buffer();
    printf("Area (km2): ");
    scanf("%f", &area2);
    limpar_buffer();
    printf("PIB (milhoes de reais): ");
    scanf("%f", &pib2);
    limpar_buffer();
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    limpar_buffer();

    // --- CÁLCULOS ---
    densidade_populacional1 = (area1 == 0) ? 0 : (float)populacao1 / area1;
    pib_per_capita1 = (populacao1 == 0) ? 0 : (pib1 * 1000000.0) / (float)populacao1;

    densidade_populacional2 = (area2 == 0) ? 0 : (float)populacao2 / area2;
    pib_per_capita2 = (populacao2 == 0) ? 0 : (pib2 * 1000000.0) / (float)populacao2;

    // --- MENU INTERATIVO E COMPARAÇÃO ---
    int opcao1, opcao2;
    int atributos_disponiveis[] = {1, 1, 1, 1, 1, 1}; // 1 = disponível, 0 = indisponível
    float soma_carta1 = 0;
    float soma_carta2 = 0;

    // Escolha do primeiro atributo
    do {
        printf("\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
        imprimir_menu(atributos_disponiveis);
        printf("Digite o numero do atributo desejado: ");
        scanf("%d", &opcao1);
        limpar_buffer();
        if (opcao1 < 1 || opcao1 > 6 || !atributos_disponiveis[opcao1-1]) {
            printf("Opcao invalida. Por favor, escolha um numero valido.\n");
        }
    } while (opcao1 < 1 || opcao1 > 6 || !atributos_disponiveis[opcao1-1]);

    atributos_disponiveis[opcao1-1] = 0; // Marca o atributo como indisponível

    // Escolha do segundo atributo
    do {
        printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");
        imprimir_menu(atributos_disponiveis);
        printf("Digite o numero do atributo desejado: ");
        scanf("%d", &opcao2);
        limpar_buffer();
        if (opcao2 < 1 || opcao2 > 6 || !atributos_disponiveis[opcao2-1]) {
            printf("Opcao invalida. Por favor, escolha um numero valido que ainda nao foi escolhido.\n");
        }
    } while (opcao2 < 1 || opcao2 > 6 || !atributos_disponiveis[opcao2-1]);

    // Lógica para comparar e somar o primeiro atributo
    switch (opcao1) {
        case 1:
            printf("\nAtributo 1: Populacao\n");
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            break;
        case 2:
            printf("\nAtributo 1: Area\n");
            soma_carta1 += area1;
            soma_carta2 += area2;
            break;
        case 3:
            printf("\nAtributo 1: PIB\n");
            soma_carta1 += pib1;
            soma_carta2 += pib2;
            break;
        case 4:
            printf("\nAtributo 1: Pontos Turisticos\n");
            soma_carta1 += pontos_turisticos1;
            soma_carta2 += pontos_turisticos2;
            break;
        case 5:
            printf("\nAtributo 1: Densidade Populacional\n");
            soma_carta1 += (float) (densidade_populacional1 < densidade_populacional2 ? 100000 : 0);
            soma_carta2 += (float) (densidade_populacional2 < densidade_populacional1 ? 100000 : 0);
            break;
        case 6:
            printf("\nAtributo 1: PIB per Capita\n");
            soma_carta1 += pib_per_capita1;
            soma_carta2 += pib_per_capita2;
            break;
    }

    // Lógica para comparar e somar o segundo atributo
    switch (opcao2) {
        case 1:
            printf("Atributo 2: Populacao\n");
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            break;
        case 2:
            printf("Atributo 2: Area\n");
            soma_carta1 += area1;
            soma_carta2 += area2;
            break;
        case 3:
            printf("Atributo 2: PIB\n");
            soma_carta1 += pib1;
            soma_carta2 += pib2;
            break;
        case 4:
            printf("Atributo 2: Pontos Turisticos\n");
            soma_carta1 += pontos_turisticos1;
            soma_carta2 += pontos_turisticos2;
            break;
        case 5:
            printf("Atributo 2: Densidade Populacional\n");
            soma_carta1 += (float) (densidade_populacional1 < densidade_populacional2 ? 100000 : 0);
            soma_carta2 += (float) (densidade_populacional2 < densidade_populacional1 ? 100000 : 0);
            break;
        case 6:
            printf("Atributo 2: PIB per Capita\n");
            soma_carta1 += pib_per_capita1;
            soma_carta2 += pib_per_capita2;
            break;
    }

    // Exibição dos resultados e determinação do vencedor
    printf("\n--- RESULTADO DA RODADA ---\n");
    printf("%s: Soma de pontos = %.2f\n", nome_cidade1, soma_carta1);
    printf("%s: Soma de pontos = %.2f\n", nome_cidade2, soma_carta2);
    
    if (soma_carta1 > soma_carta2) {
        printf("\nResultado: Carta 1 (%s) venceu a rodada!\n", nome_cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf("\nResultado: Carta 2 (%s) venceu a rodada!\n", nome_cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}