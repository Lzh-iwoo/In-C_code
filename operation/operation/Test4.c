#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//通过指针来解决函数内部参数内存不同
//void exchange(int* x , int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	exchange(&a,&b);
//	printf("%d%d", a,b);
//	return 0;
//}


//int inmax(int a , int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d",inmax(a,b));
//	return 0;
//}

//memset - 
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',6);
//	printf("%s\n",arr);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2,arr1); stirng copy 字符串拷贝 string length 字符串长度
//	printf("%s\n",arr2);
//	return 0;
//}