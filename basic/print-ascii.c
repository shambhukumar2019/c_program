#include "stdio.h"

/**
 * @brief convert any character into it's ascii value (in decimal and hex)
 *        , not in extended ascii
 * 
 * @return int success code
 */

int main(void)
{
    __uint8_t ascii_val = 0;
    char character = 0;

    printf("type a character: ");
    scanf("%c",&character);
    ascii_val = character;
    printf("it's ascii value: %u  0x%X\n",ascii_val,ascii_val);

    return 0;
}
