#include<stdio.h>

int main(void)
{
	int user_num;
	printf("*-------Check if a Number is Positive or Negative-------*\n");
	printf("enter number: ");
	scanf("%d",&user_num);
	printf("your number: 0x%X\n",user_num);
	if(user_num >= 0)
		printf("given number is positive\n");
	else
		printf("given number is negative\n");
	
	return 0;
}
