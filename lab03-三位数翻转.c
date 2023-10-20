#include<stdio.h>
int main()
{
	int num,digit1,digit2,digit3;
	scanf("%d", &num);
	digit1 = num / 100;
	digit2 = (num / 10) % 10;
	digit3 = num % 10;
	printf("%d", digit1 + 10 * digit2 + 100 * digit3);
	return 0;
}
