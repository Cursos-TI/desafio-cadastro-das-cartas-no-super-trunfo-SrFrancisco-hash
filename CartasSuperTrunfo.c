#include <stdio.h>

int main() {

    char estado1[50], estado2[50];
    char codigodacarta1 [50], codigocarta2 [50];
    char nomecd1[50], nomecd2 [50];
    int ppl1, ppl2;
    float areakm1, areakm2;
    float pib1, pib2;
    int nmrpt1, nmrpt2; 

    //--- código carta 1 ---//
    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Codigo: \n");
    scanf("%s", codigodacarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomecd1);

    printf("Populaçao: \n");
    scanf("%d", &ppl1);

    printf("area: \n");
    scanf("%f", &areakm1);

    printf("Pib: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &nmrpt1);
    
    //--- info carta 1 ---//
    printf("\n--- Dados da carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomecd1);
    printf("População: %d\n", ppl1);
    printf("Área: %.2fkm²\n", areakm1);
    printf("Pib: %.2f\n", pib1);
    printf("Número de pontos turisticos: %d\n", nmrpt1);

    //--- código carta 2 ---//
    printf("carta 2: \n");
    scanf("%s", estado2);

    printf("Codigo: \n");
    scanf("%s", codigocarta2);

    printf("Nome da cidade: \n");
    scanf("%s", nomecd2);

    printf("População: \n");
    scanf("%d", &ppl2);

    printf("Área: \n");
    scanf("%f", &areakm2);

    printf("Pib: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &nmrpt2);

    //--- info carta 2 ---//
    printf("\n--- Dados da carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecd2);
    printf("População: %d\n", ppl2);
    printf("Área: %.2fkm²", areakm2);
    printf("Pib: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n",nmrpt2);


    return 0;

}
