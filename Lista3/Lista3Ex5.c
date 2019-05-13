#include <stdio.h>
#include <stdlib.h>

int main()
{
    double D,TJ,rendimento,saldo,soma;
    int T,t=0;

    scanf("%lf",&D);
    scanf("%lf",&TJ);
    scanf("%d",&T);

    soma = D;
    do
    {
        rendimento = soma*(TJ/100.0);
        soma += rendimento;
        printf("Rendimento no mes %d: %.2lf\n",t,rendimento);
        t ++;
    }
    while(t<T);


    printf("Saldo final do investimento: %.2lf",soma);




    return 0;
}
