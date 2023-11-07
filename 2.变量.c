#include <stdio.h>





//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 2;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放十个整数数字的数组
//	//下标（索引）：1对应0，2对应1     10对应9
//	//printf("%d", arr[4]);//下标的形式访问元素
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//
//	//char ch[20];//定义一个存放20个字符的
//	//float arr2[2];
//	return 0;
//}
//int num2 = 20;//全局变量——定义在{}（代码块）之外
//int main()
//{
//	int num1 = 10;//局部变量——定义在代码块内部
//	printf()
//	
// return 0;
//}



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

//int Add(int x, int y)//Add---函数名    括号内-----参数     int（最前面的）-----返回类型
//{
//	int z = x + y;
//	return z;
//}//函数体
////自定义函数（自行设计）     库函数
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
	//int a = 100;
	//int b = 200;

	//scanf("%d%d", &num1, &num2);//取地址符号&
	//	//c语言语法规定，变量要定义在当前代码块的最前面
	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	//sum = Add(a, b);
//	sum = Add(2, 3);         //()----函数调用操作符
//	printf("sum = %d\n", sum);
//	return 0;
//}
//局部变量的作用域是变量所在的局部范围
//全局变量的作用域是整个工程
//局部变量的生命周期是进入作用域开始，出作用域结束
//全局变量的作用域是整个工程的生命周期


//#include<stdio.h>

//int main()
//{
//	const int n = 10;//n是常变量，但是又有常属性，所以说n是常变量
//	int arr[n] = { 0 };
//
//	//const——常属性
//	//const int num = 2;
//	/*printf("%d\n", num);
//	num = 4;
//	printf("%d\n", num);*/
//	//字面常量
//	//3
//	//1000
//
//
//	return 0;
//}

//3.  #define 定义的标识符常量
#/*define MAX 10

int main()
{
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
	return 0;
}*/
//4.枚举常量

//枚举关键-enum

//enum Sex
//{
//	MALE,
//	FAMALE,
//	SECREET
//};
////——枚举常量
//int main()
//{
//	//enun Sex s = FAMALE;
//
//	printf("%d\n", MALE);//0
//	printf("%d\n", FAMALE);//1
//	printf("%d\n", SECREET);//2
//
//	return 0;
//}



//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}