#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Ӧ�õݹ���һ�����ĸ����


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
////Ӧ�õݹ���n��m�η�
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


//ÿ�ε���mun��һ
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


//�ṹ��
//����һѧ����һЩ����
//����
//����
//�绰
//�Ա�
//struct�ṹ��ؼ���   stu�ṹ���ǩ struct stu-�ṹ������
struct stu
{//��Ա����
	char name[20];
	short age;//����ṹ������
	char tele[11]
		char sex[5];
}s1,s2,s3;//s1,s2,s3������ȫ�ֱ���

int main()
{
	struct stu s;//s�ǽṹ��ľֲ�����


	return 0;
})