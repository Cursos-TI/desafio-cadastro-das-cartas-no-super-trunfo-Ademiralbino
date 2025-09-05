#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    int carta1;
    char estado1[3];
    char cod_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1; // Novo campo para o Super Poder

    // Variáveis para a segunda carta
    int carta2;
    char estado2[3];
    char cod_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2; // Novo campo para o Super Poder

    // --- LEITURA E IMPRESSÃO DA PRIMEIRA CARTA ---
    printf("Insira os dados da PRIMEIRA CARTA:\n");
    printf("Número da Carta: \n");
    scanf("%d", &carta1);
    printf("Estado: \n");
    scanf("%s", estado1);
    printf("Código da carta: \n");
    scanf("%s", cod_carta1);
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("População: \n");
    // O especificador de formato para unsigned long int é %lu
    scanf("%lu", &populacao1);
    printf("Área: \n");
    scanf(" %f", &area1); // Adicionado espaço para consumir newline anterior
    printf("PIB: \n");
    scanf(" %f", &pib1); // Adicionado espaço para consumir newline anterior
    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos1); // Adicionado espaço para consumir newline anterior

    // --- LEITURA E IMPRESSÃO DA SEGUNDA CARTA ---
    printf("\nInsira os dados da SEGUNDA CARTA:\n");
    printf("Número da Carta: \n");
    scanf("%d", &carta2);
    printf("Estado: \n");
    scanf("%s", estado2);
    printf("Código da carta: \n");
    scanf("%s", cod_carta2);
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("População: \n");
    scanf("%lu", &populacao2); // %lu para unsigned long int
    printf("Área: \n");
    scanf(" %f", &area2); // Adicionado espaço para consumir newline anterior
    printf("PIB: \n");
    scanf(" %f", &pib2); // Adicionado espaço para consumir newline anterior
    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos2); // Adicionado espaço para consumir newline anterior

    // --- CÁLCULOS ---

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade_populacional1 = (area1 == 0) ? 0 : (float)populacao1 / area1; // Prevenção de divisão por zero
    // O PIB precisa ser multiplicado por 1.000.000.000 para estar em reais.
    pib_per_capita1 = (populacao1 == 0) ? 0 : (pib1 * 1000000000.0) / (float)populacao1; // Casting de populacao1 para float e prevenção de divisão por zero

    densidade_populacional2 = (area2 == 0) ? 0 : (float)populacao2 / area2; // Prevenção de divisão por zero
    pib_per_capita2 = (populacao2 == 0) ? 0 : (pib2 * 1000000000.0) / (float)populacao2; // Casting de populacao2 para float e prevenção de divisão por zero

    // Cálculo do Super Poder
    // O inverso da densidade populacional é 1 / densidade_populacional.
    // Se densidade_populacional for 0, devemos evitar a divisão por zero.
    float inverso_densidade1 = (densidade_populacional1 == 0) ? 0 : (1.0f / densidade_populacional1);
    float inverso_densidade2 = (densidade_populacional2 == 0) ? 0 : (1.0f / densidade_populacional2);

    // Conversão explícita para float ao somar com tipos diferentes para garantir a precisão
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;

    // --- IMPRIMINDO AS INFORMAÇÕES FINAIS ---
    printf("\n--- INFORMAÇÕES DA PRIMEIRA CARTA ---\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1); // %lu para unsigned long int
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1); // Imprime o Super Poder

    printf("\n--- INFORMAÇÕES DA SEGUNDA CARTA ---\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2); // %lu para unsigned long int
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2); // Imprime o Super Poder

    // --- COMPARAÇÃO DAS CARTAS ---
    printf("\n--- RESULTADO DAS COMPARAÇÕES ---\n");

    // Comparação de Carta (Número) - Assumindo que o número da carta não é um atributo de poder, mas sim um identificador.
    // Se você quiser comparar o número da carta como um atributo, a lógica de 'vence' mudaria.
    // Para este exemplo, vou apenas mostrar os números.
    printf("Carta (identificador): Carta 1 = %d, Carta 2 = %d\n", carta1, carta2);

    // Comparação de População
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Área
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de PIB per Capita
    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Super Poder
    printf("Super Poder: ");
    if (super_poder1 > super_poder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}