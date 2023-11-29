#include<stdio.h>
#include<stdlib.h>

// display this code as output

int main(void)
{
	FILE *fp = NULL;
	char ch = 0;
	
	// __FILE__ -> macro to current file path
	printf("current file path: %s\n",__FILE__);
	
	fp = fopen(__FILE__,"r");
	if(fp == NULL) // null = 0
	{
		printf("file open fail\n");
		exit(1);
	}
	printf("file open success\n");
	
	do
	{
		ch = fgetc(fp);
		printf("%c",ch);
	}while(ch != EOF); // eof = -1
	
	fclose(fp);
	fp = NULL;
	
	return 0;
}
