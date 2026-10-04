#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输入 n 和 n 个整数，用冒泡排序或选择排序将它们从小到大排序后输出。n[0,10]
int main()
{
	int n = 0;
	int temp = 0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);	}

	for (int a = 0; a < n-1; a++)
	{
		{
			for (int i = 0; i < n-1-a; i++)
			{
				if (arr[i] > arr[i + 1])
				{
					temp = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
			printf("%d", arr[i]);
			if (i != n - 1)
			{
				printf(" ");
			}
	}
	return 0;
}