#include<stdio.h>
#include<limits.h>

// find number of values divisible by 5 & there sum in a range
void countnsum(int,int);

int main(void)
{
	int minint, maxint;
	printf("------find number of values divisible by 5 & there sum in a range------\n");
	printf("****values less than or equal to ZERO or greater than %d are not allowed****\n",INT_MAX);
	printf("enter lower value: ");
	scanf("%d",&minint);
	printf("enter upper value: ");
	scanf("%d",&maxint);
	countnsum(minint,maxint);	//call countnsum function

	return 0;
}

void countnsum(int min, int max)
{
	int i;
	int count = 0;
	int sum = 0;
	
	//calculate count and sum in range min - max
	for(i=min;i<=max;i+=1)
	{
		if(min <= 0 || min >INT_MAX || max <= 0 || max >INT_MAX)
		{
			printf("given value is tooo large/small, please enter values between 1 to %d\n",INT_MAX);
			break;
		}
		else if((i%5)==0)
		{
			count += 1;
			sum += i;
		}
	}
	//print result only if count is greater than 0
	if(0 != count)
		printf("total numbers divisible by 5 are %d\nsum of numbers divisible by 5 is %d\n",count,sum);
}
