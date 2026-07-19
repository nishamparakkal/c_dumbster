#include<stdio.h>
int main()
{

	int num,t1,t2,t3,t4,t5,total;
	
	
	printf("enter the 5 digit num:\n");
	scanf("%d",&num);
	t1=num%10;
	t2=num%100;
	t2=t2/10;
	t3=num%1000;
	t3=t3/100;
	t4=num/1000;
	t4=t4%10;
	t5=num/10000;

	t2=t2*10;
	t5=t5*100;
	t4=t4*1000;
	t3=t3*10000;
	total=t1+t2+t3+t4+t5;


	printf("after num=%d\n",total);



return 0;
}
