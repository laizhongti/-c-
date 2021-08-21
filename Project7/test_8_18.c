#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//应用递归求一个数的个项和


//int digitsum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + digitsum(n / 10);
//	}
//	else return n;
//
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = digitsum(n);
//	printf("%d", ret);
//
//
//
//
//	return 0;
//}
////应用递归求n的m次方
//double pow(int n, int m)
//{
//	//n^m=n*n^(m-1)
//	if (0 == m)
//		return 1;
//	else if (m < 0)
//		return (1.0 / pow(n, -m));
//	else return n * pow(n, m - 1);
//
//
//
//}
//int main()
//{
//	int n=0;
//	int m=0;
//	scanf("%d%d", &n,&m);
//	double ret = pow(n, m);
//	printf("%lf", ret);
//
//	return 0;
//}


//每次调用mun加一
#include<stdio.h>
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int mun = 9;
//	//	scanf("%d",i);
//	for(n=1;n<=i;n++)
//	{
//	add(&mun);
//	printf("%d ", mun);
//	add(&mun);
//printf("%d ", mun);
//	add(&mun);
//	printf("%d ", mun);
//

//
//
//	return 0;
//}
//


//结构体
//描述一学生的一些数据
//姓名
//年龄
//电话
//性别
//struct结构体关键字   stu结构体标签 struct stu-结构体类型
struct stu
{//成员变量
	char name[20];
	short age;//定义结构体类型
	char tele[11]
		char sex[5];
}s1,s2,s3;//s1,s2,s3是三个全局变量

int main()
{
	struct stu s;//s是结构体的局部变量


	return 0;
})