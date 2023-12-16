#include <stdio.h>
#define MAX_WORDS	10

int main()
{
	
	char text[100]={0}; // to store string
	int cnt[MAX_WORDS]={0}; //to store length of the words
	int len=0,i=0,j=0;
	
	//read string
	printf("Enter a string: ");
	scanf("%[^\n]s",text); //to read string with spaces
	
	while(1)
	{
		if(!(((text[i] >= 'a') && (text[i] <= 'z')) || ((text[i] >= 'A') && (text[i] <= 'Z')))) 
		{
			//check NULL
			if((len != 0) || (text[i] == '\0'))
			{
				if(text[i] == '\0')
					break;
				cnt[j++]=len;
				len=0;
			}
		}
		else
		{
			len++;
		}
		i++;
	}
	
	printf("Words length:\n");
	for(i=0;i<j;i++)
	{
		printf("%d, ",cnt[i]);
	}
	printf("\b\b \n"); //to remove last comma and space
	
	return 0;
}

