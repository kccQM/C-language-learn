#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int num0 = rand() % 100 ;
	int num1 = 0;
	int guessed = 0;

	printf("请输入0-100之间的整数。\n");
	for (guessed=1; num1 != num0; guessed++)
	{
		scanf("%d", &num1);
		if (num1 < num0)
		{
			printf("猜小了！\n");
		}
		if (num1 > num0)
		{
			printf("猜大了！\n");
		}
		if (num1 == num0)
		{
			printf("猜对了！\n");
			printf("共猜了%d次，真棒！", guessed);
		}
	}
	return 0;
}