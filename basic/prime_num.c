#include<stdio.h>

int isprime(int);

int main(void)
{
	int num = 0;
	int ret = 0;
	
	printf("enter a number to check for PRIME : ");
	scanf("%d",&num);
		
	ret = isprime(num);
	if(1 == ret)
		printf("It's a prime number\n");
	else
		printf("Not a prime number\n");
	
	return 0;
}

int isprime(int value)
{
	int i = 0;
	int flag = 0;
	
	for(i = 2;i < value;i += 1)
	{
		if((value % i) == 0)
			flag = 1;
	}
	
	if(0 == flag)
		return 1;
	else
		return 0;
}
