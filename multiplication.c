#include<stdio.h>
main(){
	int i=1,num,mul;
	scanf("%d",&num);
	while(i<=num){
	mul=num*i;
	printf("%d*%d=%d\n",num,i,mul);
	i++;	
	}
}
