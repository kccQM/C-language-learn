#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		sum = arr[i] + sum;
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	double avg = sum / 10.0;
	printf("sum=%d\n", sum);
	printf("avg=%.2f\n", avg);
	printf("max=%d min=%d\n", max, min);
	return 0;
}