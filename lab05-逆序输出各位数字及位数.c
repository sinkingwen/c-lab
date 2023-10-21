#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,t;
 scanf("%d",&i);
 for(int j=1;;j++)
 {
     t=i%10;
     i/=10;
     printf("%d ",t);
     if(i==0)
     {
         printf("%d",j);
         break;
     }
 }
    return 0;
}
