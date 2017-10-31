#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,M,i,x;
    scanf("%d",&n);
    scanf("%d",&M);
    for (i=2;i<=n;i++)
    {
        scanf("%d",&x);
        if (x>M)
        {
            M=x;
        }
    }
    printf("Max = %d",M);
    return 0;
}

