#include <stdio.h>

int main()
{
    int N,i;

    printf("ingrese el numero que quiera factorear: ");
    do
    {
        scanf("%d",&N);
    }while(N<0);

    if(N!=0)
    {
        for(i=N-1;i>0;i--)
        {
            N=N*i;
        }
        printf("el factorial es: %d",N);
    }
    else
    {
        printf("el factorial es 1");
    }

    return 0;
}
