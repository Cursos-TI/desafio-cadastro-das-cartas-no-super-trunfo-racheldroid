#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Rachel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
        char Estado [30];
        char Cidade [30];
        char codigo_da_cidade [30];
        float populacao;
        float area;
        double PIB;
        int numero_de_pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("Digite o estado: ");
        scanf("%s", Estado );

        printf("Digite o nome da cidade: ");
        scanf("%s", Cidade);
        
        printf("Digite o codigo da cidade: ");
        scanf("%s", codigo_da_cidade );

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao );
        
        printf("Digite a área da cidade (km2): ");
        scanf("%f", &area );
        
        printf("Digite o PIB da cidade: ");
        scanf("%lf", &PIB );   

        printf("Digite o número de pontos turisticos da cidade:");
        scanf("%d", &numero_de_pontos_turisticos );

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("O estado é: %s\n", Estado);
        printf("A cidade é: %s\n", Cidade);
        printf("O código é: %s\n", codigo_da_cidade);
        printf("A população é de: %.2f\n", populacao);
        printf("A área da cidade é de (km2): %.2f\n", area);
        printf("O PIB da cidade é de: %.2lf\n", PIB);
        printf("O número de pontos turisticos da cidade é de: %d\n", numero_de_pontos_turisticos);

    return 0;
}