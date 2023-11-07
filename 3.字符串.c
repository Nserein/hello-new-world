#include <stdio.h>
#include <string.h>

int main()
{
	printf("%c\n", '\x61');
	//\x61——61是2个十六进制数字——\xdd——可以是两个十六进制数字
	//printf("%d\n",strlen("c:\test\32\test.c"));
	//printf("%c\n", '\132');
	//\32——32是2个八进制数字——\ddd——可以是1到3个八进制数字
	//32作为八进制数字代表的那个十进制数字，作为ASCII码值，对应的数值
	return 0;
}




//int main()
//{
//	//printf("%s\n", "\"");
//	//printf("%c\n", '\'');
//    //printf("c:\test\32\test.c");
//	//   \t--叫水平制表符  
//	//在斜杠前再加上斜杠---\\-----表示一个反斜杠，防止它被解释为一个转义序列符
//	return 0;
//}
//int main()
//{
//	printf("abc");//加上\n会换行---\n也为转义字符
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n",strlen(arr1));//strlen - string length--计算字符串长度-----会打出2
//	printf("%d\n",strlen(arr2));//会打出随机值,但如果加上'\0'则也为3  
//	return 0;

	//   \0为转义字符


	//数据在计算机上存储时，储存的是二进制
	// 
	// 'a'---97
	// 'A'---65
	// 
	// ASCII 编码
	// ASCII 码值
	// 
	//char arr1[] = "abc";//数组
	////"abc"-- 'a' 'b' 'c'  '\0'-----'\0'字符串结束的标志 
	//char arr2[] = { 'a','b','c' };
	////'a' 'b' 'c'
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//return 0;
//}




//{
//	"abcdf";
//	"hello";
//	"";//空字符串
//
//
//
//	return 0;
//}
