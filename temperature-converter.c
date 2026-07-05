#include<stdio.h>
int main()

{

float a,f,c;

printf("choose the converter:\n 1.celsius to fahrenheit\n 2.fahrenheit to celsius\n");
scanf("%f",&a);


if(a==1)
{
printf("enter the celsius value:\n");
scanf("%f",&c);
//f=c+32;
f=32+(9.0/5.0)*(c);
printf("%f",f);
}

else if(a==2)
{	
printf("enter the fahrenheit value:\n");
scanf("%f",&f);
c=((f-32)*(5.0/9.0));
printf("%f",c);
}
else
{
printf("invalid choice");
}


return 0;
}
