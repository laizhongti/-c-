#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
int tmp;
tmp=a;
a=b;
b=tmp;
	}
	if(a<c)
	{
		int tmp;
		tmp=a;
		a=c;
		c=tmp;
	}
	if(b<c)
	{int tmp;
	tmp=b;
	b=c;
	c=tmp;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}