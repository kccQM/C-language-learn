//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
////猜数字游戏
//void menu(void)
//{
//	printf("=====================\n");
//	printf("      猜数字游戏      \n");
//	printf("        开始：1       \n");
//	printf("        退出：0       \n");
//	printf("=====================\n");
//}
//void game(void)
//{
//	int get_input = 0;
//	int num = rand() % 100 + 1;
//
//	printf("游戏开始，请输入数字\n");
//
//	while (1)
//	{
//		if (scanf("%d", &get_input) != 1)
//		{
//			printf("输入错误，请重新输入\n");
//			while (getchar() != '\n');
//			continue;
//		}
//		if (get_input > num)
//		{
//			printf("猜大了！\n");
//		}
//		else if (get_input == num)
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//		else
//		{
//			printf("猜小了！\n");
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 1;
//	while (input)
//	{
//		menu();
//		if (scanf("%d", &input) != 1)
//		{
//			printf("输入错误，请输入1或0\n");
//			while (getchar() != '\n');
//			continue;
//		}
//		if (input == 1)
//			game();
//		else if (input == 0)
//			break;
//		else
//		{
//			printf("输入错误，请输入1或0\n");
//		}
//	}
//	return 0;
//}
