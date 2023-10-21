#include <stdio.h>
#include <math.h>

int main()
{
	int a, b = 0, m, i;
	scanf("%d", &m);
	a = m;
	while (a)
	{
		b = b * 10 + a % 10;
		a = a / 10;
	}
	printf("%d\n", b);
	a = b;
	b = 0;
	i = 0;
	while (a)
	{
		b = b + a%7*pow(10,i);
		a = a / 7;
		i++;
	}
	printf("%d\n", b);
	return 0;
}
