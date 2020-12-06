#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//void menu()
//{
//	printf("*********************************************\n");
//	printf("*******  1.play         0.exit        *******\n");
//	printf("*********************************************\n");
//}
//
//void game()
//{
//	//拿时间戳来设置随机数的生成起点
//	int a = rand()%100+1;
//	int b = 0;
//	printf("%d\n",a);
//	scanf("%d",&b);
//	if (a == b)
//		printf("猜对啦\n");
//	else if (a > b)
//		printf("小了\n");
//	else
//		printf("大了\n");
//}
//int main()
//{
//	srand((unsigned int) time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int result = 0;
//	for ( i = 1 ; i < 10 ; i++ )
//	{
//		for ( j = i ; j < 10 ; j++ ) 
//		{
//			result = i * j;
//			printf("%d * %d = %d   ",i,j,result);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//寻找最大值 
//int main()
//{
//	int arr[] = { 1,2,5,4,87,6,7,9,4,5222 };
//	int max = arr[0];
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 1; i <size ; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d",max);
//	return 0;
//}





//冒泡排序 时间复杂度 n^2
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	for (int i = 0; i < size - 1 ; i++)
//	{
//		for ( j = 0; j < size - i -1 ; j ++)
//		{
//			if ( arr[j] > arr[j+1] ) {
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	while (i<size)
//	{
//		printf("%d",arr[i]);
//		i++;
//	}
//	return 0;
//}




//int main()
//{
//	double i = 0;
//	double sum = 0;
//	int flag = 1;
//	for ( i = 1; i <= 100; i++)
//	{
//		sum +=  flag*1 / i;
//		flag = -flag;
//	}
//	printf("%f",sum);
//	return 0;
//}