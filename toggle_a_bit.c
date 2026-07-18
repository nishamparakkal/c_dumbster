#include<stdio.h>
int main()
{
int num,pos;
printf("enter a 8 bit no:");
scanf("%d",&num);
printf("enter the position:");
scanf("%d",&pos);
num=num^(1<<pos);

printf("the new number is=%d\n",num);




return 0;
}
