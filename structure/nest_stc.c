#include<stdio.h>

int main(void)
{
	struct student
	{
		char name[20];
		int roll;
		struct dob
		{
			int date;
			int month;
			int year;
		}dob1;
	};
	
	//struct student s1 = {"shambhu",16,{13,12,2023}};
	struct student s1 = {.name="shambhu",.dob1={13,12,2023},.roll=1016};
	printf("name=%s,roll=%d,dob=%d/%d/%d\n",s1.name,s1.roll,s1.dob1.date,s1.dob1.month,s1.dob1.year);

	return 0;
}
