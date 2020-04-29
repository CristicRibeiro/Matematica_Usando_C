/*
Autor: Cristina Ribeiro
Algoritmo: Calcular media e situacao do aluno - com Struct

Lendo string com espaco entre palavras: scanf("%[^\n]s", .....)
ideal usar fflush(stdin) para limpar o buffer.
*/


/*
Exercicio:
Escreva um programa que leia, para cada aluno, seu nome e três notas. Estes dados deverão ser armazenados
em um vetor de estruturas, pois vários alunos deverão ser digitados pelo usuário. Exemplo de entrada de
dados para 3 alunos:

O programa deve ler estes dados e imprimir os valores lidos, a média das notas e se o aluno foi aprovado
ou não (media >= 5).
O programa deverá também informar o total de alunos,quantos foram aprovados e quantos foram reprovados.

O formato de saída é:
Jose Gabriel da Silva
Notas: 10.0  9.0   8.0
Media: 9.0
Situacao:  Aprovado


 Total de alunos: 3
 Total de alunos aprovados: 3
 Total de alunos reprovados: 0
 */




#include <stdio.h>
#include <string.h>



/*Declarando Struct*/
typedef struct {
    char nomeAluno [20];
    float nota1, nota2, nota3;
    float media;
    char situacao;
}CadastroAluno;


int main(){
    int cont, n, auxApr=0, auxRep=0;



    printf("digite o total de cadastros: \n");
    scanf("%d", &n);

    /*Declarando vetor de Struct do tipo CadastroAluno e tendo tamanho que foi digitado pelo usuario*/
    CadastroAluno aluno[n];


    /*preenchendo vetor*/
    for (cont=0; cont<n; cont++){
        printf("digite o nome do aluno: \n");
        fflush(stdin);
        scanf("%[^\n]s", aluno[cont].nomeAluno);
        fflush(stdin);
        printf("digite a nota 1: \n");
        scanf("%f", &aluno[cont].nota1);
        printf("digite a nota 2: \n");
        scanf("%f", &aluno[cont].nota2);
        printf("digite a nota 3: \n");
        scanf("%f", &aluno[cont].nota3);

    }



    for (cont=0; cont<n; cont++){
        /*calculando media de todos os alunos do vetor*/
        aluno[cont].media = (aluno[cont].nota1+aluno[cont].nota2+aluno[cont].nota3)/3;

        /*printando na tela informacoes  dos alunos do vetor*/
        printf("\nAluno: %s", aluno[cont].nomeAluno);
        printf("\nNotas: %.1f %.1f %.1f\n", aluno[cont].nota1, aluno[cont].nota2, aluno[cont].nota3);
        printf("Media: %.1f\n", aluno[cont].media);

        /*aproveitando o for, verifica se aluno foi aprovado ou nao*/
        if (aluno[cont].media>=5){
            auxApr++;
            printf("Situacao: Aprovado");
        }
        else{
            printf("Situacao: Reprovado");
            auxRep++;
        }


    }

    /*mostrando total de  alunos, toal de aprovados e reprovados*/
    printf("\nTotal de alunos: %d", n);
    printf("\nTotal de alunos aprovados: %d", auxApr);
    printf("\nTotal de alunos reprovados: %d", auxRep);


return 0;
}
