 #define M 5
 #define N 5
 int main()
 {
     int a[M][N];
     int i, j, k, max, min, flag;
     for (i = 0; i < M; i++)
         for (j = 0; j < N; j++)
             scanf("%d", &a[i][j]);
     int maxj;
     for (i = 0; i < M; i++)
     {
         max = a[i][0];
         maxj = 0;
         for (j = 0; j < N; j++)
         {
             if (a[i][j] > max)
             {
                 max = a[i][j];
                 maxj = j;
             }
         }
         flag = 1; //假设这个数是鞍点
         for (k = 0; k < M; k++)
         {
             if (max > a[k][maxj])
             {
                 flag = 0;
                 continue;
             }
         }
         if (flag)
         {
			 printf("%d %d %d\n", i+1, maxj+1, max);
             break;
         }
     }
     if (!flag)
     {
         printf("not found\n");
     }
     return 0;
 }
