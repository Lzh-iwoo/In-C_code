//#define N_VALUES 5

#include <stdio.h>

//int my_strlen(char* x)
//{
//	char* start = x;
//	char* end = x; 
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式 递归的方式
//	//
//	char arr[] = "bit";
//	int a = my_strlen(arr);
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < values[N_VALUES]);
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for ( i = 0 ; i < 10 ; i++ )
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	printf("%p\n", &arr);
//	printf("%p\n", p);
//	return 0;
//}


//void init(int* a[],int sz )
//{
//	int i = 0;
//	
//	for (i = 0; i < sz; i++)
//	{
//		a[i] = 0;
//	}
//}
//
//void print(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//}
//
//void reverse(int a[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	while (left <= right)
//	{
//		int tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	//init(a,sz);
//	reverse(a,sz);
//	print(a,sz);
//	return 0;
//}

void forword(int a[],int b[],int sz)
{
	int i = 0;
	for ( i = 0 ; i < sz ; i++ )
	{
		int tmp = a[i];
		a[i] = b[i];


	}

}

int main()
{
	int a[10] = { 1,2,3,4,5 };
	int b[10] = { 6,5,4,3,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	forword(a,b,sz);
	return 0;
}