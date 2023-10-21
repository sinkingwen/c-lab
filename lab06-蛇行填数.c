#include<stdio.h>
int a[10][10];    //这里定义全局变量,默认数组每个元素初始化为 0 
int main() {
	int n;
	int k = 0; // 蛇形走位的初始值,每次循环成功 ++k; 
	scanf("%d", &n);
	int x = 1, y = 0;
	while (k < n * n) {
		// a[x][y+1] 是目标位置 
	   //从左往右 , 判断如果没有超过边界并且目标位置没有被覆盖过则可以进行赋值 
		while (y < n && a[x][y + 1] == 0)
		{
			a[x][++y] = ++k;
		}

		//从上往下 , 
		while (x < n && a[x + 1][y] == 0)
		{
			a[++x][y] = ++k;
		}

		//从右往左 
		while (y > 1 && a[x][y - 1] == 0)
		{
			a[x][--y] = ++k;
		}

		//从下往上 
		while (x > 1 && a[x - 1][y] == 0)
		{
			a[--x][y] = ++k;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
