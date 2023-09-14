#include<stdio.h>

// limit maximum number of elements in array
#define MAX 10

// add row elements, 1 row at a time and return the sum
int add_row(int (*) [MAX],int);

// add column elements, 1 column at a time and return the sum
int add_column(int (*) [MAX],int,int);

// add all elements of a matrix and print the sum
void add_all_elements(int (*) [MAX],int,int);

// get user input for no of rows and columns and fill elements in 2D array
void scanf_array2d(int (*) [MAX],int,int);

// print 2d array on console
void printf_array2d(int (*) [MAX],int,int);

// program runs from here
int main(void)
{
	int matrix[MAX][MAX] = {0};
	int row, column;
	int row_sum = 0;
	int col_sum = 0;
	int all_sum = 0;
	int m_index = 0;

	printf("---------------sum of rows and columns of a matrix, also of all elements------------------\n\n");
	printf("enter number of rows = ");
	scanf("%d",&row);		//take number of rows
	printf("enter number of columns = ");
	scanf("%d",&column);	//take number of columns
	printf("\n******enter matrix elements******\n");
	scanf_array2d(matrix,row,column);
	printf("\n**********here's your matrix***********\n");
	printf_array2d(matrix,row,column);
	
	// print sum of each elements of a row
	for(m_index = 0; m_index < row; m_index += 1)
	{
		row_sum = add_row((matrix + m_index),column);
		printf("row[%d] sum = %d\n",m_index + 1,row_sum);
	}
	printf("\n");
	
	// print sum of each elements of a column
	for(m_index = 0; m_index < column; m_index += 1)
	{
		col_sum = add_column(matrix,row,m_index);
		printf("column[%d] sum = %d\n",m_index + 1,col_sum);
	}
	printf("\n");

	// print sum of all elements of matrix
	for(m_index = 0; m_index < column; m_index += 1)
	{
		all_sum += add_column(matrix,row,m_index);
	}
	printf("all elements sum = %d\n",all_sum);

	
	return 0;
}

void scanf_array2d(int (*rd_array) [MAX], int r,int c)
{
	int i,j;

	for(i = 0; i < r; i += 1)
	{
		for(j = 0; j < c; j += 1)
		{
			printf("matrix[%d][%d] = ",i,j);
			scanf("%d",*(rd_array + i) + j);
		}
	}
}

void printf_array2d(int (*wr_array) [MAX], int r, int c)
{
	int i,j;

	for(i = 0; i < r; i += 1)
	{
		for(j = 0; j < c; j += 1)
		{
			printf("%d\t",*(*(wr_array + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}

// add a row elements and return the sum
int add_row(int (*array_row) [MAX],int col_num)
{
	int sum = 0;
	int l_index = 0;
	
	for(l_index; l_index < col_num; l_index += 1)
	{
		sum += *(*array_row + l_index);
	}
	
	return sum;
}

// add a column elements and return sum
int add_column(int (*array_col) [MAX],int row_num,int col_num)
{
	int sum = 0;
	int l_index;
	
	for(l_index = 0; l_index < row_num; l_index += 1)
	{
		sum += *(*(array_col + l_index) + col_num);
	}
	
	return sum;
}
