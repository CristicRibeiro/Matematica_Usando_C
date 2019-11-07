/*
Autor: Cristina Ribeiro

Codigo para realizar quatro operacoes matematicas:
soma, subtracao, multiplicacao, divisao
*/


#include <stdio.h>


int main(){

/* declaracao de variaveis */
float num1, num2;
int operacao;
float resultado;


printf("Digite o primeiro numero: ");
scanf("%f", &num1); /* armazenando na variavel o numero digitado pelo usuario */

printf("Digite o segundo numero: ");
scanf("%f", &num2);

printf("\ndigite 1 para soma.\n");
printf("\ndigite 2 para subtracao. \n");
printf("\ndigite 3 para multiplicacao. \n");
printf("\ndigite 4 para divisao. \n");
scanf("%d", &operacao); /* armazenando na variavel a operacao digitada pelo usuario */


    if (num2==0 && operacao==4){ /* verificando se divisor eh igual a zero */
        printf("nao ha divisao por zero!!");
    }
    else{
        switch (operacao){
        case 1:
            resultado = num1+num2;
            printf("o resultado da soma eh: %.2f\n", resultado);
            break;

        case 2:
            resultado = num1-num2;
            printf("o resultado da subtracao eh: %.2f\n", resultado);
            break;

        case 3:
            resultado = num1*num2;
            printf("o resultado da multiplicacao eh: %.2f\n", resultado);
            break;

        case 4:
            resultado = num1/num2;
            printf("o resultado da divisao eh: %.2f\n", resultado);
            break;
        }
    }

return 0;
}
