#include "stdio.h"
#include "math.h"
#include "stdlib.h"

// callback type
typedef float (*oper_t) (int);


// callback functions
float absolute(int num)
{
    return abs(num);
}

float square(int num)
{
    return (num * num);
}

float cube(int num)
{
    return (num * num * num);
}

float square_root(int num)
{
    return sqrt(num);
}

void operation(int value, oper_t oper)
{
    printf("res = %0.2f\n", oper(value));
}


int main(void)
{
    int val = 0;
    
    printf("type number = ");
    scanf("%d",&val);

    operation(val, square);
    operation(val, cube);
    operation(val, square_root);
    operation(-1, absolute);

    return 0;
}
