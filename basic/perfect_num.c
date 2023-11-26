#include<stdio.h>

// 6 -> 1 + 2 +3 = 6, its perfect
int isperfect(int);

int main(void)
{
	int num = 0;
	int ret = 0;
	
	printf("check if it is a perfect number\n");
	printf("enter a number: ");
	scanf("%d",&num);
	
	ret = isperfect(num);
	if(1 == ret)
	{
		printf("It's a perfect number\n");
	}
	else
	{
		printf("NOT a perfect number\n");
	}
	
	return 0;
}

int isperfect(int num)
{
	int i = 0;
	int sum = 0;
	
	for(i = 1;i < num;i += 1)
	{
		if((num % i) == 0)
		{
			sum += i;
		}
	}
	if(num == sum)
		return 1;
	else
		return 0;
}
