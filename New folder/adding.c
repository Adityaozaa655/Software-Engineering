#include<stdio.h>
main()
{
 int a,b,c;
 float d;
 printf("\n program of addition:");
 printf("enter the value");
 scanf("%d",&a);
 printf("enetr value b:");
 scanf("%d",&b);
 c=a+b;
 printf("\n addition:%d",c);
 
 printf("\n \nprogram of substrasction");
 c=a-b;
 printf("\n \nsubtraction c:%d",c);
 
 printf("\n \nprogram of multiplication");
 c=a*b;
 printf("\n multiplication c:%d",c);

 printf("\n \nprogram of division");
 d=(float)a/b;
 printf("\n division c:%0.2f",d);
 
 printf("\n\n program of modul");
 c=a%b;
 printf("\n moduls c:%d",c);
}
