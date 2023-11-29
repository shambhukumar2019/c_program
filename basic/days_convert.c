#include<stdio.h>

int main(void)
{
	int org_days,days,years,weeks;

	printf("convert days into years weeks and days\n");
	printf("enter days: ");
	scanf("%d",&org_days);

	years = org_days / 365;
	weeks = (org_days % 365) / 7;
	days = (org_days % 365) % 7;

	printf(" %d year %d week %d day\n",years,weeks,days);

	return 0;
}
