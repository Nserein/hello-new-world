#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = 0;
//	do
//	{
//		cnt++;
//		n = n / 10;
//	} while (n);
//	printf("%d\n", cnt);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	printf("输入数字\n");
//	scanf("%d", &a);
//	switch(a % 3)
//	{
//	case 0:
//		printf("为三的倍数\n");
//		break;
//	case 1:
//		printf("余数为一\n");
//		break;
//	case 2:
//		printf("余数为二\n");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("周一\n");
//		break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//
//	}
//	return 0;
//}

//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//int main()
//{
//	int num = 0;
//	printf("输入目标数字\n");
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num%10);
//		num /= 10;
//	}
//	return 0;
//}

//while循环
//int main()
//{
//	int num = 0;
//	while (num<10)
//	{
//		printf("%d ", num);
//		num++;
//	}
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//do while循环
//int main()
//{
//	int a = 1;
//	do
//	{
//		printf("%d\n", a);
//		a++;
//	} while (a<=10);
//	return 0;
//}


//打印输入数字的位数
//int main()
//{
//	int num = 0;
//	printf("输入目标数字\n");
//	scanf("%d", &num);
//	int a = 0;
//	do 
//	{
//		a++;
//		num /= 10;
//	} while (num);
//			printf("是%d位数\n", a);//得出目标数字位数
//	return 0;
//}

//打印100以内素数
//int main()
//{
//	int a = 0;
//	for (a = 2; a < 100; a++)//打出100以内的数字
//	{
//		int b = 0;
//		int c = 1;
//		for (b = 2; b < a; b++)//打出所有比a小的数字
//		{
//		
//			if (a % b == 0)
//			{
//				c = 0;
//				break;
//			}
//		
//		}
//		if ( c == 1)
//			printf("%d ", a);
//	}
//	return 0;
//}


//goto 语句
int main()
{
	printf("hehe\n");
	goto next;
	printf("haha\n");

next:
	printf("跳过了haha的打印\n");
	return 0;
}

//可以跳出到目标位置，而break只能跳出一个循环