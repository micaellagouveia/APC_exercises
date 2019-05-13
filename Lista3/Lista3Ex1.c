#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,peso;
    int soma=0;

    for(f=1; f<=30; f++){
    scanf("%d",&peso);
    soma = soma+peso;
    }
    printf("%d",soma);

    return 0;
}
