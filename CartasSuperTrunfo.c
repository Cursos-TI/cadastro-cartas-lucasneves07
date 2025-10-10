#include <stdio.h>
#include <string.h>

int main(){
    //Declarar variaveis
    unsigned long int populacao,populacao2;
    int pontos_turisticos,pontos_turisticos2;
    float area,area2,densidade,densidade2;
    float pib,pib2,pib_pc,pib_pc2;
    char nome[10],nome2[10],codigo[10],codigo2[10],cidade[20],cidade2[20],carta[500],carta2[500];

    // Pedir ao user as infos
    printf("Digite a letra do estado (de A a H): \n");
    scanf("%s", &nome);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km2: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a letra do estado 2 (de A a H): \n");
    scanf("%s", &nome2);

    printf("Digite a cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite o numero de habitantes da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area 2 em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade 2: \n");
    scanf("%d", &pontos_turisticos2);

    //calculo de variaveis baseado nos inputs de user
    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    pib_pc = pib / populacao;
    pib_pc2 = pib2 / populacao2;

    //Consolidar as infos nas variaveis cartas
    sprintf(carta,
        " Estado: %s - Codigo: %s01\n Cidade: %s - Populacao: %d\n Area: %.2f - PIB: %.2f\n Pontos turisticos: %d\n Densidade Populacional: %.2f - PIB per capita: %.2f\n", 
    nome, nome, cidade, populacao, area, pib, pontos_turisticos,densidade,pib_pc);
    sprintf(carta2,
        " Estado: %s - Codigo: %s01\n Cidade: %s - Populacao: %d\n Area: %.2f - PIB: %.2f\n Pontos turisticos: %d\n Densidade Populacional: %.2f - PIB per capita: %.2f\n", 
    nome2, nome2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_pc2);
    
    //imprime as cartas
    printf("\n ------- Carta1 -------\n");
    printf("%s\n",carta);

    printf("\n ------- Carta2 -------\n");
    printf("%s\n",carta2);

    //calcular superpoder e comparar
    float superpoder = populacao + pontos_turisticos + area + densidade + pib + pib_pc;

    float superpoder2 = populacao2 + pontos_turisticos2 + area2 + densidade2 + pib2 + pib_pc2;

    printf("\n ***** Comparacao das cartas [1 ganha a carta1 e 0 ganha carta 2] *****\n");
    printf("\n Populacao: %d - Pontos Turisiticos: %d\n", (populacao > populacao2), (pontos_turisticos > pontos_turisticos2));
    printf("\n Area: %d - Densidade populacional: %d\n", (area > area2), (densidade < densidade2));
    printf("\n PIB: %d - PIB per capita: %d\n", (pib > pib2), (pib_pc > pib_pc2));
    printf("\n Pontuacao geral A: %f - Pontuacao geral B: %f\n", superpoder, superpoder2);
    printf("\n Vencedor geral: %d\n", (superpoder>superpoder2));

    
}
