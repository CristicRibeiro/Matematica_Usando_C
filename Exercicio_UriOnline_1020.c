/*
Autor: Cristina Ribeiro
Codigo: Calcular dia, mes e ano de uma idade
Uri Online Judge
*/

/*Leia um valor inteiro correspondente à idade de uma pessoa (em dias) e imprima-o em anos,
meses e dias, seguido de sua respectiva mensagem “ano (s)”, “mes (es)”, “dia (s)”.
Nota: apenas para facilitar o cálculo, considere o ano inteiro com 365 dias e 30 dias por mês. Nos casos de teste, nunca haverá uma situação que permita 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com o objetivo de testar um raciocínio matemático simples.
O arquivo de entrada contém 1 valor inteiro.
Imprima a saída, como no exemplo a seguir.*/



#include <stdio.h>

int main(){
    int valor, dia, mes, ano;

    /*Lendo valor digitado*/
    scanf("%d", &valor);


    ano = (valor/365); /*calculando ano*/
    mes = (valor-(ano*365))/30; /*calculando mes*/
    dia = (valor-(ano*365)-(mes*30)); /*calculando dia*/

    /*imrprimindo resultado*/
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)", dia);
    printf("\n");

return 0;
}
