#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,x1,x2,x3;
  scanf("%d",&n);
  if ((n==1)||(n==2))
  {
      printf("Result = 1");
      return 0;
  }
  x1=1;
  x2=1;
  for (i=3;i<=n;i++)
  {
      x3=x2+x1;
      x1=x2;
      x2=x3;
  }
  printf("Result = %d",x3);
    return 0;
}
