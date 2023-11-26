#include<stdio.h>

// 1331 -> reverse the number = 1331
// both same, its a pallindrome
int ispallindrome(int);

int main(void)
{
	int ret = 0;
	int value = 0;

	printf("to check pallindrome number\n");
	printf("enter a number: ");
	scanf("%d",&value);

	ret = ispallindrome(value);

	if(1 == ret)
		printf("It's a pallindrome\n");
	else
		printf("not a Pallindrome\n");

	return 0;
}

int ispallindrome(int num)
{
	int rem = 0;
	int res = 0;
	int val = 0;

	val = num;

	while(val > 0)
	{
		rem = val % 10;
		val /= 10;
		res = (res * 10) + rem;
	}
	
	printf("original value: %d\n",num);
	printf("reverse value: %d\n",res);

	if(num == res)
		return 1;
	else
		return 0;
}
