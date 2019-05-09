#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AnoNascimento,AnoAtual;
    int IdAtual,Id2017;

    scanf("%d" "%d",&AnoNascimento,&AnoAtual);


    IdAtual = AnoAtual-AnoNascimento;

    Id2017 = (2017 + IdAtual) - AnoAtual;

    printf("%d " "%d",IdAtual,Id2017);



    return 0;
}
