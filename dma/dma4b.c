/**
* @file dma4b.c
* @brief store students class info in dynamic memory using structure
* 				using array of pointers
* @author Shambhu Kumar
* @version v1
* @date 2024-12-19
*/

#include "stdio.h"
#include "stdlib.h"

//max length for student name
#define NAME_LEN	25

//create student info structure
typedef struct student
{
	char name[NAME_LEN];
	unsigned int roll_no;
	unsigned char class;
}student;


int main(void)
{
	unsigned char no_of_students = 0;
	unsigned char index = 0;

	printf("number of students: ");
	scanf("%hhu",&no_of_students);
	
	//std_ptr is an array of student pointers
	student* std_ptr[no_of_students];

	for(index = 0;index < no_of_students;index += 1)
	{
		std_ptr[index] = (student*)malloc(sizeof(student));
		//check for memory allocation
		if(std_ptr[index] == NULL)
		{
			perror("malloc failed!\n");
			return EXIT_FAILURE;
		}
	}
	
	//input each student details
	printf("enter student details\n");
	for(index = 0;index < no_of_students;index += 1)
	{
		printf("---student[%u]---\n",index + 1);
		getchar();
		printf("name: ");
		scanf("%25[^\n]s",std_ptr[index]->name);
		getchar();
		printf("roll no: ");
		scanf("%u",&std_ptr[index]->roll_no);
		printf("class: ");
		scanf("%hhu",&std_ptr[index]->class);
	}
	
	//display student details
	printf("\nstudents\n");
	for(index = 0;index < no_of_students;index += 1)
	{
		printf("%25s\t",std_ptr[index]->name);
		printf("%u\t",std_ptr[index]->roll_no);
		printf("%hhu\n",std_ptr[index]->class);
	}
	
	for(index = 0;index < no_of_students;index += 1)
	{
		free((void*)std_ptr[index]);
		std_ptr[index] = NULL;
	}

	return 0;
}
