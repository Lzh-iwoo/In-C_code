#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n ;
	int i = 1;
	int sum = 1;
	scanf("%d",n);//5
	while(i<=n)
	{
		sum *= i; 
		printf("%d",i);
	 } 
	 printf("%d\n",sum);
	return 0;
}
