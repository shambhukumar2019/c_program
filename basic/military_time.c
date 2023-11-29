#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// convert hh:mm:ss AM/PM -> 24 hr format
// as in military


int main(int argc,char *argv[])
{
	char a[8] = {0};
	
	printf("=========kindly enter time in hh:mm:ssAM/PM  format as cmd line argument=========\n");
	if(argc <= 1)
	{
		printf("! input argument not provided !\n");
		exit(1);
	}
	
	printf("12 hr format time: %s\n",argv[1]);
	
	if(argv[1][8] == 'A')
	{
		if((argv[1][0] == '1') && (argv[1][1] == '2'))
		{
			argv[1][0] = '0';
			argv[1][1] = '0';
		}
	}
	else if(argv[1][8] == 'P')
	{
		if(argv[1][1] == '8')
		{
			argv[1][0] = '2';
			argv[1][1] = '0';
		}
		else if(argv[1][1] == '9')
		{
			argv[1][0] = '2';
			argv[1][1] = '1';
		}
		else if(!((argv[1][0] == '1') && (argv[1][1] == '2')))
		{
			argv[1][0] += 1;
			argv[1][1] += 2;
		}
	}
	argv[1][8] = 0;
	argv[1][9] = 0;
	
	strcpy(a,argv[1]);
	
	printf("24 hr format time: %s\n",a);

	return 0;
}
