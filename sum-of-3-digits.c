#include<stdio.h>
int main()
{

	int num,t1,t2,t3,total;
	printf("enter the 3 digit no:\n");
	scanf("%d",&num);
	t1=num%10;
	t2=num%100;
	t2=t2/10;
	t3=num/100;
	total=t1+t2+t3;
	printf("sum of digit:%d\n",total);




return 0;
}
