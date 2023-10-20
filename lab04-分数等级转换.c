#include <stdio.h>

int main() {
	int a, b, c;
	int r = scanf("%d%d%d", &a, &b, &c);
	if (a >= 90 && a <= 100) {
		printf("A ");
	}
	else if (a >= 80 && a < 90) {
		printf("B ");
	}
	else if (a >= 70 && a < 80) {
		printf("C ");
	}
	else if (a >= 60 && a < 70) {
		printf("D ");
	}
	else if (a < 60) {
		printf("E ");
	}
	if (b >= 90 && b <= 100) {
		printf("A ");
	}
	else if (b >= 80 && b < 90) {
		printf("B ");
	}
	else if (b >= 70 && b < 80) {
		printf("C ");
	}
	else if (b >= 60 && b < 70) {
		printf("D ");
	}
	else if (b < 60) {
		printf("E ");
	}

	if (c >= 90 && c <= 100) {
		printf("A ");
	}
	else if (c >= 80 && c < 90) {
		printf("B ");
	}
	else if (c >= 70 && c < 80) {
		printf("C ");
	}
	else if (c >= 60 && c < 70) {
		printf("D ");
	}
	else if (c < 60) {
		printf("E ");
	}
	int average = (a + b + c) / 3;
	printf("%d", average);
	return 0;
}
