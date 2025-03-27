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


char estado[25];   //Variavel para estado
char cdgcarta[25];  //Variavél para código de carta
char ncidade[25];  //Variavel para cidade
int populacao;  //Variavel para população
float area;     //Variavel para area²
float pib;      //Variavel para PIB
int nturisticos;  // Variavel para pontos turisticos

// Variaveis da carta 2.
char estado_b[25];   //Variavel para estado
char cdgcarta_b[25];  //Variavél para código de carta
char ncidade_b[25];  //Variavel para cidade
int populacao_b;  //Variavel para população
float area_b;     //Variavel para area²
float pib_b;      //Variavel para PIB
int nturisticos_b;  // Variavel para pontos turisticos

//Introdução do jogo.

printf ("Super Trunfo: Nações e Regiões é um jogo de cartas dinâmico e educativo, onde jogadores disputam com cartas de países, comparando atributos como população, área, PIB e outros fatores. Use estratégia para escolher o melhor atributo e vencer as rodadas. Quem reunir todas as cartas primeiro é o grande campeão! \n");

//Inicio do código de interação

printf ("Vamos começar inserindo os dados da carta 1 \n");
printf ("Insira uma letra de 'A' a 'H' representando um dos oito estados. \n");
scanf ( "%s", estado);
printf ("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
scanf ("%s", &cdgcarta);
printf ("Insira o nome da cidade \n");
scanf ("%s", &ncidade);
printf ("Insira o número de habitantes da cidade \n");
scanf ("%d", &populacao);
printf ("Insira a área da cidade em quilômetros quadrados \n");
scanf ("%f", &area);
printf ("Insira o PIB (Produto Interno Bruto da cidade) \n");
scanf ("%f", &pib);
printf ("Insira a quantidade de pontos turísticos na cidade \n");
scanf ("%d", &nturisticos);


//Código para exibir na tela os dados da carta 1.

printf ("carta 1: \n");
printf ("Estado: %s\n", estado);
printf ("Código: %s\n", cdgcarta);
printf ("Nome da cidade: %s\n", ncidade);
printf ("População: %d\n", populacao);
printf ("Àrea: %f km²\n", area);
printf ("PIB: %f bilhões de reais\n", pib);
printf ("Números de Pontos Turísticos: %d\n", nturisticos);


// Segunda fase inserindo os codigos da carta 2.

printf ("Agora vamos inserir os dados da carta 2 \n");
printf ("Insira uma letra de 'A' a 'H' representando um dos oito estados. \n");
scanf ("%s", &estado_b);
printf ("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
scanf ("%s", &cdgcarta_b);
printf ("Insira o nome da cidade \n");
scanf ("%s", &ncidade_b);
printf ("Insira o número de habitantes da cidade \n");
scanf ("%d", &populacao_b);
printf ("Isinra a área da cidade em quilômetros quadrados \n");
scanf ("%f", &area_b);
printf ("Insira o PIB (Produto Interno Bruto da cidade) \n");
scanf ("%f", &pib_b);
printf ("Insira a quantidade de pontos turísticos na cidade \n");
scanf ("%d", &nturisticos_b);


// Código para exibir na tela os dados da carta 2.


printf ("carta 2: \n");
printf ("Estado: %s\n", estado_b);
printf ("Código: %s\n", cdgcarta_b);
printf ("Nome da cidade: %s\n", ncidade_b);
printf ("População: %d\n", populacao_b);
printf ("Àrea: %f km²\n", area_b);
printf ("PIB: %f bilhões de reais\n", pib_b);
printf ("Números de Pontos Turísticos: %d\n", nturisticos_b);





return 0;
}