#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float r(int Ax,int Ay,int Bx,int By)
{
    return sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
}

int main()
{
    //FILE* fA = fopen("Coord.txt","r");

    //if (fA == NULL)
    //{
    //    printf("Can not open file");
    //    return -1;
    //}

    int n,minr,i,imin;

    //fscanf(fA,"%d",&n);
    scanf("%d",&n);

    int* Ax = malloc(n*sizeof(int));
    int* Ay = malloc(n*sizeof(int));

    for (i=0;i<n;i++) //Start = A[0], End = A[n-1]
    {
        //fscanf(fA,"%d %d",&Ax[i],&Ay[i]);
        scanf("%d %d",&Ax[i],&Ay[i]);
    }

    int xmn,ymn; //mn = middle of nowhere
    xmn=1;
    ymn=1;
    for (i=0;i<n;i++)
    {
        xmn= xmn+ Ax[i]*2;
        ymn= ymn+ Ay[i]*2;
    }

     int k=1;
     int c=0; //current position


    while (k<n-1)
    {
        minr=r(Ax[c],Ay[c],xmn,ymn);
        imin=-1;
        for (i=0;i<n;i++)
        {
            if ( (i!=c)&& (i!=n-1) && (r(Ax[c],Ay[c],Ax[i],Ay[i])<minr))
            {
                minr = r(Ax[c],Ay[c],Ax[i],Ay[i]);
                imin = i;
            }

        }
        printf("%d step: go to A%d x=%d y=%d \n",k,imin,Ax[imin],Ay[imin]);
        k=k+1;
        Ax[c] = xmn;
        Ay[c] = ymn;
        c= imin;
    }
    printf("On the last step: go to the final destination (B) x=%d y=%d \n",Ax[n-1],Ay[n-1]);
    //fclose(fA);

free(Ay); free(Ax);
    return 0;
}
