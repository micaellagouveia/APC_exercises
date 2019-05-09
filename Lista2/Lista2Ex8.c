#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sm;
    double s1,s2,s3,s4;

    scanf("%lf",&sm);

    if(sm<=500)
    {
        s1 = sm*0;
      printf("%.2lf\n",s1);
    }

        else if(sm>500)
        {
            if(sm<=1000)
            {
                s2 = sm*0.3;
                printf("%.2lf\n",s2);
            }
        }

            if(sm>1000)
            {
                if(sm<=3000)
                {
                    s3 = sm*0.4;
                    printf("%.2lf\n",s3);
                }
            }

                    if(sm>3000)
                    {
                        s4 = sm*0.5;
                        printf("%.2lf\n",s4);
                    }





    return 0;
}
