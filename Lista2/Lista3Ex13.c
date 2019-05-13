#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   float v1,v2,total;
   scanf("%d ""%d",&a,&b);

   switch(a)
   {
       case 1: v1 = 5;
       break;

       case 2: v1 = 7;
       break;

       case 3: v1 = 7.5;
       break;

       case 4: v1 = 3.5;
       break;

       case 5: v1 = 3;
       break;
   }
   switch(b)
   {
      case 1: v2 = 5;
       break;

       case 2: v2 = 7;
       break;

       case 3: v2 = 7.5;
       break;

       case 4: v2 = 3.5;
       break;

       case 5: v2 = 3;
       break;
   }
total = v1+v2;
printf("Total: R$ %.2f\n",total);

    return 0;
}
