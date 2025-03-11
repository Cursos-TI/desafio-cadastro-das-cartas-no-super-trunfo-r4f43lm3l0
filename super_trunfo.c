// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de estado.
#include <stdio.h>;

int main(){

    char estado, estado2;
    char codigo, codigo2, nomedacidade, nomedacidade2[20];
    int populacao, populacao2, numeropontoturistico, numeropontoturistico2;
    float area, area2, pib, pib2, densidadepopulacional, densidadepopulacional2, pibpercapita, pibpercapita2;
// neste codigo seram apreseentados duas cartas com suas respectivas informações.    
//  printf para exibir as informações das cartas cadastradas de forma clara e organizada.
//  scanf para exibir informações de entrada pelo teclado para cada variavel.    
printf("Carta 1\n");
    
    printf("Estado: ");
    scanf("%c", &estado);
    printf("Codigo: ");
    scanf("%s", &codigo);
    printf("Nome da Cidade: ");
    scanf("%s", &nomedacidade);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area:  ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numeropontoturistico );
// instrucão de entrada de calculos aritimeticos para Densidade Populacional e PIB per capita, carta1.
    densidadepopulacional= (float)(populacao/area);
    pibpercapita= (float)(pib/populacao);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional);
    printf("PIB per capita: %.2f\n", pibpercapita);
    printf("\n");
    printf("Carta 2 \n");
    scanf("%c", &estado2);
    printf("Estado: ");
    scanf("%c", &estado2);
    printf("Codigo: ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomedacidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d\n", &numeropontoturistico2);
// instrucão de entrada de calculos aritimeticos para Densidade Populacional e PIB per capita, carta2.
    densidadepopulacional2= (float)(populacao2/area2);
    pibpercapita2= (float)(pib2/populacao2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
  
    return 0;
    
}

