#include <stdio.h>
#include <string.h>

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while(line<20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��offer\n");
//	return 0;
//}//whileѭ��




//������
//���������� + - * / %
//��(�����ƣ�λ������ >>  <<
//λ������ &����λ�룩�� |����λ�򣩣�^(��λ���
//��ֵ������ =       ���ϸ�ֵ�� +=  -=  *= /=  |=  >>=  <<=  ^=
//��Ŀ������    !���߼���������  -�����ţ�  sizeof(�ó������������ͳ���  ���ֽ�Ϊ��λ��
// ˫Ŀ������
// ��Ŀ������ 
//
//int main()
//{
//	//int a = 5 / 2;
//	//int a = 5 % 2;//  %-----��ʾ����
//	int a = 1;
//	//����1ռ4���ֽڣ�32��bitλ
//	//00000000000000000000000000000000000001
//	int b=a << 2;
//
//	printf("%d\n", b);
//	return 0;
//}



//011
//101
//001-----ֻ�ж���1��ʱ��Ż���1 &
//111-----��1��ʱ�����1 |
//110-----��Ӧ�Ķ�����λ��ͬ����Ϊ0����ͬΪ1


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
//	a += 10;//��Ч
//	int b = 16;
//	//b = b - 10;
//	b -= 10;//��Ч
//	a = a & 2;
//	a &= 2;//��Ч
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = 20;
	//a+b//+˫Ŀ������������������

	//C�����а�0Ϊ�٣�����Ϊ��
	//int a = 10;
	//printf("%d\n", a);
	//printf("%d\n",!a);
	//int a =4;
	//printf("%d\n",sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);//����ʹ��

	int arr[10] = {0};//ʮ������Ԫ�ص�����
	//10*sizeof(int)=40	
	int sz = 0;
	printf("%d\n", sizeof(arr));
	//���������Ԫ�ظ���
	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
	sz= sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n",sz);

	return 0;
 }
