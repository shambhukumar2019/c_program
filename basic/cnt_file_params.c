#include<stdio.h>
#include<stdlib.h>

/*	parameters
	
	1 -> file pointer to an existing file
	2 -> address to store total lines count
	3 -> address to store blank lines count
	4 -> address to store comment lines count
	5 -> address to store lines ending with semicolumn count

	return -> 0, if success
				non-zero, if error
*/
int cnt_file_parameters(FILE *,int *,int *,int *,int *);


int main(int argc, char *argv[])
{
	int lines_cnt = 0;
	int blank_lines_cnt = 0;
	int comment_lines_cnt = 0;
	int semicoln_lines_cnt = 0;
	FILE *fp = NULL;

	fp = fopen(argv[1],"r");
	if(NULL == fp)
	{
		printf("Error opening %s file\n",argv[1]);
		exit(1);	//forcefully quit program without any echo
	}
	printf("file open success !\n\n");
	
	cnt_file_parameters(fp,&lines_cnt,&blank_lines_cnt,&semicoln_lines_cnt,&comment_lines_cnt);
	
	printf("total no of lines = %d\nnumber of blank lines = %d\nnumber of lines end with ';' = %d\nnumber of comment lines = %d\n",lines_cnt,blank_lines_cnt,semicoln_lines_cnt,comment_lines_cnt);

	return 0;
}

int cnt_file_parameters(FILE *fp, int  *lines_cnt, int *blank_lines_cnt, int *semicoln_lines_cnt, int *comment_lines_cnt)
{
	char ch;
	ch = fgetc(fp);
	while(EOF != ch)
	{
		if('\n' == ch)
		{
			*lines_cnt += 1;
			ch = fgetc(fp);
			if('\n' == ch)
			{
				*lines_cnt += 1;
				*blank_lines_cnt += 1;
			}
		}
		if(';' == ch)
		{
			//fix the bug
			ch = fgetc(fp);
			if(('/' == ch) || ('\n' == ch))
			{
				*semicoln_lines_cnt += 1;
			}
			else
				fseek(fp,-1,SEEK_CUR);
		}
		if('/' == ch)
		{
			ch = fgetc(fp);
			if('/' == ch)
			{
				*comment_lines_cnt += 1;
			}
			else
				fseek(fp,-1,SEEK_CUR);
		}
		ch = fgetc(fp);
	}

	return 0;
}
