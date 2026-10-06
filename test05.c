#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入 m 和 n，再输入一个 m 行 n 列的矩阵，输出它的转置矩阵。m,n[0,10]
int main()
{
	int arr[10][10] = { 0 };
	int m = 0, n = 0;
	scanf("%d%d", &m,&n);
	for (int i = 0; i < m; i++)
	{
		for (int o = 0; o < n; o++)
		{
			scanf("%d", &arr[i][o]);
		}
	}

	for (int o = 0; o < n; o++)
	{
		for (int i = 0; i < m; i++)
		{

			printf("%d", arr[i][o]);
			if (i != m - 1)
			{
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}