#include<stdio.h>
#include<stdlib.h>


float add(float,float);


float sub(float,float);


float mul(float,float);


float divd(float,float);


int isdigit(int);

int main(void)
{
	float val1, val2;
	char operand;
	float result = 0;

	printf("\n----------------give two values and 1 operation (+, -, /, *) to perform on them-------------------\n");

	printf("enter value 1 = ");
	scanf("%f",&val1);
	printf("enter value 2 = ");
	scanf("%f",&val2);
	operand = getchar();
	printf("enter operation: ");
	scanf("%c",&operand);
	
	printf("perform: %0.2f %c %0.2f\n",val1,operand,val2);

	switch(operand)
	{
		case '+':
			{
				result = add(val1,val2);
				break;
			}
		case '-':
			{
				result = sub(val1,val2);
				break;
			}
		case '*':
			{
				result = mul(val1,val2);
				break;
			}
		case '/':
			{
				result = divd(val1,val2);
				break;
			}
		default:
			printf("!!! error: please enter valid values and operations like  +, -, *, /\n");
	}

	printf("result = %0.2f\n",result);

	return 0;
}

float add(float v1, float v2)
{
	return (v1 + v2);
}

float sub(float v1, float v2)
{
	return (v1 - v2);
}

float mul(float v1, float v2)
{
	return (v1 * v2);
}

float divd(float v1, float v2)
{
	if(0 == v2)
	{
		printf("!!! error: cannot divide by ZERO\n");
		return -1;
	}
	else
	{
		return (v1 / v2);
	}
}
