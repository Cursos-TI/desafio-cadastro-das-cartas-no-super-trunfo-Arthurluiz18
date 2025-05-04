#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Jogo de cartas surper trufo \n");
    // carta 01 - declarando variaveis
    char estado;
    char cidade[4];
    char codigo[50];
    int populacao;
    float tamanho;
    float pib;
    int pontos_turisticos;

    //carta 02 - declarando variaveis

    char estado2;
    char cidade2[4];
    char codigo2[50];
    int populacao2;
    float tamanho2;
    float pib2;
    int pontos_turisticos2;

    //obtendo dados da carta 01

    printf("Digite seu estado de (A-H): \n");
    scanf("%c", &estado);

    printf("Digite seu codigo (Exemplo: A01, B02) \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho em Km²: \n");
    scanf("%f", &tamanho);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%f", &pontos_turisticos);

    //obtendo dados da carta 02

    printf("Carta 2:\n");

    printf("Digite seu estado de (A-H): \n");
    scanf("%c", &estado2);

    printf("Digite seu codigo (Exemplo: A01, B02) \n");
    scanf("%s", &codigo2);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho em Km² \n");
    scanf("%f", &tamanho2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    //imprimindo dados da carta 01

    printf("\nCarta 1\n");
    printf("Estado:%c\n" , estado);
    printf("Codigo:%s\n" , codigo);
    printf("Nome da Cidade:%s\n" , cidade);
    printf("População:%d\n" , populacao);
    printf("Área:%f\n" , tamanho);
    printf("PIB:%f\n" , pib);
    printf("Numeros de Pontos Turisticos:%d\n" , pontos_turisticos);

    //imprimindo dados da carta 02

    printf("\nCarta 2\n");
    printf("Estado:%c\n" , estado2);
    printf("Codigo:%s\n" , codigo2);
    printf("Nome da Cidade:%s\n" , cidade2);
    printf("População:%d\n" , populacao2);
    printf("Área:%f\n" , tamanho2);
    printf("PIB:%f\n" , pib2);
    printf("Numeros de Pontos Turisticos:%d\n" , pontos_turisticos2);














    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
