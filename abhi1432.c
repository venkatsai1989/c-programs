#include <stdio.h>
main()
{
	int i,n,num,low;
	scanf("%d",&n);
	i=1;
	while(i<=n)
    {
    scanf("%d",&num);
     if(i==1)
    low=num;
     if(low>num)
       low=num;
       i++;
    }
    printf("%d",low);
}
