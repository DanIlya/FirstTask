#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for (i=0;i<=n;i++)
    {
        printf("%d ",C(i,n));
    }

    return 0;
}
int C(int k,int n)
    {
        if ((k==n) || (k==0))
        {
            return 1;
        }
     return C(k,n-1)+C(k-1,n-1) ;
    }
