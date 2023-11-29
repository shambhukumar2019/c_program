#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
	int ret = 0;
	char ch = 0;
	static char *ogpin = "1234";
	char pin[5] = {0};
	static float bal = 500;
	float cash = 0;

	printf("enter ATM PIN: ");
	scanf("%s",pin);
	printf("pin = %s\n",pin);
	
	ret = strcmp(ogpin,pin);
	if(0 != ret)
	{
		printf("wrong atm PIN\n");
		exit(1);
	}
	printf("thank you for visit\n\n");
	do
	{
		printf("---Select options---\n");
		printf("1. balance enquiry\n");
		printf("2. cash deposit\n");
		printf("3. cash withdraw\n");
		printf("4. cancel\n");

		printf("enter option 1/2/3/4 : ");
		scanf("%d",&ret);

		switch(ret)
		{
			case 1:
			{
				printf("your current balance: %0.2f\n",bal);
				break;
			}
			case 2:
			{
				printf("enter amount: ");
				scanf("%f",&cash);

				bal += cash;
				printf("cash deposit success\n");
				printf("current balance: %0.2f\n",bal);
				break;
			}
			case 3:
			{
				printf("enter amount: ");
				scanf("%f",&cash);
				if(cash > bal)
				{
					printf("insufficient balance\n");
					break;
				}

				bal -= cash;
				printf("cash withdraw success\n");
				printf("current balance: %0.2f\n",bal);
				break;
			}
			default:
			{
				printf("thank you, please visit again\n");
				exit(1);
			}
		}

		ch = getchar();	// to remove '\n' from  stdin buffer
		printf("\npress  'y'  to select other options");
		printf("\npress  'n'  to cancel: ");
		scanf("%c",&ch);

		if(!((ch == 'y') || (ch == 'Y')))
		{
			printf("thank you, please visit again\n");
			break;
		}
			
	}while((ch == 'y') || (ch == 'Y'));

	return 0;
}
