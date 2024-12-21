/*
* @brief: input a string and print it using 
* dynamic memory allocation
*
* @note: only max_size bytes can be entered
* 1. local variables get stack memory allocation
*		which is also dynamic.
* 2. 
*/

#include "stdio.h"
#include "stdlib.h"


int main(int argc, char *argv[])
{
	//pointers to store dynamically allocated memory @ in heap
	char *str = NULL;	//null pointer
	unsigned int max_size = 0;
	int index = 0;
	
	//prints command line arguments: count, string
	printf("argc: %d,argv[0]:%s\n",argc,argv[0]);

	printf("enter number of bytes to allocate memory: ");
	scanf("%u", &max_size);

	str = (char*)calloc(max_size+1, sizeof(char));
	//check for memory allocation
	if(str == NULL)
	{
		//print error code
		perror("dynamic memory allocation failed!");
		exit(EXIT_FAILURE);
	}

	//getc(stdin);	//remove \n
	getchar();

	printf("type string: ");
	fgets(str, max_size+1, stdin);
	if(str == NULL)
	{
		perror("fgets error\n");
		exit(EXIT_FAILURE);
	}

	printf("dynamic allocated characters: ");
	for(index = 0;index < max_size + 1;index++)
	{
		printf("0x%x ",str[index]);
	}
	printf("\n");

	free(str);
	str = NULL;

	return 0;
}
