#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,d;
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        d=n%i;
        if (d==0)
        {
            printf("Number %d is divided by %d",n,i);
            return 0;
        }
    }
    printf("%d is a prime number",n);
    return 0;
}
