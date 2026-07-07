#include<stdio.h>
int main()

{
int a,b,c,large;

printf("enter the first number:\n");
scanf("%d",&a);

printf("enter the second number:\n");
scanf("%d",&b);

printf("enter the three number:\n");
scanf("%d",&c);

if(a>b)
{
if(a>c)
large=a;
else
large=c;
}
else
{
if(b>a)
{
if(b>c)
large=b;

else
large=c;
}

}

printf("large=%d",large);


return 0;
}
