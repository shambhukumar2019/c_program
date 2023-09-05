#include<stdio.h>

int main(void)
{
	int value, remainder;
	int sum = 0;
	
	printf("-------------get sum of digits of a value--------------\n");
	printf("enter a value: ");
	scanf("%d",&value);
	
	while(value != 0)
	{
		remainder = value % 10;
		value /= 10;
		sum += remainder;
	}
	printf("result = %d\n",sum);
	return 0;
}
