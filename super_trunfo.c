#include <stdio.h>
int main (){

// Esse é o código do jogo super trunfo um jogo de cartas super divertido onde o usúario vai se divertir muito.
    // Recomendaões.
    // Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    // População: O número de habitantes da cidade. Tipo: int
    // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    // PIB: O Produto Interno Bruto da cidade. Tipo: float
    // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    // Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível.
    
    
    char estado[50];   //Variavel para estado
    char cdgcarta[50];  //Variavél para código de carta
    char ncidade[50];  //Variavel para cidade
    unsigned long int populacao;  //Variavel para população
    float area;     //Variavel para area²
    long double pib;      //Variavel para PIB
    int nturisticos;  // Variavel para pontos turisticos
    float densidadepop; // Variavel para densidade populacional
    long double rendapercapita; // Variavel para Renda per capta
    long double superpoder; // Variavel para super poder.
    float inversiondensidade; // Variavel para calculo da densidade ivertida


    // Variaveis da carta 2.
    
    char estado_b[50];   //Variavel para estado
    char cdgcarta_b[50];  //Variavél para código de carta
    char ncidade_b[50];  //Variavel para cidade
    unsigned long int populacao_b;  //Variavel para população
    float area_b;     //Variavel para area²
    long double pib_b;      //Variavel para PIB
    int nturisticos_b;  // Variavel para pontos turisticos
    float densidadepop_b; // Variavel para densidade populacional
    long double rendapercapita_b; // Variavel para Renda per capta
    long double superpoder_b; // Variavel para super poder
    float inversiondensidade_b; // Variavel para calculo da densidade ivertida

    // variavel de comparação de cartas

    float result_area;
    unsigned long int result_pop;
    long double result_pib;
    int reult_nturisticos;
    float result_densi;
    long double result_percapita;
    long double result_superpoder;
     


    //Introdução do jogo.
    
    printf ("*** Super Trunfo: Nações e Regiões***\n");
    
    //Inicio do código de interação
    
    printf ("Vamos começar inserindo os dados da carta 1 \n");
    printf ("Insira as iniciais do estados: \n");
    scanf ("%s", &estado);
    printf ("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf ("%s", &cdgcarta);
    printf ("Insira o nome da cidade: \n");
    scanf ("%s", &ncidade);
    printf ("Insira o número de habitantes da cidade: \n");
    scanf ("%lu", &populacao);
    printf ("Insira a área da cidade em quilômetros quadrados: \n");
    scanf ("%f", &area);
    printf ("Insira o PIB (Produto Interno Bruto da cidade): \n");
    scanf ("%Lf", &pib);
    printf ("Insira a quantidade de pontos turísticos na cidade: \n");
    scanf ("%d", &nturisticos);


     // Calculo de densidade populacional 

    densidadepop = (populacao / area );

    // Calculo de para renda per capita
    
    rendapercapita = (pib / populacao);

    // calcular a densidade invertida

    inversiondensidade = 1 / densidadepop;

    // calcular o super poder

    superpoder = (populacao + pib + area + nturisticos +
                  rendapercapita + inversiondensidade);



   //Código para exibir na tela os dados da carta 1.
    printf ("\n\n");
    printf ("Carta 1: \n");
    printf ("Estado: %s\n", estado);
    printf ("Código: %s\n", cdgcarta);
    printf ("Nome da cidade: %s\n", ncidade);
    printf ("População: %lu\n", populacao);
    printf ("Àrea: %.2f km²\n", area);
    printf ("PIB: %.2Lf bilhões de reais\n", pib);
    printf ("Números de Pontos Turísticos: %d\n", nturisticos);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop);
    printf ("PIB per Capita: %.2Lf reais\n", rendapercapita);
    printf ("Super Poder: %.2Lf\n", superpoder);

    // Segunda fase inserindo os codigos da carta 2.
    printf ("\n\n");
    printf ("Agora vamos inserir os dados da carta 2 \n");
    printf ("Insira as iniciais do estados: \n");
    scanf ("%s", &estado_b);
    printf ("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf ("%s", &cdgcarta_b);
    printf ("Insira o nome da cidade: \n");
    scanf ("%s", &ncidade_b);
    printf ("Insira o número de habitantes da cidade: \n");
    scanf ("%lu", &populacao_b);
    printf ("Insira a área da cidade em quilômetros quadrados: \n");
    scanf ("%f", &area_b);
    printf ("Insira o PIB (Produto Interno Bruto da cidade): \n");
    scanf ("%Lf", &pib_b);
    printf ("Insira a quantidade de pontos turísticos na cidade: \n");
    scanf ("%d", &nturisticos_b);

    // Calculo de densidade populacional

    densidadepop_b = (populacao_b / area_b );

    // Calculo de para renda per capita
    
    rendapercapita_b = (pib_b / populacao_b);

    // calcular a densidade invertida

    inversiondensidade_b = 1 / densidadepop_b;

    // calcular o super poder

    superpoder_b = (populacao_b + pib_b + area_b + nturisticos_b +
                  rendapercapita_b + inversiondensidade_b);

    
    // Código para exibir na tela os dados da carta 2.
    
    printf ("\n \n");
    printf ("Carta 2: \n");
    printf ("Estado: %s\n", estado_b);
    printf ("Código: %s\n", cdgcarta_b);
    printf ("Nome da cidade: %s\n", ncidade_b);
    printf ("População: %lu\n", populacao_b);
    printf ("Àrea: %.2f km²\n", area_b);
    printf ("PIB: %.2Lf bilhões de reais\n", pib_b);
    printf ("Números de Pontos Turísticos: %d\n", nturisticos_b);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop_b);
    printf ("PIB per Capita: %.2Lf reais\n", rendapercapita_b);
    printf ("Super Poder: %.2Lf\n\n", superpoder_b);

    // Comparação de atributos





    
    // Comparação das cartas.
    result_pop = populacao > populacao_b;
    result_area = area > area_b;
    result_pib = pib > pib_b;
    reult_nturisticos = nturisticos > nturisticos_b;
    result_densi = densidadepop < densidadepop_b;
    result_percapita = rendapercapita > rendapercapita_b;
    result_superpoder = superpoder > superpoder_b;
    


    // Imprimindo os resultados

    printf ("\n\n");
    printf ("Comparação das cartas:\n\n");
    if (result_pop == 1) {
        printf ("População: Carta 1 venceu\n");
    } else if (result_pop == 0) {
        printf ("População: Carta 2 venceu\n");
    }
    if (result_area == 1) {
        printf ("Area: Carta 1 Venceu\n");
    } else if (result_area == 0) {
        printf ("Area: Carta 2 venceu\n");
    }
    if (result_pib == 1) {
        printf ("PIB: Carta 1 Venceu\n");
    } else if (result_pib == 0) {
        printf ("PIB: Carta 2 venceu\n");
    }
    if (reult_nturisticos == 1) {
        printf ("Pontos Turisticos: Carta 1 Venceu\n");
    } else if (reult_nturisticos == 0) {
        printf ("Pontos Turisticos: Carta 2 venceu\n");
    }
    if (result_densi == 1) {
        printf ("Densidade demografica: Carta 1 Venceu\n");
    } else if (result_densi == 0) {
        printf ("Densidade demografica: Carta 2 venceu\n");
    }
    if (result_percapita == 1) {
        printf ("PIB per Capita: Carta 1 Venceu\n");
    } else if (result_percapita == 0) {
        printf ("PIB per capita: Carta 2 venceu\n");
    }
    if (result_superpoder == 1) {
        printf ("Super Poder: Carta 1 Venceu\n");
    } else if (result_superpoder == 0) {
        printf ("Super Poder: Carta 2 venceu\n");
    } 






    






    return 0;
}