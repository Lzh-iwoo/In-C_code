#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			break;//结束所有循环
//		//continue 结束所在语句的当前循环
//		printf("%d",i);	
//	}
//	return 0;
//}




//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch ( n )
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++;
//			n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d,%d\n",m,n);
//	return 0;
//	//m == 5 n==3
//}

//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)//整形表达式
//	{
//	case 1://整形常量表达式	
//	case 2:	
//	case 3:	
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int i = 1 ;
//	for ( i = 1; i < 101; i++)
//	{
//		if (i % 2 != 0)
//			printf("%d\n",i);
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0; 
//	int b = 2;
//	if ( a == 1 )
//		if ( b == 2 )
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//	//没有结果 else 只和最近的if匹配
//}


//int main()
//{
//	int score;
//	scanf( "%c\n", &score );
//	if ( score >= 60 || score < 80 )
//		printf("你的成绩及格了,得分为\n");
//	else if (score >= 80 || score <100)
//		printf("你的成绩优秀,得分为\n");
//	return 0;
//}