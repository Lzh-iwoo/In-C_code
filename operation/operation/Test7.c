#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int Bubble_Sort(int arr[], int size)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0 ; i < size - 1 ; i++)
	{
		for (j = 0 ; j < size - i - 1 ; j++ )
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}

	}
}

int main()
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	Bubble_Sort(arr,size);
	for (int i = 0 ; i < size ;i++ )
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}