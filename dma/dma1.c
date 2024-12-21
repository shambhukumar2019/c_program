#include "stdio.h"
#include "stdlib.h"


//main driver code
int main(int argc, char *argv[])
{
	//pointers to store dynamically allocated memory @ in heap
	int *int_ptr;
	char *char_ptr;
	float *float_ptr;

	//allocate dynamic memory
	int_ptr = (int*)malloc(1 * sizeof(int));
	char_ptr = (char*)malloc(1 * sizeof(char));
	float_ptr = (float*)malloc(1 * sizeof(float));	//if 0 passed, it still works
	//int_ptr = NULL; for testing failure case
	//check for memory allocation
	if((int_ptr == NULL) || (char_ptr == NULL) || (float_ptr == NULL))
	{
		//print error code in text format associated with generated error
		perror("dynamic memory allocation failed!");
		return 1;
	}

	//get and store values in alllocated dynamic memory in heap
	printf("enter integer value: ");
	scanf("%d",int_ptr);
	getc(stdin);	//to remove '\n' entered from keyboard
	printf("enter character value: ");
	scanf("%c",char_ptr);
	printf("enter float value: ");
	scanf("%f",float_ptr);

	printf("dynamic values are: %d %c %0.2f\n",*int_ptr,*char_ptr,*float_ptr);

	//deallocate heap memory
	free(int_ptr);
	free(char_ptr);
	free(float_ptr);

	return 0;
}
