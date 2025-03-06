#include <stdio.h>
//criado 2 variáveis para cadastro das cartas 
//colocado valores de string conforme a quantidade de dados digitados
//char declaradas como string para imprimir os nomes de cidades com mais de 10 caracteres
//utilizado printf("\n") para deixar espaços entre os dados exibidos em tela
int main() {
    char estado1, estado2; 
    char codigocarta1[4], codigocarta2[4];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2; //criada para fazer a divisão de população por areakm;
    float pibpercapita1, pibpercapita2;//criada para fazer As divisão de pib por população;
   
    //informações da carta 01
    printf("Carta 1: \nDigite o estado: \n");
    scanf("%c", &estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta1);

    printf("Digite a cidade: \n");
    scanf("%s", nomecidade1);

    printf("digite a população: \n");
    scanf("%d", &populacao1);

    printf("digite a área total: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    
    //informações da carta 02
    printf("\n");

    printf("Carta 2: \nDigite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta2);

    printf("Digite a cidade: \n");
    scanf("%s", nomecidade2);

    printf("digite a população: \n");
    scanf("%d", &populacao2);

    printf("digite a área total: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    
    //impressão dos dados digitados na tela 

     printf("\n");// carta 1
     printf("Carta 1: \nEstado: %c \n", estado1);
     printf("Código: %s \n", codigocarta1);
     printf("Nome da Cidade: %s \n", nomecidade1);
     printf("População: %i \n", populacao1);
     printf("Área: %.2f km² \n", areakm1);
     printf("PIB: %.2f bilhões de reais \n", pib1);
     printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
     densidade1 = (float)(populacao1 / areakm1);
     printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
     pibpercapita1 = (float)(pib1 / populacao1);
     printf("PIB per Capita: %.2f reais \n", pibpercapita1);

     printf("\n");// carta 2
     printf("Carta 2: \nEstado: %c \n", estado2);
     printf("Código: %s \n", codigocarta2);
     printf("Nome da Cidade: %s \n", nomecidade2);
     printf("População: %d \n", populacao2);
     printf("Área: %.2f km² \n", areakm2);
     printf("PIB: %.2f bilhões de reais \n", pib2);
     printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
     densidade2 = (float)(populacao2 / areakm2);
     printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
     pibpercapita2 = (float)(pib2 / populacao2);
     printf("PIB per Capita: %.2f reais \n", pibpercapita2);
     printf("\n");

     return 0;
  

}

