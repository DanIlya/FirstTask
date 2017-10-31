#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",F(n));
    return 0;
}
int F(int n)
{
    if ((n==2)||(n==1))
    {
        return 1;
    }
    return F(n-1)+F(n-2);
}
