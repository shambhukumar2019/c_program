#include<stdio.h>

#define FALSE 0
#define TRUE 1
#define MAX 30	//max string characters count

//return true if given character is an alphabet
//otherwise, false
char ischar(char);

//return true if given character is a consonant
//otherwise, false
char isconsonant(char);

//return true if given character is a vowel
//otherwise, false
char isvowel(char);

int main(void)
{
	char sentence[MAX] = {0};	//initiallize all its index with '\0'(null) character
	int vcnt = 0;	//vowels count
	int ccnt = 0;	//consonants count
	int l_index = 0;//local index for local loops

	printf("==============enter a sentence, get no of vowels and consonants in it================\n");
	printf("enter sentence here: ");
	scanf("%[^\n]s",sentence);	//input a sentence
	printf("your sentence: %s\n",sentence);

	//loop until null character ('\0') in sentence
	while(*(sentence + l_index) != 0)
	{
		if(TRUE == isvowel(*(sentence + l_index)))	//check for vowel
		{
			vcnt += 1;	//count vowels in sentence
		}
		else if(TRUE == isconsonant(*(sentence + l_index)))	//check for consonant
		{
			ccnt += 1;	//count consonants in sentence
		}
		else
		{
			//statement
		}
		
		l_index += 1;	//increament index for next character in sentence 
	}

	printf("vowels count: %d\nconsonants count: %d\n",vcnt,ccnt);

	return 0;
}

char ischar(char ch)
{
	//test for alphabet characters
	if(((ch >= 'a') || (ch >= 'A')) && ((ch <= 'z') || (ch <= 'Z')))
		return 1;
	else
		return 0;
}

char isvowel(char ch)
{
	char vowels[] = "aeiouAEIOU";
	int i = 0;

	//test for vowels
	do
	{
		if(*(vowels + i) == ch)
			return 1;
		i += 1;
	}while(*(vowels + i) != '\0');
	
	return 0;
}
char isconsonant(char ch)
{
	//test for consonants
	if((isvowel(ch) == FALSE) && (ischar(ch) == TRUE))
		return 1;
	else
		return 0;
}
