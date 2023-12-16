#include<stdio.h>

typedef union separate_var
{
	int x;
	char sz[4];
}sepv;

int main(void)
{
	sepv v1;

	v1.x = 0x11223344;

	printf("original value: 0x%x\ncharacters:\nchar[0]: %x\nchar[1]: %x\nchar[2]: %x\nchar[3]: %x\n",v1.x,v1.sz[0],v1.sz[1],v1.sz[2],v1.sz[3]);
	printf("-----this PC has little endian storage format-----\n");

	return 0;
}
