#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int media;

    scanf("%d",&n1);scanf("%d",&n2);

    media = (n1+n2)/2;

    if(media>=7)
    {
        printf("APROVADO");
    }
    else if(media<7)
    {
        if(media<3)
        {
            printf("REPROVADO");
        }
        else
        {
            printf("EXAME");
        }
    }


    return 0;
}
