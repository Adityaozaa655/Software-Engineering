#include<stdio.h>
main()
{
	int i,digit=9,num,sum=0;
	printf("\n enter the num");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("\t%d",digit);
		sum=sum+digit;
		digit=digit*10+9;
	}
	printf("\n sum of series=%d",sum);
}
