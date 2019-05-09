#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario,gratificacao;
    float imposto;
    float liquido;

    scanf("%lf",&salario);

    gratificacao = salario * 0.05;
    imposto = salario * 0.07;

    liquido = salario + gratificacao - imposto;

    printf("%.2f\n",imposto);
    printf("%.2f\n",liquido);


        return 0;
}
