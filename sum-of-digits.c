#include<stdio.h>
int main()
{

	int num,t1,t2,total;
	printf("enter the 2 digit no:\n");
	scanf("%d",&num);
	t1=num%10;
	t2=num/10;
	total=t1+t2;
	printf("sum of digit:%d\n",total);




return 0;
}
