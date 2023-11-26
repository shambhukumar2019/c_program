#include <stdio.h>

int isstrong(int);
int factorial(int);

int main()
{
    int num = 0;
    int ret = 0;
    
    printf("check for strong number\n");
    printf("enter a number: ");
    scanf("%d",&num);
    
    ret = isstrong(num);
    
    if(1 == ret)
    {
        printf("it's a strong number\n");
    }
    else
    {
        printf("not a strong number\n");
    }
    
    return 0;
}

int isstrong(int value)
{
    int rem = 0;
    int sum = 0;
    int num = 0;
    
    num = value;
    while(0 != value)
    {                                                   
        rem = value % 10;
        value /= 10;
        if(0 == rem)
        {
        	sum += 1;
        }
        else
        {
        	sum += factorial(rem);
        }
        //printf("sum=%d, ret=%d\n",sum,rem);
    }
    
    if(num == sum)
        return 1;
    else
        return 0;
}

int factorial(int num)
{
    if(1 == num)
        return 1;
    else
        return (num * factorial(num - 1));
}
