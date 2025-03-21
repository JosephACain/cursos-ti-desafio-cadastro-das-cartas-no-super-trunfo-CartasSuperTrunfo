#include <stdio.h>

//Este código permite cadastrar 02 cartas de Super Trunfo;

int main(){

    char estado1, estado2;         //estado: Letras de 'A' a 'H' representando um de oito estados;
    char codigo1[10], codigo2[10]; //codigo: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03);
    char cidade1[50], cidade2[50]; //cidade: O nome da cidade;
    int hab1, hab2;                //hab: O número de habitantes da cidade;
    float area1, area2;            //area: A área da cidade em km²;
    float pib1, pib2;              //pib: O PIB da cidade;
    int ptur1, ptur2;              //ptur: A quantidade de pontos turísticos na cidade;
   
    printf("\nDesafio Super Trunfo!\n");
    //----------------------------------------------------------------------------------
    //Cadastro Carta 01
    printf("\nCadastre a Carta 1:\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: \n"); 
    scanf(" %[^\n]%*c", cidade1); //permite nomes compostos!

    printf("Digite a População: \n");
    scanf("%d", &hab1);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turisticos: \n");
    scanf("%d", &ptur1);

    //Cadastro Carta 02
    printf("\nCadastre a Carta 2:\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: \n"); 
    scanf(" %[^\n]%*c", cidade2); //permite nomes compostos!

    printf("Digite a População: \n");
    scanf("%d", &hab2);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turisticos: \n");
    scanf("%d", &ptur2);

    //----------------------------------------------------------------------------------

    printf("\nCartas Cadastradas:\n");

    //Dados cadastrados - Carta 01
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", hab1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ptur1);
        
    //Alternativa usando uma linha de código
    //printf("\nCarta1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d \n", estado1, codigo1, cidade1, hab1, area1, pib1, ptur1);
    
    //Dados cadastrados Carta 02
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", hab2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptur2);

    //Alternativa usando uma linha de código
    //printf("\nCarta2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d \n", estado2, codigo2, cidade2, hab2, area2, pib2, ptur2);

    //----------------------------------------------------------------------------------

    /*
    Para referencia
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    return 0;
}
