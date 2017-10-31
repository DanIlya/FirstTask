#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double m,M,s;
    scanf ("%lf %lf",&m,&M);


    while ((M-m)>0.0000000002)
    {
        s=m+(M-m)/2;
        if (tan(s)<s)
        {
            m=s;
        }
        else
        {
            M=s;
        }
    }
    s=m+(M-m)/2;
    printf("Answer is %.10lf",s);
    return 0;
}
