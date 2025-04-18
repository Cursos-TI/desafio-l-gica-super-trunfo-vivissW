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
    int input, input2, resultado, resultado2;
int atributo1_1, atributo1_2, atributo2_1, atributo2_2;
char escolhido1[50]; 
char escolhido2[50];
printf("**Carta 1 vs Carta 2**\n");
printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos turisticos\n5. Densidade populacional\n6. PIB PER CAPITA\n");
scanf("%d", &input);

    switch (input) {
        case 1:
            printf("Comparacao de Populacao:\n%s: %d vs %s: %d\n", nome, populacao, nome2, populacao2);
            resultado1 = (populacao > populacao2) ? 1 : 2;
            atributo1_1 = populacao;
            atributo1_2 = populacao2;
            sprintf(escolhido1, "Populacao");
            break;
        case 2:
            printf("Comparacao de Area:\n%s: %.2f km² vs %s: %.2f km²\n", nome, area, nome2, area2);
            resultado = (area > area2) ? 1 : 2;
            atributo1_1 = area;
            atributo2_1 = area2;
            sprintf(escolhido1, "Area");
            break;
        case 3:
            printf("Comparacao de PIB:\n%s: %.2f bilhoes vs %s: %.2f bilhoes\n", nome, pib, nome2, pib2);
            resultado = (pib > pib2) ? 1 : 2;
            atributo1_1 = pib;
            atributo2_1 = pib2;
            sprintf(escolhido1, "PIB");
            break;
        case 4:
            printf("Comparacao de Pontos turisticos:\n%s: %d vs %s: %d\n", nome, ponto_turistico, nome2, ponto_turistico2);
            resultado = (ponto_turistico > ponto_turistico2) ? 1 : 2;
            atributo1_1 = ponto_turistico;
            atributo2_1 = ponto_turistico2;
            sprintf(escolhido1, "Pontos turisticos");
            break;
        case 5:
            printf("Comparacao de Densidade populacional:\n%s: %.2f hab/km vs %s: %.2f hab/km\n", nome, densidade, nome2, densidade2);
            resultado = (densidade > densidade2) ? 1 : 2;
            atributo1_1 = densidade;
            atributo2_1 = densidade2;
            sprintf(escolhido1, "Densidade populacional");
            break;
        case 6:
            printf("Comparacao de PIB per capita:\n%s: %.2f reais vs %s: %.2f reais\n", nome, pib_per_capita, nome2, pib_per_capita2);
            resultado = (pib_per_capita > pib_per_capita2) ? 1 : 2;
            atributo1_1 = pib_per_capita;
            atributo2_1 = pib_per_capita2;
            sprintf(escolhido1, "PIB PER CAPITA");
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }
        if (atributo1_1 != atributo2_1){
        printf("Resultado: Carta %d (%s) venceu!\n\n", resultado, (resultado == 1) ? nome : nome2);
        }else{
        printf("Empate\n\n");}
    
    
    
        printf("Escolha um outro atributo para batalhar:\n");
            switch (input)
            {
            case 1:
                printf("2. Area\n3. PIB\n4. Pontos turisticos\n5. Densidade populacional\n6. PIB PER CAPITA\n");
                break;
            case 2:
                printf("1. Populacao\n3. PIB\n4. Pontos turisticos\n5. Densidade populacional\n6. PIB PER CAPITA\n");
                break;
            case 3:
                printf("1. Populacao\n2. Area\n4. Pontos turisticos\n5. Densidade populacional\n6. PIB PER CAPITA\n");
                break;
            case 4:
                printf("1. Populacao\n2. Area\n3. PIB\nn5. Densidade populacional\n6. PIB PER CAPITA\n");
                break;
            case 5:
                printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos turisticos\n6. PIB PER CAPITA\n");
                break;
            case 6:
                printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos turisticos\n5. Densidade populacional\n");
                break;
            
            default:
                break;
            }
            scanf("%d", &input2);
    
            switch (input2) {
                case 1:
                    printf("Comparacao de Populacao:\n%s: %d vs %s: %d\n", nome, populacao, nome2, populacao2);
                    resultado2 = (populacao > populacao2) ? 1 : 2;
                    atributo1_2 = populacao;
                    atributo2_2 = populacao2;
                    sprintf(escolhido2, "Populacao");
                    break;
                case 2:
                    printf("Comparacao de Area:\n%s: %.2f km² vs %s: %.2f km²\n", nome, area, nome2, area2);
                    resultado2 = (area > area2) ? 1 : 2;
                    atributo1_2 = area;
                    atributo2_2 = area2;
                    sprintf(escolhido2, "Area");
                    break;
                case 3:
                    printf("Comparacao de PIB:\n%s: %.2f bilhoes vs %s: %.2f bilhoes\n", nome, pib, nome2, pib2);
                    resultado2 = (pib > pib2) ? 1 : 2;
                    atributo1_2 = pib;
                    atributo2_2 = pib2;
                    sprintf(escolhido2, "PIB");
                    break;
                case 4:
                    printf("Comparacao de Pontos turisticos:\n%s: %d vs %s: %d\n", nome, ponto_turistico, nome2, ponto_turistico2);
                    resultado2 = (ponto_turistico > ponto_turistico2) ? 1 : 2;
                    atributo1_2 = ponto_turistico;
                    atributo2_2 = ponto_turistico2;
                    sprintf(escolhido2, "Pontos turisticos");
                    break;
                case 5:
                    printf("Comparacao de Densidade populacional:\n%s: %.2f hab/km² vs %s: %.2f hab/km²\n", nome, densidade, nome2, densidade2);
                    resultado2 = (densidade > densidade2) ? 1 : 2;
                    atributo1_2 = densidade;
                    atributo2_2 = densidade2;
                    sprintf(escolhido2, "Densidade populacional");
                    break;
                case 6:
                    printf("Comparacao de PIB per capita:\n%s: %.2f reais vs %s: %.2f reais\n", nome, pib_per_capita, nome2, pib_per_capita2);
                    resultado2 = (pib_per_capita > pib_per_capita2) ? 1 : 2;
                    atributo1_2 = pib_per_capita;
                    atributo2_2 = pib_per_capita2;
                    sprintf(escolhido2, "PIB PER CAPITA");
                    break;
                default:
                    printf("Opcao invalida!\n");
                    }
        if (atributo1_2 != atributo2_2){
            printf("Resultado: Carta %d (%s) venceu!!\n\n", resultado, (resultado == 1) ? nome : nome2);
        }else{
            printf("Resultado: Ambos atributos empataram\n\n");}
            
            int soma, soma2;
            int resultadosoma;
            
        printf("Agora a batalha sao com os dois atributos:\n %s mais %s", escolhido1, escolhido2);
            soma = atributo1_1 + atributo1_2;
            soma2 = atributo2_1 + atributo2_2;
        printf(" %s: %d pontos\n  vs\n %s: %d pontos\n\n", escolhido1, soma, escolhido2, soma2);
        if (soma > soma2)
        {
            resultadosoma = (soma > soma2) ? 1 : 2;
            printf("Resultado: Carta %d (%s) venceu!!\n", resultado, (resultado == 1) ? nome : nome2);
        }
            else if (soma < soma2)
            {
                resultadosoma = (soma > soma2) ? 1 : 2;
                printf("Resultado: Carta %d (%s) venceu!!\n", resultado, (resultado == 1) ? nome : nome2);
            }
            
                else{
                    printf("Empate");
                }
        } 
        
 
