#include<stdio.h>
#include<string.h>

#define MAX 10

int main(void)
{
	int i = 0;
	int flag = 0;
	int str_len = 0;
	char s[MAX] = {0};
	
	printf("enter word to check for pallindrome: ");
	scanf("%[^\n]s",s);

	flag = 0;
	str_len = strlen(s);
	printf("word length: %d\n",str_len);

	while(i < (str_len - i - 1))
	{
		if(s[i] != s[str_len - i - 1])
		{
			flag = 1;
			break;
		}
		i += 1;
	}
	if(flag == 0)
		printf("word is pallindrome\n");
	else
		printf("NOT pallindrome\n");

	return 0;
}
