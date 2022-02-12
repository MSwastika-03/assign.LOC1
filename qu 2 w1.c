#include<stdio.h>
int main()
{
int a,b;

printf("Enter two numbers: ");
scanf("%d", &a);
scanf("%d", &b);
printf("you have entered %d as your first no.\n",a);
printf("you have entered %d as your second no.\n",b);
if(a>b)
{
	printf("a is max");
}
else
{
	printf("b is max");
}
return 0;
}