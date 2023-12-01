#include<stdio.h>
#include "pow.h"

int main(void)
{
	float rate = 0;
	float principal = 0;
	float time = 0;
	float emi = 0;

	printf("EMI calculator\n");

	printf("enter price:rate:time = ");
	scanf("%f:%f:%f",&principal,&rate,&time);
	
	rate /= (12 * 100);
	time *= 12;
	emi = (principal * rate * power(1 + rate,time));
	emi = emi / (power(1 + rate,time) - 1);

	printf("%0.2f Rs per month for %0.2f months\n",emi,time);

	return 0;
}
