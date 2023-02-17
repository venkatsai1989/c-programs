#include<stdio.h>
main()
{
	int a,n,k,evensum=0,oddsum=0;
	a=1;
	scanf("%d",&n);
	scanf("\n%d",&k);
	while(a<=n)
	{
		if(a%k==0)
		{
		  if(a%2==0)
		  {
		  printf("\n%d",a);
		  evensum=evensum+a;
	   	  }
			else
			{
			 printf("\n%d",a);
			oddsum=oddsum+a;
	    	}
	    }
		a++;
	}
	printf("\n%d is even sum",evensum);
		printf("\n%d is odd sum",oddsum);
}
