#include <stdio.h>
main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    if(n%i==0)
    break;
    if(i==n)
    printf("prime number");
    else
    printf("Not prime number");

}
