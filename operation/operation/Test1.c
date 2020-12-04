#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//优化1-10阶乘的和
//int main()
//{
//	int i = 1;
//	int sum = 1;
//	int max = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum = sum * i;
//		max = max + sum;
//	}
//		printf("%d\n", max);
//	return 0;
//}


// 1-10阶乘的和
//int main()
//{
//	int i = 1;
//	int sum = 1;
//	int j = 1;
//	int max = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		sum = 1;
//		for ( j = 1; j <= i; j++)
//		{
//
//			sum = sum * j;
//		}
//		max = max + sum;
//	}
//	printf("%d\n",max);
//	return 0;
//}

//n的阶层
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	
//	printf("%d\n",sum);
//	return 0;
//}