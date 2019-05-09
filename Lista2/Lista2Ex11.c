#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,fx;

    scanf("%lf",&x);

    if(x<=1)
    {
        fx = 1;
        printf("%.1lf\n",fx);
    }
    else
    {
     if(x<=2)
     {
         fx = 2;
         printf("%.1lf\n",fx);
     }
    }
    if(x>2 && x<=3)
    {
        fx = x*x;
        printf("%.1lf\n",fx);
    }
    else if(x>3)
    {
        fx = x*x*x;
        printf("%.1lf\n",fx);
    }






    return 0;
}
