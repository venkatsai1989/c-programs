#include<stdio.h>
main()
{
	int a,b,n=1;
	scanf("%d",&a);
	b=1;
	while(b<=a)
	{
	   n=n*b;
       b++;
	}

printf("%d",n);
}

