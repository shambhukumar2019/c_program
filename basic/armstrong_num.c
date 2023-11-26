#include<stdio.h>

int isarmstrong(int);

int power(int,int);

int main(void)
{
	int num;
	int ret = 0;

	printf("check for armstrong number\n");
	printf("enter a number to check: ");
	scanf("%d",&num);

	ret = isarmstrong(num);

	if(1 == ret)
		printf("It's an Armstrong number\n");
	else
		printf("Not an Armstrong number\n");
	
	return 0;
}

int isarmstrong(int value)
{
	int pow_deg = 0;
	int rem = 0;
	int val1 = 0;
	int sum = 0;

	val1 = value;

	// get degree of power
	while(val1 > 0)
	{
		val1 /= 10;
		pow_deg += 1;
	}
	val1 = value;

	while(val1 > 0)
	{
		rem = val1 % 10;
		val1 /= 10;
		sum += power(rem,pow_deg);
	}
	
	if(value == sum)
		return 1;
	else
		return 0;
}

int power(int base,int pow)
{
	int i = 0;
	int res = 1;

	for(i = 0;i < pow;i += 1)
	{
		res *= base;
	}

	return res;
}
