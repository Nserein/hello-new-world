#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>

//һά����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	int arr2[10] = { 1,2,3,4,5 };//����ȫ��ʼ��,ֻ��ʼ��ǰ�����������Ĭ�ϳ�ʼ��Ϊ0
//
//	return 0;
//}


//int main()
//{
//	
////C���Թ涨���������±�ģ��±��0��ʼ
//	int arr[5] = { 1,2,3,4,5 };
////�±�             0 1 2 3 4
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[4]);
//	return 0;
//}


//�����������������
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int a = 0;
//	for (a = 0; a < 5; a++)
//		printf("%d ", arr[a]);
//	return 0;
//}


//������������
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


//�鿴����λ��
//%p������ӡ��ַ�ģ��������ʮ�����Ʊ�ʾ
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		printf("arr[%d]=%p\n", i,&arr[i]);
//    return 0;
//}
//�������ڴ����������


//���֪������Ԫ�ظ���
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���ܹ��ĳ��ȳ��Ե����ĳ���
//	printf("%d", sz);
//	return 0;
//}


//��ά����  arr[][]------------ ����[����][����]
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };//�ȴӵ�һ�п�ʼ���룬��һ������������ڶ���
//	int arr2[3][4] = { {1,2},{3,4},{4,5} };//�����г�ʼ��--------------ÿһ��{}����һ��
//	int arr3[][3] = { 1,2,3 };//��ʼ������ʡ�����������ǲ�����ʡ������
//	int arr4[][4] = { {1,2},{3,4} };
// 	return 0;
//}

//��ά������±�,�������±궼�Ǵ�0��ʼ
//int main()
//{
//
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	printf("%d\n", arr[2][3]);
//	return 0;
//}


//��ά��������������
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;//��ʼ������
//	
//	for (i = 0; i < 3; i++)//��������
//	{
//		int j = 0;//��ʼ������
//		for (j = 0; j < 4; j++)//��������
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


//��ά�������ڴ��еĴ洢
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
//��ά���飬��Ȼ��ӡ�����Ƕ�ά�ģ����ǣ����ڴ��еĴ洢��ʽ��һά������һ���ģ������δ��


//��ϰһ,����ַ��������ƶ������м���
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



//��ϰ�������ֲ���
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
			printf("�ҵ��ˣ��±���:%d\n", mid);
			f = 1;
			break;
		}
	}
	if (f==0)
		printf("�Ҳ���");
    return 0;
}