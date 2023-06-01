#include<stdio.h>
main()
{
	int num,rev,rem,sum=0,a1,a2;
	printf("\n enter the amount:");
	scanf("%d",&sum);
	a1=num%10;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	a2=rev%10;
	sum=1+a2;
	printf("\n sum of firest and last digit of amount :%d",sum);
	
}
