/**
 * @file main.c
 * @author shambhu kumar
 * @brief main driver code for linked list
 * @version 0.1
 * @date 2025-04-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include "linked_list.h"



void main(void)
{
    init_ll(25);

    insert_node(APPEND,45);
    insert_node(1,5);
    insert_node(2,30);
    insert_node(APPEND,60);

    print_ll();   
    del_node(START);
    print_ll();

    printf("no. of nodes in linked list = %d\n", len_ll());

}

