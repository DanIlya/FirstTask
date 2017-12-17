#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float r(int Ax,int Ay,int Bx,int By)
{
    return sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
}

int main()
{
    int n,minr,i,imin;

    scanf("%d",&n);

    int* Ax = malloc(n*sizeof(int));
    int* Ay = malloc(n*sizeof(int));

    for (i=0;i<n;i++) //Start = A[0], End = A[n-1]
    {
        scanf("%d %d",&Ax[i],&Ay[i]);
    }

     int k=1;
     int c=0; //current position

     int Nconst = n;
     int j;
     while (k<Nconst-1)
     {
        if (c < n-2)
        {
            minr=r(Ax[c],Ay[c],Ax[c+1],Ay[c+1]);
            imin=c+1;
        }
        else
        {
            minr=r(Ax[c],Ay[c],Ax[c-1],Ay[c-1]);
            imin=c-1;
        }
        for (i=1;i<n;i++)// find the nearest point
        {
            if ( (i!=c)&& (i!=n-1) && (i!=0) && (r(Ax[c],Ay[c],Ax[i],Ay[i])<minr))
            {
                minr = r(Ax[c],Ay[c],Ax[i],Ay[i]);
                imin = i;
            }

        }
        printf("%d step: go to x=%d y=%d \n",k,Ax[imin],Ay[imin]);
        k=k+1;
        for (j = c; j<n-2; j++)//Delete already visited point
        {
            Ax[j] = Ax[j+1];
            Ay[j] = Ay[j+1];
        }
        n = n-1;
        if (imin > c)//correct c after deleting
        {
           c= imin -1;
        }
        else
        {
            c = imin;
        }

    }
    printf("On the last step: go to the final destination (B) x=%d y=%d \n",Ax[Nconst-1],Ay[Nconst-1]);

    free(Ay); free(Ax);
    return 0;
}
