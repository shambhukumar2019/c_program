#include<stdio.h>

int main(void)
{
	int value;

	printf("check leap year\n");
	printf("enter a year: ");
	scanf("%d",&value);

	if((value % 400 == 0) || (value % 4 == 0))
	{
		printf("%d is a leap year\n",value);
	}
	else
	{
		printf("%d is not a leap year\n",value);
	}

	return 0;
}
