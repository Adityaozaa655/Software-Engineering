#include<stdio.h>
main()
{
	int i,num,rem,sum;
	
	printf(" enter the num:");
	scanf("%d",&num);
	
	while (num!=0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\n sum of the given number=%d",sum);
}
