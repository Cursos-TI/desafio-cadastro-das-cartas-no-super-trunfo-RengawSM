#include <stdio.h>

int main(){


    char estado, estado2 cidade;
    char codigo, codigo2;
    float populacao, populacao2; 
    int pontos_turisticos, pontos_turisticos2;
    float area, area2, PIB, PIB2;
    
 printf("SUPER TRUNFO: Países -  CADASTRO DE CARTAS! \n");

 printf("Vamos lá! \n");

 printf("Insira o nome do Estado referente a esta carta: \n");
scanf("%s", &estado);

printf("Insira o nome de uma cidade deste estado: \n");
 
scanf("%s", &cidade);

printf("insira o código da carta: \n");
scanf("%s", &codigo);

printf("insira a população desta cidade \n");
scanf("%f", &populacao);

printf("Agora insira a área em km² \n");
scanf("%f", &area);

printf("Qual o PIB desta cidade? \n");
scanf("%F", &PIB);

printf("Agora quantos pontos turísticos há nesta cidade? \n");
scanf("%d", &pontos_turisticos);

printf("Muito bem! Vamos à próxima carta: \n");

printf("Insira o estado da carta 2: \n");
scanf("%s", &estado2);

printf("Agora uma cidade deste estado: \n");
scanf("%s", &cidade2);

printf("Insira o código da carta: \n");
scanf("%s, &codigo2");

printf("Agora a população desta cidade: \n");
scanf("%f", &populacao2);

printf("Agora quantos pontos turístico há nesta cidade: \n");
scanf("%d", &pontos_turisticos2);
    return 0;



}


