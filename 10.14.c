#include<stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("是偶数");
//	else
//		printf("是奇数");
//
//	return 0;
//}

int main()
{
	int num = 0;
	scanf("%d\n", &num);
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			printf("是偶数");
		}
		else
		{
			printf("是奇数");
		}
	}
	else
		printf("非正数");
	return 0;
}