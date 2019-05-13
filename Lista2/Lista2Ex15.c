#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;
    char operacao;
    double raiz;//um numero
    double n1,n2,n3;
    double soma,subtracao,multiplicacao,divisao,modulo,potenciacao;//dois numeros
    double bascara1,bascara2,d;//tres numeros

    scanf("%c",&operacao);

    //****************************************************************************************************

    if(operacao=='+' || operacao=='-' || operacao=='*' || operacao=='/' || operacao=='%' || operacao=='p'){

    scanf("%lf",&n1);
    scanf("%lf",&n2);
    //****************************************************************************************************
    if(operacao=='+'){
    soma=n1+n2;
    printf("%.3lf",soma);
    }

        else if(operacao=='-'){
            subtracao = n1-n2;
            printf("%.3lf",subtracao);
        }

            if(operacao=='/'){

                if(n2!=0){
                divisao = n1/n2;
                printf("%.3lf",divisao);
                }

                else {
                    printf("ERROR!");
                    return 0 ;}
            }

                    if(operacao=='*'){
                        multiplicacao = n1*n2;
                        printf("%.3lf",multiplicacao);
                    }

                        else if(operacao=='p'){

                            if(n1<0){
                                if (n2 == (int)n2){
                                a = (int)n2;
                                potenciacao = pow(n1,a);
                                printf("%.3lf",potenciacao);
                                }
                                else{
                                    printf("ERROR!");
                                    return 0;
                                }}
                            else{
                                potenciacao = pow(n1,n2);
                                printf("%.3lf",potenciacao);
                            }
                        }

                            if(operacao=='%'){
                                    if(n1==(int)n1 && n2==(int)n2){

                                    if(n2!=0 ){
                                    a=(int)n1;
                                    b=(int)n2;
                                        modulo= a%b;
                                        printf("%.3lf",modulo);}
                                        else{
                                          printf("ERROR!");
                                          return 0;
                                        }
                                        }


                           else{
                            printf("ERROR!");
                            return 0 ;
                           }
                           }

    }
    //*******************************************************************************************************************//
    if(operacao == 'r'){

    scanf("%lf",&n1);

    if(n1>=0){
        raiz = sqrt(n1);
        printf("%.3lf",raiz);
        }

        else {
            printf("ERROR!");
            }
    }
    //********************************************************************************************************************//
    if(operacao=='b'){

    scanf("%lf",&n1);
    if(n1==0){
        printf("ERROR!");
    }
    else{
    scanf("%lf",&n2);
    scanf("%lf",&n3);

    d = (n2*n2) - (4*n1*n3);

    if(d>0){
    bascara1 = (-n2 + sqrt(d))/(2*n1);
    bascara2 = (-n2 - sqrt(d))/(2*n1);}
    else{
        printf("ERROR!");
        return 0;}


        printf("%.3lf ",bascara1); printf("%.3lf",bascara2); }

    }
    //******************************************************************************************************************//

    return 0;
}
