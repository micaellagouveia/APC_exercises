#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=0;
    int quadrado, cubo;
    float raiz,rcubica;

    scanf("%d",&x);

    if(x>0){
    quadrado = x*x;
    printf("Quadrado: %d\n",quadrado);

    cubo = x*x*x;
    printf("Cubo: %d\n",cubo);

    raiz = sqrt(x);
    printf("Raiz Quadrada: %.1f\n",raiz);

    rcubica = pow(x,1.0/3.0);
    printf("Raiz Cubica: %.1f\n",rcubica);
    }
    if(x<=0){
        printf("OPERACAO INVALIDA");
    }



    return 0;
}


