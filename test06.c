#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入一个 n 阶方阵，分别求主对角线元素之和与副对角线元素之和。
int main()
{
	int n = 0;
	int arr[10][10] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int o = 0; o < n; o++)
		{
			scanf("%d", &arr[i][o]);
		}
	}

	int a = 0;
	int b = 0;
	for (int i = 0; i < n; i++)
	{
		a = arr[i][i] + a;
		b = arr[i][n - i - 1] + b;
	}
	printf("主对角线和=%d\n副对角线和=%d", a, b);

	return 0;
}