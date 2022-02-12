#include <stdio.h>
int main()
{
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:
			printf("%d is an even no.\n",a);
			break;
			
		case 1:
			printf("%d is a odd no.\n",a);
			break;
				
	}
return 0;
}