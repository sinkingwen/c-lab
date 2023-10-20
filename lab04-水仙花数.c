#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a/100;
	c=(a/10)%10;
	d=a%10;
	if(a==b*b*b+c*c*c+d*d*d) printf("YES");
	else printf("NO");
	return 0;
}
