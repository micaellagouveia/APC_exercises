#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, potencia;


    if(a && b > 0)
    {
        scanf("%lf",&a); scanf("%lf",&b);

        potencia = pow(a,b/1.0);

        printf("%.1lf\n",potencia);
    }

    if(a&&b<=0)
    {
        printf("OPERACAO INVALIDA\n");
    }
    return 0;
}
