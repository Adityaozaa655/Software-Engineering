#include<stdio.h>
main()
{
	int a,d,i;
	float r,b;
	printf("enter the intrest rate:");
	scanf("%f",&a);
	r=a/100;
	
	printf("\n  new intrest rate is=%0.3f",a);
	printf("\n enter the time");
	scanf("%d",&d);
	b=1+a*d;
	
	printf("\n thisis the process=0.2f",b);
	printf("\n enter  the amoumt=");
	scanf("%d",&d);
	a=d*b;
	printf("\n this  is  the  some process=%d",a);
	
}
