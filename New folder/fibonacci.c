#include<stdio.h>
main()
{
	int i,x1=0,x2=1,ans;
	for(i=1;i<=10;i++){
	ans= x1+x2;
	printf("\n\t %d",ans);
	x1=x2;
	x2=ans;
}
}
