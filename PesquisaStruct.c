/*
Autor: Cristina Ribeiro
Algoritmo: pesquisar no vetor - com Struct e switch

*/

/*
​Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes campos:
marca: string de tamanho 15
ano: inteiro
cor: string de tamanho 10
preço: real
Faça um programa que leia um vetor de carros do tipo da estrutura definida acima.
Mostre um menu com as seguintes opções:


a) Ler um preço e imprimir os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido.
 b)Ler a marca de um carro e imprimir as informações de todos os carros dessa marca (preço, ano e cor).
 c) Ler uma marca, ano e cor e informar se existe ou não um carro com essas características.
 Se existir, informar o preço.
 d) Sair.

 O programa só deverá terminar quando o usuário selecionar a opção “d”.
*/


#include <stdio.h>
#include <string.h>

/*Declarando Struct*/
typedef struct {
    char marca [15];
    int ano;
    char cor [10];
    float preco;

}TipoCarro;



int main(){

    /*Declarando variaveis*/
    int i, tam, compara, comp1, comp2, cont, anoBusca;
    float valorBusca;
    char opcao, marcaBusca[15], corBusca[10];


    printf("digite o total de carros para cadastro: \n");
    scanf("%d", &tam);

    /*Declarando um vetor do TipoCarro*/
    TipoCarro vetor[tam];


    /*preenchendo o vetor*/
    for (i=0; i<tam; i++){
        printf("digite a marca do carro: \n");
        scanf("%s", &vetor[i].marca);
        printf("digite o ano do carro: \n");
        scanf("%d", &vetor[i].ano);
        printf("digite a cor do carro\n");
        fflush(stdin);
        scanf("%[^\n]s", vetor[i].cor);
        fflush(stdin);
        printf("digite o valor do carro: \n");
        scanf("%f", &vetor[i].preco);
        printf("------------------------\n");
    }

    while (opcao != 'd'){
        printf("Escolha uma das opcoes abaixo: \n");
        printf("a) Ler um preco e imprimir os carros (marca, cor e ano) que tenham preco igual ou menor ao recebido\n");
        printf("b) Ler a marca de um carro e imprimir as informacoes de todos carros dessa marca\n");
        printf("c) Ler uma mar, ano e cor e informar se existe ou nao um carro com essas caracteristicas. Se existir, informar o preco\n");
        printf("d) Sair\n");
        scanf("%c", &opcao);

        switch (opcao){
        case 'a':
            printf("digite o valor  para buscar: \n");
            scanf("%f", &valorBusca);

            for (i=0; i<tam; i++){
                if (valorBusca >= vetor[i].preco){
                    printf("Marca: %s\n", vetor[i].marca);
                    printf("Cor: %s\n", vetor[i].cor);
                    printf("Ano: %d\n", vetor[i].ano);
                    printf("------------------------\n");
                    printf("------------------------\n");
                }
            }
        break;

        case 'b':
            printf("Digite a marca que deseja buscar: \n");
            scanf("%s", &marcaBusca);


            for (i=0; i<tam; i++){
                compara = 0;
                compara = strcmp(marcaBusca, vetor[i].marca);

                if (compara ==0){
                    printf("Preco: %.1f\n", vetor[i].preco);
                    printf("Ano: %d\n", vetor[i].ano);
                    printf("Cor: %s\n", vetor[i].cor);
                    printf("------------------------\n");
                    printf("------------------------\n");
                }
             }
             break;

        case 'c':
            printf("Digite a marca, ano e cor para busca: \n");
            printf("apos digitar cada palavra, aperte enter.\n");
            scanf("%s", &marcaBusca);
            scanf("%d", &anoBusca);
            scanf("%s", &corBusca);

            for(i=0; i<tam; i++){

                compara=0;
                comp1=0;
                comp2=0;

                if (anoBusca == vetor[i].ano){
                    comp1=0;
                }

                compara = strcmp(marcaBusca, vetor[i].marca);
                comp2 = strcmp(corBusca, vetor[i].cor);


                if (compara==0 && comp1==0 && comp2==0){
                    printf("Existem carros com estas caracteristicas;\n");
                    printf("Preco: %.1f\n", vetor[i].preco);
                    printf("------------------------\n");
                    printf("------------------------\n");
                }
            }
        break;

        }
    }

return 0;
}
