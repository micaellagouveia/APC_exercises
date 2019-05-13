#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada,saida,hora1,min1,hora2,min2;
    int MinHora1,MinHora2,tempoE,tempoS;
    int duracao,valor;

    scanf("%d",&entrada);scanf("%d",&saida);

    hora1 = entrada/100; min1 = entrada%100;
    hora2 = saida/100; min2 = saida%100;
    MinHora1 = hora1*60; MinHora2 = hora2*60;
    tempoE = MinHora1 + min1; tempoS = MinHora2 + min2;

    if(tempoE>tempoS){
        duracao = tempoE - tempoS;
        }
    else{
        duracao = tempoS - tempoE;
        }

        if (duracao<=15){
            valor = 0;
            }
        else{
            if(duracao<=60){
                valor = 30*duracao;

                }
            }


                if(duracao>60 && duracao<=120){
                    valor = 20*(duracao-60) + 1800;
                }

                    else if(duracao>120){
                        valor = 10*(duracao - 120) + 3000;
                    }


                        if(hora1<10){
                            printf("Entrada\n0%d",hora1);
                        }

                        else{
                            printf("Entrada\n%d",hora1);
                        }


                            if(min1<10){
                                printf(":0%d\n",min1);
                            }

                            else{
                                printf(":%d\n",min1);
                            }


                                if(hora2<10){
                                    printf("Saida\n0%d",hora2);
                                }

                                else{
                                    printf("Saida\n%d",hora2);
                                }

                                    if(min2<10){
                                        printf(":0%d\n",min2);
                                    }

                                    else{
                                        printf(":%d\n",min2);
                                    }


    printf("Duracao(min)\n%d\n",duracao);
    printf("Preco(centavos)\n%d\n",valor);

    return 0;
}
