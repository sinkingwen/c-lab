#include<stdio.h>
int main() {
	int i, a, n, sum = 1, temp;
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		a = i;
		do {
			temp = a % 10;
			a = a / 10;
			if (temp == 1)
				sum++;
		} while (a != 0);
	}
	printf("%d\n", sum);
	return 0;
}
