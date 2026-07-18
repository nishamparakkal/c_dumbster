#include<stdio.h>
int main()
{
int num=1357,t1,t2,t3,t4,total;

printf("before=%d",num);
t1=num%10;   // 7
t2=num%100;  // 57
t2=t2/10;   // 5
t3=num%1000;  //357
t3=t3/100;    //3
t4=num/1000; //1

t4=t4*1000;
t2=t2*100;
t3=t3*10;
total=t1+t2+t3+t4;


printf("after=%d",total);


return 0;
}
