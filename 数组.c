#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>

//一维数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr2[10] = { 1,2,3,4,5 };//不完全初始化,只初始化前五个，其他的默认初始化为0
//
//	return 0;
//}


//int main()
//{
//	
////C语言规定数组是有下标的，下标从0开始
//	int arr[5] = { 1,2,3,4,5 };
////下标             0 1 2 3 4
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[4]);
//	return 0;
//}


//访问整个数组的数据
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int a = 0;
//	for (a = 0; a < 5; a++)
//		printf("%d ", arr[a]);
//	return 0;
//}


//输入数组数据
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int b = 0;
//	for (b = 0; b < 5; b++)
//	{
//		scanf("%d", &arr[b]);
//	}
//	int a = 0;
//	for (a = 0; a < 5; a++)
//		printf("%d ", arr[a]);
//	return 0;
//}


//查看数组位置
//%p用来打印地址的，结果会用十六进制表示
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		printf("arr[%d]=%p\n", i,&arr[i]);
//    return 0;
//}
//数组在内存中连续存放


//如何知道数组元素个数
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//用总共的长度除以单个的长度
//	printf("%d", sz);
//	return 0;
//}


//二维数组  arr[][]------------ 名称[列数][行数]
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };//先从第一行开始填入，第一行填满再填入第二行
//	int arr2[3][4] = { {1,2},{3,4},{4,5} };//按照行初始化--------------每一个{}代表一行
//	int arr3[][3] = { 1,2,3 };//初始化可以省略列数，但是不可以省略行数
//	int arr4[][4] = { {1,2},{3,4} };
// 	return 0;
//}

//二维数组的下标,行与列下标都是从0开始
//int main()
//{
//
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	printf("%d\n", arr[2][3]);
//	return 0;
//}


//二维数组的输入与输出
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;//初始化列数
//	
//	for (i = 0; i < 3; i++)//生成列数
//	{
//		int j = 0;//初始化行数
//		for (j = 0; j < 4; j++)//生成行数
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二维数组在内存中的存储
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//			{
//				int j = 0;
//				for (j = 0; j < 4; j++)
//				{
//					printf("arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//				}
//				printf("\n");
//			}
//	return 0;
//}
//二维数组，虽然打印出来是二维的，但是，在内存中的存储方式与一维数组是一样的，是依次存放


//练习一,多个字符从两端移动，向中间汇聚
//int main()
//{
//	/*char arr3[] = "Hello, my only astronaut";
//	char arr4[] = "########################";
//	int left1 = 0;
//	int right1 = strlen(arr3) - 1;
//	printf("%s\n", arr4);
//	while (left1 <= right1)
//	{
//
//		arr4[left1] = arr3[left1];
//		arr4[right1] = arr3[right1];
//		Sleep(50);
//		system("cls");
//		left1++;
//		right1--;
//		printf("%s\n", arr4);
//	}
//	printf("Hello, my only astronaut\n");*/
//	Sleep(10000);
//	char arr1[] = "Welcome to my universe!";
//	char arr2[] = "#######################";
//	char arr3[] = "Hello my only astronaut";
//	char arr4[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	int left1 = 0;
//	int right1 = strlen(arr3) - 1;
//	printf("%s\n", arr2);
//	printf("%s\n", arr4);
//	while (left <= right&left1<=right1)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		arr4[left1] = arr3[left1];
//		arr4[right1] = arr3[right1];
//		Sleep(520);
//		system("cls");
//		left++;
//		right--;
//		left1++;
//		right1--;
//		
//		printf("%s\n", arr4);
//		printf("%s\n", arr2);
//	}
//	
//	return 0;
//}



//练习二，二分查找
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int k = 0;
	scanf("%d", &k);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	int f = 0;
    while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("找到了，下标是:%d\n", mid);
			f = 1;
			break;
		}
	}
	if (f==0)
		printf("找不到");
    return 0;
}