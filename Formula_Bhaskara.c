/*
Autor: Cristina Ribeiro
Codigo para calcular Formula de Baskara
*/


#include <stdio.h>
#include <math.h> /* incluindo a biblioteca math para operacoes como raiz e potenciacao */


int main() {

/* declarando variaveis */
float a, b, c, delta, result1, result2;


/* imprimindo da tela uma mensagem para o usuario */
printf("a equacao do Segundo Grau eh: a^2 + b - c = 0\n");

printf("\ndigite o valor para o item a\n");
scanf("%f", &a); /* armazenando na variavel */
printf("digite o valor para o item b\n");
scanf("%f", &b);
printf("digite o valor para o item c\n");
scanf("%f", &c);


/* calculando o valor de delta */
delta = pow(b,2)-4*a*c;


/* usando formula de Bhaskara */
result1= ((-b + sqrt(delta))/(2*a));
result2= ((-b -sqrt(delta))/(2*a));

printf("Resultado 1 para x eh: %.2f\n", result1);
printf("Resultado 2 para x eh: %.2f", result2);


/* sqrt é a funcao para calcular raiz de um elemento */

/*
    pow eh a funcao para calcular um elemento elevado a outro
    pow(variável, expoente)

    ex.: 3 elevado a 5 || 3^5 = 32
    pow(3, 5);

 */


return 0;
}
