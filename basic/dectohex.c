#include<stdio.h>

int main(void)
{
	unsigned long int x,y,z,i;
	
	i = 1;
	z = 0;
	
	printf("enter decimal value: ");
	scanf("%lu",&x);

	while(x != 0)
	{
		y = x & 0x0f;
		x >>= 4;
		z += y * i;
		i *= 10;
	}
	printf("hexadecimal value: 0x%lu\n",z);

	return 0;
}
