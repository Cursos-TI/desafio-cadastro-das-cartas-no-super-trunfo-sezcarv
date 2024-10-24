#include <stdio.h>
/* Atividade */

int main() {

    // Declaração das variáveis:
    int populacao, pturisticos; // "população" e "pturisticos" são variáveis que somente assumem valores inteiros
    float area, pib, densdemog, pibpercapita; // "area", "pib", "densdemog" e "pibpercapita" são variáveis em ponto flutuante (valores numéricos com parte decimal)
    char estado, codcarta[3], cidade[20]; // A variável "estado" aceita um caractere (de A a H). As variáveis "codcarta" e "cidade" são strings, respectivamente com, no máximo, 3 e 20 caracteres.

    printf("Desafio Super Trunfo! (Tecle Enter para continuar.)\n"); // Exibe o nome do desafio, no terminal ou prompt, e aguarda o usuário teclar enter.
    scanf("%*c"); //Lê a entrada anterior e descarta, inclusive o "Enter", com a finalidade de aguardar a ação do usuário para a exibição da 1º pergunta.

    printf("Informe o Estado (de A a H): \n"); // Exibe no, terminal ou prompt, a 1ª pergunta.
    scanf(" %c", &estado); // Lê a resposta informada pelo usuário e armazena na variável "estado".

    printf("Informe o código da carta: \n"); // Exibe, no terminal ou prompt, a 2ª pergunta.
    scanf("%s", codcarta); // Lê a resposta informada pelo usuário e armazena na variável "codcarta".

    printf("Informe o nome da cidade: \n"); // Exibe, no terminal ou prompt, a 3ª pergunta.
    scanf(" %[^\n]", cidade); // Lê a resposta informada pelo usuário e armazena na variável "cidade".

    printf("Informe a população da cidade: \n"); // Exibe, no terminal ou prompt, a 4ª pergunta.
    scanf("%d", &populacao); // Lê a resposta informada pelo usuário e armazena na variável "populacao".

    printf("Informe a área da cidade, em Km²: \n"); // Exibe, no terminal ou prompt, a 5ª pergunta.
    scanf("%f", &area); // Lê a respota informada pelo usuário e armazena na variável "area".

    printf("Informe o PIB da cidade: \n"); // Exibe, no terminal ou prompt, a 6ª pergunta.
    scanf("%f", &pib); // Lê a respota informada pelo usuário e armazena na variável "pib".

    printf("Informe o número de pontos turísticos da cidade: \n"); //Exibe, no terminal ou prompt, a 7ª pergunta.
    scanf("%d", &pturisticos); // Lê a respota informada pelo usuário e armazena na variável "pturisticos".

    densdemog = (float)populacao / area; //De acordo com os valores de "população" e "area", informados pelo usuárioo, calcula a densidade populacional.
    pibpercapita = (float)pib / populacao; //De acordo com os valores de "PIB" e "população", informados pelo usuárioo, calcula o PIB percapita.


    // Impressão dos resultados
    printf("Estado: %c\nCódigo da carta: %.3s\nCidade: %s\nPopulação: %d habitantes\nArea: %.3f Km²\nPIB: R$ %.2f\nNúmero de pontos turísticos: %d\nDensidade populacional: %.3f hab./Km²\nPIB percapita: R$ %.2f\n", estado, codcarta, cidade, populacao, area, pib, pturisticos, densdemog, pibpercapita);


    return 0;
}