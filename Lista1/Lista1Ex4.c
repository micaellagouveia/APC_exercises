#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, percentual,aumento, novosalario;

scanf("%lf",&salario); scanf("%lf",&percentual);

aumento =salario*percentual/100;
novosalario = salario + aumento;

printf("%.2lf\n",aumento); printf("%.2lf\n",novosalario);
    return 0;
}
