/*
* @brief: input a string and print it using 
* dynamic memory allocation
*
* @note: only MAX_CHAR bytes can be entered
*/

#include "stdio.h"
#include "stdlib.h"


#define MAX_CHAR	5U

int main(int argc, char *argv[])
{
	//pointers to store dynamically allocated memory @ in heap
	char *str = NULL;
	
	str = (char*)calloc(MAX_CHAR+1,sizeof(char));
	//check for memory allocation
	if(str == NULL)
	{
		//print error code
		perror("dynamic memory allocation failed!");
		exit(EXIT_FAILURE);
	}
	printf("type string: ");
	// fgets(str, MAX_CHAR, stdin) can also be used
	scanf("%5[^\n]s",str);	//limit input character to 5 bytes, avoid overflow

	printf("dynamic allocated string: ");
	puts(str);
	
	free(str);

	return 0;
}
