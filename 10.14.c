#include<stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("��ż��");
//	else
//		printf("������");
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
			printf("��ż��");
		}
		else
		{
			printf("������");
		}
	}
	else
		printf("������");
	return 0;
}