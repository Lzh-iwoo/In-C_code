#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>




//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return  Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fib(n);
//	printf("%d\n",ret);
//	//printf("%d\n", count);
//	return 0;
//}


//int Fac1(int n)
//{
//	int i = 1;
//	int ret = 1;
//	while (i<=n)
//	{
//		ret = ret * i;
//		i++;
//	}
//	return ret;
//}

//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//int main()
//{
//	//n µÄ½×³Ë
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac1(n);
//	printf("%d",ret);
//	return 0;
//}


//int my_strlen(char* str)Ê¹ÓÃµÝ¹é
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//
//
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}