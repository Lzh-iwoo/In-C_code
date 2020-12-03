
#include <stdio.h>

#include <string.h>
//创建一个结构体类型
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "c语言程序设计",55 };
	//struct Book* bb = &b1;
	strcpy(b1.name,"C++");
	//string copy -- 字符串拷贝
	//. 结构体变量 
	//-> 结构体指针
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