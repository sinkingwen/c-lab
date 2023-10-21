#include<stdio.h>

void shifter(int n);

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	shifter(a);
	printf(" ");
	shifter(b);
	printf(" ");
	shifter(c);
	printf(" ");
	printf("%d", (a + b + c) / 3);
	return 0;
}

void shifter(int n)
{
	if (90 <= n && n <= 100)
		printf("A");
	if (80 <= n && n < 90)
		printf("B");
	if (70 <= n && n < 80)
		printf("C");
	if (60 <= n && n < 70)
		printf("D");
	if (n < 60)
		printf("E");
}
/*
#include<stdio.h>
#include<math.h>

int main(){
	char grade[4];
	int score[3], i, average_score;
	scanf("%d %d %d", &score[0], &score[1], &score[2]);
	average_score = (int)((score[0] + score[1] + score[2]) / 3);
	//grade[3] = '\0';

	for (i = 0; i < 3; i++) {
		if (score[i] >= 90 && score[i] <= 100) {
			grade[i] = 'A';
		}
		else if (score[i] >= 80 && score[i] < 90) {
			grade[i] = 'B';
		}
		else if (score[i] >= 70 && score[i] < 80) {
			grade[i] = 'C';
		}
		else if (score[i] >= 60 && score[i] < 70) {
			grade[i] = 'D';
		}
		else {
			grade[i] = 'E';
		}
		putchar(grade[i]);
		putchar(' ');
	}

	printf("%d", average_score);
	
	return 0;
}
*/
