#include<stdio.h>

// limit maximum number of elements in array
#define MAX 10

// add row elements, 1 row at a time and return the sum
int add_row(int (*) [MAX],int,int);

// add column elements, 1 column at a time and return the sum
int add_column(int (*) [MAX],int,int);

// add all elements of a matrix and print the sum
void add_all_elements(int (*) [MAX],int,int);

// get user input for no of rows and columns and fill elements in 2D array
void scanf_array2d(int (*) [MAX],int *,int *);

// print 2d array on console
void printf_array2d(int (*) [MAX],int *,int *);

// program runs from here
int main(void)
{
	int matrix[MAX][MAX] = {0};
	int row, column;
//	int r_index, c_index;


	printf("---------------sum of rows and columns of a matrix, also of all elements------------------\n\n");
	printf("enter number of rows = ");
	scanf("%d",&row);
	printf("enter number of columns = ");
	scanf("%d",&column);
	printf("******enter matrix elements******\n");
	scanf_array2d(matrix,&row,&column);
	printf("**********here's your matrix***********\n");
	printf_array2d(matrix,&row,&column);
	
	//for(r_index = 0;r_index < 

	return 0;
}

void scanf_array2d(int (*rd_array) [MAX], int *r,int *c)
{
	int index = 0;
	int num_of_elem = (*r) * (*c);

	for(index; index < num_of_elem; index += 1)
	{
		printf("*matrix[%d] = ",index);
		scanf("%d",(*rd_array + index));
	}
	
}

void printf_array2d(int (*wr_array) [MAX], int *r, int *c)
{
	int index = 0;
	int num_of_elem = (*r) * (*c);

	for(index; index < num_of_elem; index += 1)
	{
		printf("%d\t",*(*wr_array + index));
	}
	printf("\n");
}
