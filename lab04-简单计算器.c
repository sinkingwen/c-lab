#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int parg1, parg2;
	char op;
	scanf("%d %d %c", &parg1, &parg2, &op);
	switch (op)
	{
	case '+':
		printf("%d\n", parg1 + parg2);
		break;
	case '-':
		printf("%d\n", parg1 - parg2);
		break;
	case '*':
		printf("%d\n", parg1 * parg2);
		break;
	case '/':
		if (parg2 != 0)
			printf("%d\n", parg1 / parg2);
		else
			printf("Divided by zero!\n");
		break;
	default:
		printf("Invalid operator!");
	}
	return 0;
}
