#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//判断两个整数之间的素数，并输出
int main()
{
	int a = 0, b = 0, c = 0, d = 0;

	scanf("%d %d", &a, &b);
	for (a; a <= b; a++)
	{
		d = 1;
		for (c = 2; c <= a - 1; c++)
		{
			if (a % c == 0)
			{
				d = 0;
				break;
			}
		}
		if (d == 1)
			printf("%d ", a);
	}
	return 0;
}
