#include<stdio.h>

struct student
{
	char name[20];
	int roll;
};

void disp(struct student*);

int main(void)
{
	struct student s1;

	printf("enter name: ");
	scanf("%[^\n]s",s1.name);
	printf("enter roll no: ");
	scanf("%d",&s1.roll);

	printf("------your data------\n");
	disp(&s1);

	return 0;
}

void disp(struct student* one)
{
	printf("name: %s, roll no: %d\n",one->name,one->roll);
}
