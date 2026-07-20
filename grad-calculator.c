#include<stdio.h>
int main()
{

	int mark;

	printf("enter the marks:\n");
	scanf("%d",&mark);
 	if(100<mark || mark<0)
	printf("invalid\n");
	else if(90<=mark)
		printf("A\n");
	else if(80<=mark)
	printf("B\n");
	else if(70<=mark)
	printf("C\n");
	else if(60<=mark)
	printf("D\n");
	else
	printf("F\n");



return 0;
}
