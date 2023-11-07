#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int num = 0;
//	scanf("%d\n", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("是偶数");
//		else
//			printf("是奇数");
//	}
//	else
//		printf("非正数");
//	return 0;
//}

//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    if (a > b)
//        printf("%d>%d", a, b);
//    
//    
//    
//        if (a == b)
//            printf("%d=%d", a, b);
//        else
//            printf("%d<%d", a, b);
//    
//        return 0;
//    
//}

//int main()
//{
//    int  b;
//    while (scanf("%d", &b) != EOF)
//    { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        for (int a = 1; a <= b; a++)
//        {
//            printf("*");
//
//        }
//        printf("\n");
//
//    }
//    return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("输入你的年龄：\n");
//	scanf("%d", &age);
//	if (age <= 18)
//		printf("少年");
//	else if (age <= 44)
//		printf("青年");
//	else if (age <= 65)
//		printf("中年");
//	else if (age <= 90)
//		printf("老年");
//	else
//		printf("老寿星");
//	
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d",&age);
//	if (age < 18)
//		printf("少年");
//	else
//	{
//		if (age < 44)
//			printf("青年");
//		else
//		{
//			if (age < 59)
//				printf("中年");
//			else
//			{
//				if (age < 89)
//					printf("老年");
//				else
//					printf("老寿星");
//			}
//		}
//	}
//
//	return 0;
//}

int main()
{
	int a = 3;
	if (3 == a)
		printf("答案正确\n");
	return 0;
}