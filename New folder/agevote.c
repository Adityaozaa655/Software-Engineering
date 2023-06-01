#include<stdio.h>

int main()
{
	int age;
	printf("enter your age");
   
   	scanf("%d",&age);
   	printf("you have entered  %d as your age\n",age);
   	if(age>=18){
   		printf("you can vote!");
	   }
	   
	    else if(age>10);
	   {
	   	printf("you age between 3 to 10 you can vote");
	   }
	   
	   else
	   {	
	   	printf("you cannot vote!");
	   }
   	
   	return 0;
}
 
