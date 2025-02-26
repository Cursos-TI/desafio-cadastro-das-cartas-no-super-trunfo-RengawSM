#include <stdio.h>

int main(){

    printf("SUPER TRUNFO: CADASTRO DE CARTAS! \n");

    char estado, nome, codigo;
    int populacao, pontos_turisticos;
    float area, PIB;
    

    printf("Vamos lá! \n");
    printf("Insira o nome do Estado referente a esta carta: \n");
    
    scanf("%s", &estado);

    printf("Insira o nome de uma cidade deste estado: \n");
    scanf("%s", &nome);
    
    printf("insira o código da cidade: \n");
    scanf("%s", codigo);
    
    printf("insira a população desta cidade \n");
    scanf("%d", &populacao);

    return 0;
}