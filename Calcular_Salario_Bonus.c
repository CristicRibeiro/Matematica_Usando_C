Faça um programa que leia o nome do vendedor, seu salário fixo e o total da venda feito por si mesmo no mês (em dinheiro).
Considerando que este vendedor recebe 15% sobre todos os produtos vendidos, escreva o salário final (total) desse vendedor no final do mês,
com duas casas decimais.
- Não se esqueça de imprimir o final da linha após o resultado, caso contrário, você receberá o " Erro de apresentação ".
- Não esqueça os espaços em branco.
O arquivo de entrada contém um texto (nome do funcionário) e dois valores de precisão dupla, 
que são o salário do vendedor e o valor total vendido por ele.
Imprima o salário total do vendedor, de acordo com o exemplo fornecido.



#include <stdio.h>

int main() {
    /*Declaracao de variaveis*/
    int HorasTrab, comissao;
    float valorVenda, SALARIO, TOTAL;
    char NOME;

  /*Lendo o que o usuario digitou*/
    scanf("%s", &NOME);
    scanf("%f", &SALARIO);
    scanf("%f", &valorVenda);

    /*Calculando valor*/
    TOTAL = ((valorVenda/100)*15)+SALARIO;

    /*Imprimindo na tela*/
    printf("TOTAL = R$ %.2f", TOTAL);
    printf("\n");

return 0;
}
