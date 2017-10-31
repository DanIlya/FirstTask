#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sqr(int x)
{
    return x*x;
}

int main()
{
    int x,y,x1,y1;
    double r[3];
    int i;
    scanf("%d %d",&x1,&y1);

    for (i=1;i<4;i++)
    {
        scanf("%d %d",&x,&y);
        r[i]=sqrt(sqr(x-x1)+sqr(y-y1));
    }
    double r0;

    for (i=1;i<3;i++) //цикл достаточно повторить два раза для полной сортировки (тк всего 3 эл-та)
    {
        if (r[i]<r[i+1])
        {
            r0=r[i];
            r[i]=r[i+1];
            r[i+1]=r0;
        }
    }
    for (i=1;i<3;i++)
    {
        if (r[i]<r[i+1])
        {
            r0=r[i];
            r[i]=r[i+1];
            r[i+1]=r0;
        }
    }
    printf("r1=%.2f r2=%.2f r3=%.2f ",r[1],r[2],r[3]);

    printf("Result = %.2f",r[3]*r[2]);

    return 0;
}
