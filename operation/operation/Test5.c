//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//#include "add.h"


//int main()
//{
//	int x = 10;
//	int y = 20;
//	int sum = Add(x, y);
//	printf("%d\n",sum);
//	return 0;
//}

//int binary_search(int arr[],int k,int size)
//{
//	int left = 0;
//	int right = size - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int size = (sizeof(arr) / sizeof(arr[0]));
//	int ret = binary_search(arr,k,size);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了,下标是:%d\n", ret);
//	}
//	return 0;
//}



//int find(int a[] ,int x)
//{
//	int left = 0;
//	int size = (sizeof(a) / sizeof(a[0]));
//	int right = size-1;
//	int mid =0;
//	while (left >= right)
//	{
//		mid = (left + right) / 2;
//			if (x < a[mid])
//				left = mid;
//			if (x == a[mid])
//				break;
//	}
//				return mid;
//}
//
//int main()
//{
//	int a[] = {1,2,3,4,6,7,9,10,12,16};
//	int n = 0;
//	scanf("%d",&n);
//	find(a,n);
//	return 0;
//}


//void Search(a)
//{
//	int i = 0;
//	int falg = 0;
//	for (i = 2; i < a/2; i++)
//	{
//		if (a % i == 0)
//		{
//			falg = 1;
//			break;
//		}	
//	}
//	if (falg == 0)
//		printf("是素数");
//	else
//		printf("不是素数");
//
//}
//
//int main()
//{
//	int a = 2;
//	scanf("%d", &a);
//	if (a > 1)
//		Search(a);
//	else
//		printf("请输入非零整数\n");
//	return 0;
//}