#include<stdio.h>

typedef struct rect_area
{
	int len;
	int wid;
	int area;
}rectangle;

// reactangle is a user defined datatype
//typedef struct rect_area rectangle;

// this function accepts a pointer
// of rectangle datatype
void input_param(rectangle*);

// this function accepts a variable
// of rectangle datatype and
// return the same
rectangle area(rectangle);

void disp_area(rectangle);

int main(void)
{
	rectangle r1;

	input_param(&r1);
	disp_area(area(r1));
	
	return 0;
}

void input_param(rectangle* r1)
{
	printf("----enter values in meters----\n");
	printf("enter length: ");
	scanf("%d",&r1->len);
	printf("enter width: ");
	scanf("%d",&r1->wid);
}

rectangle area(rectangle r1)
{
	r1.area = r1.len * r1.wid;
	return r1;
}

void disp_area(rectangle r1)
{
	printf("area of rectangle = %d m² \n",r1.area);
}
