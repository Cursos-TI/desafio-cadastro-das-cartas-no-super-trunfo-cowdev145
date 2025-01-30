#include <stdio.h>
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste Henrique
int main(){   

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int condigoDacidade, populacao, pontosturisticos;
    char nomecidade[20];
    float area,pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("------Jogo Super trunfo-------\n");
    printf("-------Estado A----------\n");

    printf("Digite o codigo da cidade:\n");
    scanf("%d", &condigoDacidade);

    printf("Nome da cidade:\n");
    scanf("%s", &nomecidade);


    printf("Qual a popucão da cidade:\n");
    scanf("%d", &populacao);


    printf("Número de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);



    printf("Digite o tamanho da área:\n");
    scanf("%f", &area );


    printf("Qual o pib:\n");
    scanf("%f", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("-------Dados das Cartas-------\n");
    printf("Codigo do estado A%d\n", condigoDacidade);
    printf("Nome da cidade: %s\n",nomecidade);
    printf("Popução: %d\n",populacao);
    printf("Total de pontos turisticos: %d\n", pontosturisticos);
    printf("Área da cidade: %.2f\n", area);
    printf("Pib da cidade: %.2f\n", pib);
}