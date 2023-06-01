#include<stdio.h>
main()
{
	int i,x,rem,sum=0;
	printf("\n enter the amount:");
	scanf("%d",&x);
	while(x!=0){
		rem=x%10;
		sum=sum+rem;
		x=x/10;
	}
	printf("\n sum of the digit of amount:%d",sum);
}
