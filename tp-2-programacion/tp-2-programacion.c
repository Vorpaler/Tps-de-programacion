#include <stdio.h>

int main()
{
    int N,M,i,resta;
    float comb;
    printf("Ingrese un valor N y un M seguido de un espacio");
    scanf("%d %d",&N,&M);
    //printf("\n este es N: %d y este es M: %d",N,M);

    if(M>=N && N>=0 )
    {    resta=M-N;

        if(M-N==0)
        {
            resta=1;
        }

        for(i=resta-1;i>0;i--)
        {
            resta=resta*i;
        }

        printf("\n El primer factorial de la resta es %d",resta);

        for(i=N-1;i>0;i--)
        {
            N=N*i;
        }

        printf("\n El factorial N es: %d",N);
        for(i=M-1;i>0;i--)
        {
            M=M*i;
        }

        printf("\n El factorial de M es %d",M);

        comb=M/(N*resta);

        printf("\n La combinatoria es: %f",comb);
    }
    else
    {
        printf("No se puede hacer");
    }



    return 0;
}
