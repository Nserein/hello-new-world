#include <stdio.h>
#include <string.h>

int main()
{
	int a = 0;
	int b = ~a;
	printf("%d\n", b);
	return 0;
}



//[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]
//第一位为符号位，1为负数，0为正数
//
//原码    反码   补码
//只要是整数内存中存储的都是二进制的补码1
// 正数---原码，反码，补码 相同
// 负数：
// 原码                反码                  补码
//     直接按照正负    原码的符号位不变       反码+1            
// 写出的二进制序列    其他位取反得到的
//
// -2
// 1000000000000000000000000000000010-原码
// 1111111111111111111111111111111101-反码
// 1111111111111111111111111111111110-补码
//


//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("较大值是%d\n", max);
//	if (num1 > num2)
//		printf("较大值：%d\n", num1);
//	else
//		printf("较大值：%d\n", num2);
//	return 0;
//}
//求较大值