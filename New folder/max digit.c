#include<stdio.h>
main()
{
	int num,rem,max=0;
	printf("enter num:");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
	    num=num/10;
	    if(rem>max){
	    	max=rem;
		}
	}
	printf("\n after reverse num = %d",max);
}
