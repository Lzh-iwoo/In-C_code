#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>



//int main()
//{
//	char c = 0;
//	char* ch = &c;
//	printf("%d",sizeof(char*));
//	//ָ���Ǹ�����,������ŵ�ַ
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("��������");
//		scanf("%s",&password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("��¼ʧ��");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}




//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,9,10 };
//	int k = 7;
//	int left = 0;//���±�
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int right = size - 1;//���±�
//	int mid;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else {
//			printf("%d",arr[mid]);
//			break;
//		}
//	}
//	return 0;
//
//}

//int main() ʱ�临�Ӷ� ���Խ�
//{
//	int arr[] = { 1,2,3,4,5,6,7,9,10 };
//	int i = 0;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < (sizeof(arr) / sizeof(arr[0]));i++)
//	{
//		if (arr[i] == n)
//			printf("%d", i);
//		break;
//	return 0;
//}