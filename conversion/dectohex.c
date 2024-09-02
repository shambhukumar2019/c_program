// convert hexadecimal number given as character string into decimal number
// auther: shambhu kumar
// date: 31/08/2024


#include "stdio.h"
#include "string.h"
#include "stdlib.h"


void reverse_string(char *src)
{
	unsigned char len = 0, l_index = 0;

	len = strlen(src);
	len -= 1;
	while(l_index < (len - l_index))
	{
		src[l_index] ^= src[len - l_index];
		src[len - l_index] ^= src[l_index];
		src[l_index] ^= src[len - l_index];

		l_index += 1;
	}
}

int main(void)
{
	char hex_val[8] = {0};
	unsigned char index = 0;
	unsigned char rem = 0;
	unsigned long int dec_val = 0, temp_val = 0;
	
	printf("enter decimal value (max 32 bit) = "); 
	scanf("%ld",&temp_val);

	dec_val = temp_val;
	
	while(dec_val!=0)
	{
		rem = dec_val % 16;
		dec_val /= 16;
		
		if(rem < 10)
		{
			hex_val[index] = rem + 48;
		}
		else
		{
			hex_val[index] = (rem - 10) + 65;
		}

		index += 1;
	}//while end
	
	reverse_string(hex_val);
	printf("%ld = 0x%s\n",temp_val,hex_val);

	return 0;
}//main end

