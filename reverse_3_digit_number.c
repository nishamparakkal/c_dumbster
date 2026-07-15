#include<stdio.h>
int main()
{

	int a,t1,t2,t3,b;
  	
	printf("enter the 3 digit number:");
	scanf("%d",&a);


	t1=a%10;  // t1=7
	t2=a%100; // t2=57
	t2=t2/10; // t2=5
	t3=a/100; // t3=3
	
	t1=t1*100;
	t2=t2*10;
	
	b=t1+t2+t3;

	printf("b=%d",b);







return 0;
}
