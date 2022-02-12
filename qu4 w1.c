#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("enter 2 no.: \n");
	scanf("%d%d", &a, &b);
	printf("enter your choice: \n");
	scanf("%d", &choice);
	printf("choice 1 to add\n");
	printf("choice 2 to subtract\n");
	printf("choice 3 to multiply\n");
	printf("choice 4 to divide\n");
	switch(choice)
	{
		case 1:
			printf("addition of %d+%d=%d\n", a,b,a+b);
			break;
		case 2:
			printf("subtraction of %d-%d=%d\n",a,b,a-b);
			break;
		case 3:
			printf("product of %d*%d=%d\n", a,b,a*b);
			break;
		case 4:
			printf("division of %d/%d=%d", a,b, (float)a/b);
			break;
		default:
			printf("no choices matched");
	}
	return 0;
}