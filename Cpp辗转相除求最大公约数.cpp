#include<stdio.h>
int main()
{
	int m,n,r=0;
	scanf("%d%d",&m,&n);
	while(m%n)
	{
		r=m%n;
		m=n;
		n=r;

	}

printf("%d\n",n);
return 0;
}