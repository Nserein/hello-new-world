#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int rand(void)
//{
//
//	int input = 0;
//	do
//	{
//		printf("************************\n");
//		printf("*******  1.play  *******\n");
//		printf("*******  0.exit  *******\n");
//		printf("************************\n");
//
//		printf("请做出选择\n");
//		scanf("%d", &input);
//	} while ();
//	
//	return 0;
//}


//以时间为种子生成随机数
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}





//猜数字游戏
// 
// 
// 
void menu()
{
	
    printf("\n************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
	printf("请输入您的选择\n");
}

void game()
{
	printf("尊敬的玩家，游戏现在开始\n");//1.生成随机数 1到100
	int rad = rand()%100+1;//让这个随机数%100从而得到0到99的数字，再加一即为1到100
	int guess = 0;
	int count = 5;//设置可猜的次数
	
	while(count)
	{
		printf("输入所猜测的数字\n");
		count--;
		scanf("%d", &guess);
		printf("\n你还有%d次机会\n", count);
		if (guess == rad)
		{
			printf("恭喜你哦，猜对了\n");
			break;
		}
		else if (guess < rad)
		{
			printf("猜小了，再试试吧\n");
		}
		else 
		{
		printf("猜大了，再试试吧\n");
		}
	}
	if (count == 0)
	{
		printf("本次游戏结束啦,正确结果是%d\n", rad);
	}
}

int main()
{
    int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	
	} while (input);
	return 0;
}


