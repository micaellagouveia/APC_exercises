#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,mensalidade;

    scanf("%d",&idade);

    if(idade<10)
    {
        printf("R$ 30,00");
    }
    else
    {
        if(idade<=29)
        {
            printf("R$ 60,00");
        }
    }

    if(idade>=30 && idade<=45)
    {
        printf("R$ 120,00");
    }
    else if(idade>=46 && idade<=59)
    {
        printf("R$ 150,00");
    }
    else if(idade>=60 && idade<=65)
    {
        printf("R$ 250,00");
    }
    else if(idade>65)
    {
        printf("R$ 400,00");
    }

    return 0;
}
