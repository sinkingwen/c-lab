#include<stdio.h>
int main()
{
	int i = 1, N = 0;
	double sum = 0, a = 1, b = 2;
	scanf("%d", &N);
	while (i <= N)
	{
		double temp = 0;
		sum = sum + b / a;
		temp = b;
		b = a + b;
		a = temp;
		i++;
	}
	printf("%0.2lf", sum);
	return 0;
}
