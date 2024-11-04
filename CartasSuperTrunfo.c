#include <stdio.h>

/* Atividade */

int main() {
    int j; // A variável j foi inserida com a finalidade de possibilitar aos usuários a definição do número de cartas que deseja cadastrar.

    printf("Desafio Super Trunfo! (Tecle Enter para continuar.)\n"); // Apresenta o nome do jogo e aguarda a tecla enter ser acionada para inicializar o jogo
    scanf("%*c"); // Lê a entrada anterior e descarta

    printf("Informe o número de cartas a ser cadastrado\n"); // Solicita ao usuário o número de cartas que será cadastrada
    scanf(" %d", &j); // Lê o número de cartas informado pelo usuário e armazena na variável j

    // Declaração das variáveis para "j" cartas:
    int populacao[j], pturisticos[j]; // Variáveis inteiras para o armazenamento de dados das j cartas
    float area[j], pib[j], densdemog[j], pibpercapita[j]; // Variáveis de ponto flutuante para o armazenamento de dados das j cartas
    char estado[j], codcarta[j][3], cidade[j][20]; // Variáveis char e strings para o armazenamento de dados das j cartas

    // Loop for para a realização do cadastramento das j cartas
    for (int i = 0; i < j; i++) {
        printf("\n*** Cadastro da %dª carta ***\n", i + 1); // Informa que será realizado o cadastramento das cartas

        printf("Informe o Estado (de A a H): \n"); // Solicita ao usuário a letra correspondente ao Estado
        scanf(" %c", &estado[i]); // Lê a letra informada e armazena no array estado[i] 

        printf("Informe o código da carta: \n"); // Solicita ao usuário o código da carta
        scanf("%s", codcarta[i]); // Lê o código informado e armazena no array codcarta[i]

        printf("Informe o nome da cidade: \n"); // Solicita ao usuário que informe a cidade
        scanf(" %[^\n]", cidade[i]); // Lê o nome da cidade e armazena no array cidade[i]

        printf("Informe a população da cidade: \n"); // Solicita ao usuário que informe a população da cidade
        scanf("%d", &populacao[i]); // Lê a população e armazena no array populacao[i]

        printf("Informe a área da cidade, em Km²: \n"); // Solicita ao usuário que informe a área da cidade
        scanf("%f", &area[i]); // Lê a área e armazena no array area[i]

        printf("Informe o PIB da cidade: \n"); // Solicita ao usuário que informe o PIB da cidade
        scanf("%f", &pib[i]); // Lê o PIB da cidade e armazena no array pib[i]

        printf("Informe o número de pontos turísticos da cidade: \n"); // Solicita ao usuário que informe o número de pontos turísticos
        scanf("%d", &pturisticos[i]); // Lê o número de pontos turísticos e armazena no array pturisticos[i]

        // Cálculo da densidade populacional e PIB per capita
        densdemog[i] = (float)populacao[i] / area[i];
        pibpercapita[i] = (float)pib[i] / populacao[i];
    }

    // Impressão dos resultados
    printf("\n*** Dados das Cartas Cadastrados ***\n"); // Imprime o cabeçalho "Dados das Cartas Cadastradas"
    // Loop para apresentar, de forma organizada, os dados das cidades cadastradas
    for (int i = 0; i < j; i++) { 
        printf("\n");
        printf("Estado: %c\nCódigo da carta: %.3s\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.3f Km²\nPIB: R$ %.2f\nNúmero de pontos turísticos: %d\nDensidade populacional: %.3f hab./Km²\nPIB per capita: R$ %.2f\n",
               estado[i], codcarta[i], cidade[i], populacao[i], area[i], pib[i], pturisticos[i], densdemog[i], pibpercapita[i]);
        printf("\n");
    }

    return 0;
}