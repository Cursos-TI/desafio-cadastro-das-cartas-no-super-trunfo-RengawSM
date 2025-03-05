#include <stdio.h>

int main(){

// Há pequenos detalhes que não consegui compreender ao digitar a area e o PIB da cidade

    char estado[50], estado2[50], cidade[50], cidade2[50];
    char codigo[10], codigo2[10];
    float populacao, populacao2; 
    int pontos_turisticos, pontos_turisticos2;
    float area, area2, PIB, PIB2;
    
 printf("SUPER TRUNFO: Países -  CADASTRO DE CARTAS! \n");

 printf("Vamos lá! \n");

 printf("Insira o nome do Estado referente a esta carta: \n");
scanf("%s", estado);

printf("Insira o nome de uma cidade deste estado: \n");
 
scanf("%s", cidade);

printf("insira o código da carta: \n");
scanf("%s", codigo);

printf("insira a população desta cidade \n");
scanf("%f", &populacao);

printf("Agora insira a área em km² \n");
scanf("%f", &area);

printf("Qual o PIB desta cidade? \n");
scanf("%f", &PIB);

printf("Agora quantos pontos turísticos há nesta cidade? \n");
scanf("%d", &pontos_turisticos);

printf("Muito bem! Vamos à próxima carta: \n");

printf("Insira o estado da carta 2: \n");
scanf("%s", estado2);

printf("Agora uma cidade deste estado: \n");
scanf("%s", cidade2);

printf("Insira o código da carta: \n");
scanf("%s", codigo2);

printf("Agora a população desta cidade: \n");
scanf("%f", &populacao2);

printf("Insira a área desta cidade em km² \n");
scanf("%f", &area2);

printf("Insira o PIB desta cidade \n");
scanf("%f", &PIB2);

printf("Agora quantos pontos turístico há nesta cidade: \n");
scanf("%d", &pontos_turisticos2);

printf("Muito bem! As cartas cadastradas foram as seguntes: \n");
printf("Carta 1: \n");
printf("Estado: %s \n", estado);
printf("Código: %s \n", codigo);
printf("Nome da cidade: %s \n", cidade);
printf("População: %f \n", populacao);
printf("Área: %d \n", area);
printf("PIB: %d \n", PIB);
printf("Pontos turísticos: %d \n", pontos_turisticos);

printf("Carta 2: \n");
printf("Estado: %s \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da cidade: %s \n", cidade2);
printf("Popilação: %d \n", populacao2);
printf("Área: %d \n", area2);
printf("PIB: %d \n", PIB2);
printf("Pontos turísticos: %d \n", pontos_turisticos2);



return 0;



}

