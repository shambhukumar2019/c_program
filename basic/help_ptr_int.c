#include<stdio.h>

int main(void)
{
	int a[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

	printf("a[0][0]=%d\n",a[0][0]);
	printf("a[0]=%d\n",a[0]);
	printf("a=%d\n",a);
	printf("&a=%d\n",&a);
	printf("*a=%d\n",*a);
	printf("**a=%d\n",**a);
	//printf("\n",);
	//printf("\n",);

	return 0;
}
