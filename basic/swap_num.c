#include<stdio.h>
//swap two values without using third variable
void swap_number(int*,int*);
//it can also be done by XOR method
// and by using a third variable

int main(void)
{
	int val1, val2;
	printf("enter val1: ");
	scanf("%d",&val1);	
	printf("enter val2: ");
	scanf("%d",&val2);	
	printf("values before swap,  val1 = %d\tval2 = %d\n",val1,val2);
	swap_number(&val1,&val2);	//call swap_number function
	printf("values after swap,   val1 = %d\tval2 = %d\n",val1,val2);

	return 0;
}

//swap two values by reference
void swap_number(int *ptr1,int *ptr2)
{
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}
