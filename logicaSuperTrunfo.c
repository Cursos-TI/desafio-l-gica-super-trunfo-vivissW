#include <stdio.h>

float divide(int populacao, float area) {
    return area != 0 ? populacao / area : 0;
}

int main() {
    char estado[20], estado2[20];
    char codigo[10], codigo2[15];
    char nome[20], nome2[20];
    char cidadeVencedora[20];
    signed long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    float densidade, densidade2;
    float pib_per_capita, pib_per_capita2;
    int ponto_turistico, ponto_turistico2;
    float superPoder, superPoder2;
    float resultado1, resultado2; 
    float resultado3, resultado4;
    float resultado5, resultado6, resultado7;

    // Carta 1
    printf("** Cadastre suas cartas **\n");
    printf("Carta 1:\n");
    printf("Digite uma letra de *A* a *Z*: \n");
    scanf("%s", estado);
    getchar();  

    printf("Digite o código: ");
    scanf("%s", codigo);
    getchar();  

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    getchar();  

    printf("Digite o número da população: \n");
    scanf("%ld", &populacao);

    printf("Digite a área (km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico);

    
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Digite uma letra de *A* a *Z*: \n");
    scanf("%s", estado2);
    getchar();  

    printf("Digite o código: \n");
    scanf("%s", codigo2);
    getchar(); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);
    getchar();  

    printf("Digite o número da população: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico2);

     // Calcula a densidade populacional para a Carta 1
     densidade = ((float)populacao / area);
     pib_per_capita = (pib / (float)populacao);


     // Calcula a densidade populacional para a Carta 2
     densidade2 = ((float)populacao2 / area2);
     pib_per_capita2 = (pib2 / (float)populacao2);

     // Calculo do Super Poder da carta 1
     superPoder = (populacao + area + pib + ponto_turistico + (1 / densidade) + pib_per_capita);

     // Calculo do Super Poder da carta 2
     superPoder2 = (populacao2 + area2 + pib2 + ponto_turistico2 + (1 / densidade2) + pib_per_capita2);

     // Imprimir as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %ld\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", ponto_turistico);
    printf("Densidade Populacional: %.f\n", densidade);
    printf("PIB per Capita: R$ %.f\n", pib_per_capita);
    printf("Super Poder: %.f\n", superPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.f\n", densidade2);
    printf("PIB per Capita: R$ %.f\n", pib_per_capita2);
    printf("Super Poder: %.f\n", superPoder2);
    printf("\n"); 

// Resultado do jogo
    printf ("***carta 1 VS carta 2***\n");

    printf("** Resultado: 1 para verdadeiro - Carta 1 vence | 0 para falso - Carta 2 vence **\n");
    printf("\n"); 
    printf("Resultado: ");  
    if (populacao > populacao2){
        printf("Carta 1 venceu!", resultado1);  
    } else if (populacao == populacao2) {
        printf("Empate\n");
    } else 
        printf("Carta 2 venceu!\n", resultado1);
        printf("\n"); 

        printf("Carta 1 - %s (%s): %ld\n", nome, estado, populacao);
        printf("Carta 2 - %s (%s): %ld\n", nome2, estado2, populacao2);


    return 0; 

}
