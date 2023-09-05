#include<stdio.h>
// calculate sum of digits in a given integer value

int main(void)
{
	int value, remainder;
	int sum = 0;
	
	printf("-------------get sum of digits of a value--------------\n");
	printf("enter a value: ");
	scanf("%d",&value);
	
	//find sum if digits
	while(value != 0)
	{
		remainder = value % 10;	//get each digits one by one as 'remiander'
		value /= 10;			//remove the fetched digit from 'value'
		sum += remainder;		//add each digits and store in 'sum'
	}
	printf("result = %d\n",sum);

	return 0;
}
