/**
* @file dma3.c
* @brief sum of array using dynamic allocation
* @author Shambhu Kumar
* @version V100
* @date 2024-12-18
*/

#include "stdio.h"
#include "stdlib.h"


int main(void)
{
	int* arr_ptr;	//wild pointer
	int index = 0;	//use for array indexing
	int arr_size = 0;	//to store max size to allocate memory
	int sum = 0;	//to store sum of array values
	
	//input size of array to allocate memory for
	printf("size of array: ");
	scanf("%d",&arr_size);

	arr_ptr = (int*)calloc(arr_size, sizeof(int));	//allocate memory in heap
	//check for memory allocation
	if(arr_ptr == NULL)
	{
		perror("calloc failed!\n");
		return EXIT_FAILURE;
	}
	
	//input array values
	printf("enter array values\n");
	for(index = 0;index < arr_size;index += 1)
	{
		printf("array[%d]: ",index);
		scanf("%d",&arr_ptr[index]);
	}

	printf("your array: ");
	for(index = 0;index < arr_size; index += 1)
	{
		printf("%d ",arr_ptr[index]);
	}
	printf("\n");
	
	//find sum of array values
	for(index = 0;index < arr_size; index += 1)
	{
		sum += arr_ptr[index];
	}
	printf("sum of array values: %d\n",sum);
	
	//deallocate memory
	free(arr_ptr);	//after free, arr_ptr is dangling pointer
	arr_ptr = NULL;	//null pointer

	return 0;
}
