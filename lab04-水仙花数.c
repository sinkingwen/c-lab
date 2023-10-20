#include<stdio.h>
int main()
{
 int a,b,c,d,e;
 scanf("%d",&e);
 a=e/100;
 d=e%100;
 b=d/10;
 c=d%10;
 if (a*a*a+b*b*b+c*c*c==e)
  printf("YES");
 else printf("NO");
 return 0;
}
