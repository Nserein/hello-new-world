#include <stdio.h>
#include <string.h>

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//	return 0;
//}//while循环




//操作符
//算术操作符 + - * / %
//移(二进制）位操作符 >>  <<
//位操作符 &（按位与）； |（按位或）；^(按位异或）
//赋值操作符 =       复合赋值符 +=  -=  *= /=  |=  >>=  <<=  ^=
//单目操作符    !（逻辑反操作）  -（负号）  sizeof(得出操作数的类型长度  以字节为单位）
// 双目操作符
// 三目操作符 
//
//int main()
//{
//	//int a = 5 / 2;
//	//int a = 5 % 2;//  %-----表示余数
//	int a = 1;
//	//整型1占4个字节，32个bit位
//	//00000000000000000000000000000000000001
//	int b=a << 2;
//
//	printf("%d\n", b);
//	return 0;
//}



//011
//101
//001-----只有都是1的时候才会变成1 &
//111-----有1的时候就是1 |
//110-----对应的二进制位相同，则为0；不同为1


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	printf("%d\n", c);
//
//	return 0;
//}



//int main()
//{
//	int a = 20;
//	//a = a + 10;
//	a += 10;//等效
//	int b = 16;
//	//b = b - 10;
//	b -= 10;//等效
//	a = a & 2;
//	a &= 2;//等效
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = 20;
	//a+b//+双目操作符，对两个操作

	//C语言中把0为假，非零为真
	//int a = 10;
	//printf("%d\n", a);
	//printf("%d\n",!a);
	//int a =4;
	//printf("%d\n",sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);//不可使用

	int arr[10] = {0};//十个整型元素的数组
	//10*sizeof(int)=40	
	int sz = 0;
	printf("%d\n", sizeof(arr));
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	sz= sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n",sz);

	return 0;
 }
