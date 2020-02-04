/*Leia os valores de dois pontos flutuantes (float) de dupla precisão A e B, correspondentes a duas notas dos alunos. 
Depois disso, calcule a média do aluno, considerando que a nota A pesa 3,5 e B 7,5. 
Cada nota pode variar de zero a dez, sempre com um dígito após o ponto decimal. 
Não se esqueça de imprimir o final da linha após o resultado, caso contrário, você receberá 
"Presentation Error" . Não esqueça o espaço antes e depois do sinal de igual.
O arquivo de entrada contém os valores de 2 pontos flutuantes com um dígito após o ponto decimal.
Imprima a palavra MÉDIA com 5 dígitos após o ponto decimal e com um espaço em branco antes e após o sinal de igual.*/



#include <stdio.h>

int main(){
    float A, B, MEDIA;
    float NotaA = 3.5, NotaB = 7.5;

    /*lendo o que o usuario digitou*/
    scanf("%f", &A);
    scanf("%f", &B);

     /*calculando média*/
    MEDIA = ((A*NotaA)+ (B*NotaB))/(3.5+7.5);

     /*printando na tela a resposta com 5 casas depois da virgula*/
    printf("MEDIA = %.5f", MEDIA);
    printf("\n");

return 0;
}
