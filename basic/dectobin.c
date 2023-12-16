#include<stdio.h>

int main(void)
{
	unsigned long int x;
	int i,y;
	 
	printf("enter decimal value: ");
	scanf("%lu",&x);

	for(i = 0;i < 32;i += 1)
	{
		y = x & 0x80000000;
		if(y != 0)
			y = 1;
		x <<= 1;
		printf("%d",y);
	}
	printf("\n");
	return 0;
}
