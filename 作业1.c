#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	for (int a = 1; a <= 100; a++)
//		if (a % 2 == 1)
//			printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//		a++;
//     }
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("输入三个整数；\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		d = a;
		a = b;
		b = d;
    }
	if (a < c)
	{
		d = a;
		a = c;
		c = d;
	}
	if (b < c)
	{
		d = b;
		b = c;
		c = d;
	}
	
	printf("从大到小依次输出：\n%d %d %d", a, b, c);
	return 0;
}

