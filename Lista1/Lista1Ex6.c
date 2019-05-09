#include <stdio.h>
#include <stdlib.h>

int main()
{
    double deposito,juros,impostos;
    float impostopago, liquido;

    scanf("%lf",&deposito);scanf("%lf",&juros); scanf("%lf",&impostos);

    impostopago = deposito*(impostos/100);
    juros = deposito*(juros/100);
    liquido = deposito - juros - impostopago;

    printf("%.2f\n",impostopago);
    printf("%.2f\n",liquido);

    return 0;
}
