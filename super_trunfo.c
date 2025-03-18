// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de estado.
#include <stdio.h>;

int main(){

    char estado, estado2;
    char codigo, codigo2, nomedacidade, nomedacidade2[30];
    int  numeropontoturistico, numeropontoturistico2;
    float area, area2, pib, pib2, densidadepopulacional, densidadepopulacional2, pibpercapita, pibpercapita2, superpoder, superpoder2;
    unsigned long int populacao, populacao2;

// neste codigo seram apreseentados duas cartas com suas respectivas informações.    
//  printf para exibir as informações das cartas cadastradas de forma clara e organizada.
//  scanf para exibir informações de entrada pelo teclado para cada variavel.    
    printf("Carta 1 \n");

    printf("Estado: ");
    scanf("%c", &estado);
    printf("Codigo: ");
    scanf("%s", &codigo);
    printf("Nome da Cidade: ");
    scanf("%s", &nomedacidade);
    printf("Populacao: ");
    scanf("%u", &populacao);
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
    superpoder = (populacao + area + pib + numeropontoturistico, pibpercapita);
    printf("Super Poder: %.2f\n", superpoder);
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
    scanf("%u", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d\n", &numeropontoturistico2);
    printf("\n");
    
// instrucão de entrada de calculos aritimeticos para Densidade Populacional e PIB per capita, carta2.
    densidadepopulacional2= (float)(populacao2/area2);
    pibpercapita2= (float)(pib2/populacao2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    superpoder2 = (populacao2 + area2 + pib2 + numeropontoturistico2+ pibpercapita2);
    printf("Super Poder: %f\n", superpoder2);
    printf("\n***Comparação de Cartas***\n");
    printf("\n");
    printf("População:%d\n", populacao > populacao2 );
    printf("Area:%d\n", area > area2 );
    printf("PIB:%d\n", pib > pib2 );
    printf("Pontos Turisticos:%d\n", numeropontoturistico > numeropontoturistico2 );
    printf("Densidade Populacional:%d\n", densidadepopulacional > densidadepopulacional2 ); 
    printf("PIB per capita:%d\n", pibpercapita > pibpercapita2 );
    printf("Super Poder:%d\n", superpoder > superpoder2 );

    if (pib > pib2){
        printf("Carta1 venceu!");
    } else {
        printf("carta2 venceu!");
    }


  
    return 0;
    
}

