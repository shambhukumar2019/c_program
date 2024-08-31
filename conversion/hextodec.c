// convert hexadecimal number given as character string into decimal number
// auther: shambhu kumar
// date: 31/08/2024


#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(void)
{
	char hex_val[8] = {0};
	char ch_byte = 0;
	unsigned char len = 0;
	unsigned char index = 0;
	unsigned char pow = 0, num = 0;
	unsigned long int dec_val = 0, base_val = 1;
	
	printf("enter hex value (max 7 characters) = "); 
	scanf("%s",hex_val);
	len = strlen(hex_val);

	index = len;
	while(len!=0)
	{
		index -= 1;
		ch_byte = hex_val[index];

		switch(ch_byte)
		{
			case '0':
				{
					num = 0;
				}
				break;

			case '1':
				{
					num = 1;
				}
				break;

			case '2':
				{
					num = 2;
				}
				break;

			case '3':
				{
					num = 3;
				}
				break;

			case '4':
				{
					num = 4;
				}
				break;

			case '5':
				{
					num = 5;
				}
				break;

			case '6':
				{
					num = 6;
				}
				break;

			case '7':
				{
					num = 7;
				}
				break;

			case '8':
				{
					num = 8;
				}
				break;

			case '9':
				{
					num = 9;
				}
				break;

			case 'a':
			case 'A':
				{
					num = 10;
				}
				break;

			case 'b':
			case 'B':
				{
					num = 11;
				}
				break;

			case 'c':
			case 'C':
				{
					num = 12;
				}
				break;

			case 'd':
			case 'D':
				{
					num = 13;
				}
				break;

			case 'e':
			case 'E':
				{
					num = 14;
				}
				break;

			case 'f':
			case 'F':
				{
					num = 15;
				}
				break;

			default: 
				{
					perror("\nwrong hexadecimal value !\n");
					exit(0);
				}
				break;

		}//switch end
		
		while(pow!=0)
		{
			base_val *= 16;
			pow -= 1;

		}//while end
		pow += 1;

		dec_val += base_val * num;//final decimal value
		len -= 1;
	}//super while end

	printf("0x%s = %ld\n",hex_val,dec_val);

	return 0;
}
