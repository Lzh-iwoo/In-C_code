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
//			break;//��������ѭ��
//		//continue �����������ĵ�ǰѭ��
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
//	switch (day)//���α��ʽ
//	{
//	case 1://���γ������ʽ	
//	case 2:	
//	case 3:	
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//	//û�н�� else ֻ�������ifƥ��
//}


//int main()
//{
//	int score;
//	scanf( "%c\n", &score );
//	if ( score >= 60 || score < 80 )
//		printf("��ĳɼ�������,�÷�Ϊ\n");
//	else if (score >= 80 || score <100)
//		printf("��ĳɼ�����,�÷�Ϊ\n");
//	return 0;
//}