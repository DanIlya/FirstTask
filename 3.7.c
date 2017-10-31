#include <stdio.h>
#include <stdlib.h>

int count(int N,int W, int j) //schitaet nomer ocherednogo vibivhego
{
    while(W>=N)
    {
        W=W-N;
    }
    if (j+W<=N+1)
    {
        j=j+W-1;
    }
    else //if(j+W>N+1)
    {
        j=j+W-N-1;
    }

    if (j==0)
    {
        j=N;
    }
    //else
    //{
    //    j=N;
    //}
    return j;
}

int main()
{
    int N,Nc,W,i,j,k,c;
    scanf("%d %d",&N,&W);
    int* Ar = malloc((N+1)*sizeof(int));

    Nc=N;
    for (i=1;i<=N;i++)
    {
        Ar[i]=i;
    }
    j=1;
    for (i=1;i<=Nc;i++)
    {
        c=count(N,W,j);
        //printf("%d viletel %d \n",i,Ar[c]);
        if (i>=Nc-2)
        {
            printf("%d  ",Ar[c]);
        }
        for (k=c;k<N;k++)
        {
            Ar[k]=Ar[k+1];
        }
        if (c==N)
        {
            j=1;
        }
        else
        {
            j=c;
        }

        N=N-1;
    }

    //printf("Check: N=%d W=%d \n",N,W);
    //printf("Nomera poslednih 3: %d %d %d",Ar[1],Ar[2],Ar[3]);



    return 0;
}






