#include <stdio.h>

int main (){
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main (){
    struct Carta carta1;
    struct Carta carta1;

    printf("Cadastro da Carta 1: \n");

        printf("Digite o estado:A");
        scanf("%s", &carta1.estado);

        printf("Digite o código da Carta:A01");
        scanf("%s", &carta1.codigo);

        printf("Digite o nome da cidade: São Paulo");
        scanf("%\n", &carta1.nomeCidade);

        printf("Digite a populaçao da cidade: 12325000");
        scanf("%D", %carta1.populaçao);

        printf("Digite a área da cidade (em km²): 1521.11");
        scanf("%f", &carta1.area);

        printf("Digite o PIB da cidade (em bilhões de reais):699.28");
        scanf("%f", &carta.pib);

        printf("Digite o número de pontos turísticos:50');
        scanf("%d", &carta1.pontosTuristicos);

        printf("\n");

    printf("Cadastro da Carta 2: \n");
        
        printf("Digite o estado:B");
        scanf("%c", &carta2.estado);

        printf("Digite o codigo da carta:B02");
        scanf("%s", &carta2.codigo);

        printf("Digite o nome da cidade: Rio de Janeiro");
        scanf("%\n", &carta2.nomeCidade);

        printf(""Digite a população da cidade: 6748000");
        scanf("%d", &carta2.populacao);

        printf("Digite a área da cidade (em km²):1200.25");
        scanf("%f", &carta2.area);

        printf("Digite o PIB da cidade (em bilhões de reais):300.50");
        scanf("%f", &carta2.pib);

        printf("Digite o número de pontos turísticos:30");
        scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
    
