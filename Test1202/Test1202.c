
#include <stdio.h>

#include <string.h>
//����һ���ṹ������
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "c���Գ������",55 };
	//struct Book* bb = &b1;
	strcpy(b1.name,"C++");
	//string copy -- �ַ�������
	//. �ṹ����� 
	//-> �ṹ��ָ��
	printf("%s\n",b1.name);
	//printf("%d\n", bb->price);
	return 0; 
}



//int main()
//{
//	double a  = 3.14;
//	double* db = &a;
//	*db = 3.3333;
//	printf("%f",a);
//	return 0;
//}