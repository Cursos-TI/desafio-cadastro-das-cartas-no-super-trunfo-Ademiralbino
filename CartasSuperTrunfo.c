#include <stdio.h>
// Inclui a biblioteca padrão de entrada e saída, necessária para usar funções como printf e scanf.

int main()
// A função principal onde a execução do programa começa.
{
    // Variáveis para a primeira carta
    int carta1;
    // Armazena o número da primeira carta (número inteiro).
    char estado1[3];
    // Armazena a sigla do estado (string de 2 caracteres + 1 para o terminador '\0').
    char cod_carta1[4];
    // Armazena o código da carta (string).
    char nome_cidade1[50];
    // Armazena o nome da cidade (string).
    int populacao1;
    // Armazena a população (número inteiro).
    float area1;
    // Armazena a área (número com casas decimais).
    float pib1;
    // Armazena o PIB (número com casas decimais).
    int pontos_turisticos1;
    // Armazena o número de pontos turísticos (número inteiro)

    // Variáveis para a segunda carta
    // os comentários das variáveis da primeira carta são os mesmo para as variáveis da segunda carta.
    int carta2;
    char estado2[3];
    char cod_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // --- LEITURA E IMPRESSÃO DA PRIMEIRA CARTA ---

    printf("Insira os dados da PRIMEIRA CARTA:\n");
    // Imprime uma mensagem para o usuário.

    printf("Número da Carta: \n");
    scanf("%d", &carta1);
    // Lê um número inteiro e armazena na variável 'carta1'.
    printf("Estado: \n");
    scanf("%s", estado1);
    // Lê uma string (sem espaços) e armazena no array de caracteres 'estado1'.
    // O mesmo processo se repete para todas as outras variáveis das duas cartas.
    printf("Código da carta: \n");
    scanf("%s", cod_carta1);

    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("População: \n");
    scanf(" %d", &populacao1);

    printf("Área: \n");
    scanf(" %f", &area1);

    printf("PIB: \n");
    scanf(" %f", &pib1);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos1);

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
    scanf(" %d", &populacao2);

    printf("Área: \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos2);

    // --- IMPRIMINDO AS INFORMAÇÕES FINAIS ---

    printf("\n--- INFORMAÇÕES DA PRIMEIRA CARTA ---\n");
    // Imprime um cabeçalho para a primeira carta.
    printf("Carta: %d\n", carta1);
    // Imprime a variável 'carta1'. O "%d" é substituído pelo valor da variável.
    printf("Estado: %s\n", estado1);
    // Imprime a string 'estado1'. O "%s" é substituído pelo conteúdo do array.
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    // Imprime a variável 'area1' com duas casas decimais. O "%.2f" faz essa formatação e foi inserida a informação km2.
    printf("PIB: %.2f milhões de reais\n", pib1);
    // Imprime a variável 'pib1' com duas casas decimais. O "%.2f" faz essa formatação e foi inserida a informação milhões re reais.
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    // O mesmo processo se repete para todas as outras variáveis das duas cartas.
    printf("\n--- INFORMAÇÕES DA SEGUNDA CARTA ---\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
    // Retorna 0 para indicar que o programa foi executado com sucesso.
}