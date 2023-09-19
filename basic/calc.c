#include<stdio.h>
#include<stdlib.h>

// add two values
float add(float,float);

// subtract two values
float sub(float,float);

// multiply two values
float mul(float,float);

// divide two values
float divd(float,float);

// check if value is a digit
//int isdigit(int);

// check if value is a number only
//int isnum(int);

/* 	cmd to run =>  ./calc 2 5 +
	argc = 4
	argv[0] = ./calc
	argv[1] = 2
	argv[2] = 5
	argv[3] = +
*/
int main(int argc,char *argv[])
{
	float val1, val2;
	char operand;
	float result = 0;

	printf("\n----------------give two values and 1 operation (+, -, /, x) to perform on them-------------------\n");
	printf("========input format:  ./objfile value1 value2 operation  ========\n");
	val1 = atof(argv[1]);	//make argv[1] float
	val2 = atof(argv[2]);	//make argv[2] float
	operand = *argv[3];		//put value at [0] of argv[3] to operand
/*
	printf("enter value 1 = ");
	scanf("%f",&val1);	//input 1st value
	printf("enter value 2 = ");
	scanf("%f",&val2);	//input 2nd value
	operand = getchar();	//remove unwanted \n character from stdin buffer
	printf("enter operation: ");
	scanf("%c",&operand);	//input operation to perform on input values
*/	
	printf("perform: %0.2f %c %0.2f\n",val1,operand,val2);

	switch(operand)
	{
		case '+':
			{
				result = add(val1,val2);	//addition
				break;
			}
		case '-':
			{
				result = sub(val1,val2);	//subtraction
				break;
			}
		case 'x':
		case 'X':
			{
				result = mul(val1,val2);	//multiplication
				break;
			}
		case '/':
			{
				result = divd(val1,val2);	//division
				break;
			}
		default:	//run if none of the case valid
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

//int isdigit(int value)
//{
//	if(((char)value >= '0') && ((char)value <= '9'))
//		return 1;
//	else
//		return 0;
//}

