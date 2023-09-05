#include<stdio.h>

#define MAX_INDEX 20				//set maximum allowed array size

//find sum of digits in given character string
int str_digit_sum(char []);

int main(void)
{
	char array[MAX_INDEX] = {0};	//initiallize array with '\0' at each of its index
	int sum;

	printf("----------find sum of digits in given character string---------\n\n");
	printf("!!!!!!--Attention: enter string without whitespace only--!!!!!!\n");
	printf("enter string = ");
	scanf("%s",array);				//store input string in array
	
	sum = str_digit_sum(array);		//call this function and pass given array as parameter
	printf("result = %d\n",sum);

	return 0;
}

int str_digit_sum(char arr[])
{
	int sum_of_digits = 0;
	int i = 0;
	
	//loop until end of arr[]
	while(arr[i] != '\0')
	{
		//filter out only digits
		if((arr[i] >= '0') && (arr[i] <= '9'))
		{
			sum_of_digits += arr[i] - 48;	//store sum of digits found in arr
		}
		i += 1;								//inceament array index for next checking
	}

	return sum_of_digits;	//return the total sum
}
