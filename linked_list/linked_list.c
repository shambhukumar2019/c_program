/**
 * @file linked_list.c
 * @author shambhu kumar
 * @brief linked list source file
 * @version 0.1
 * @date 2025-04-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include "linked_list.h"


llist *head_ptr = NULL;
llist *tail_ptr = NULL;


void init_ll(int val)
{
    llist *node = NULL;

    node = (llist*)calloc(1, sizeof(llist));
    if(node == NULL)
    {
        perror("memory allocation failed !");
        exit(EXIT_FAILURE);
    }

    node->num = val;
    node->next = NULL;
    head_ptr = node;
    tail_ptr = node;
    node = NULL;
}


void insert_node(int pos, int data)
{
    int lindex = 0;
    llist *new_list = NULL;
    llist *traverse_list = head_ptr;
    llist *temp_list = NULL;

    if (is_ll_empty())
    {
        perror("linked list not initiallized !");
        exit(EXIT_FAILURE);
    }

    new_list = (llist*)calloc(1,sizeof(llist));
    if(new_list == NULL)
    {
        perror("memory allocation failed !");
        exit(EXIT_FAILURE);
    }

    new_list->num = data;

    if(pos == APPEND)
    {
        for(;;)
        {
            if(traverse_list->next == NULL)
            {
                break;
            }
            traverse_list =traverse_list->next; 
        }
        traverse_list->next = new_list;
        new_list->next = NULL;
    }
    else if(pos == START)
    {
        new_list->next = head_ptr;
        head_ptr = new_list;
    }
    else
    {
        for(lindex = 1;lindex<pos;lindex++)
        {
            traverse_list =traverse_list->next; 
        }
        temp_list = traverse_list->next;
        traverse_list->next = new_list;
        new_list->next = temp_list;
    }

    traverse_list = NULL;
    new_list = NULL;
    temp_list = NULL;
    
}


void print_ll(void)
{
    llist *temp_ll_ptr = head_ptr;

    if (is_ll_empty())
    {
        perror("linked list not initiallized !");
        exit(EXIT_FAILURE);
    }

    printf("/*** linked list ***/\n");    
    while (temp_ll_ptr->next != NULL)
    {
        printf("%d\n",temp_ll_ptr->num);
        temp_ll_ptr = temp_ll_ptr->next;
    }
    printf("%d\n",temp_ll_ptr->num);

    temp_ll_ptr = NULL;
    
}


void del_ll(void)
{
    llist *dum_ll_ptr = head_ptr;
    llist *temp_ll_ptr = NULL;

    if (is_ll_empty())
    {
        perror("linked list not initiallized !");
        exit(EXIT_FAILURE);
    }

    while (dum_ll_ptr->next != NULL)
    {
        temp_ll_ptr = dum_ll_ptr->next;
        free((void*)dum_ll_ptr);
        dum_ll_ptr = temp_ll_ptr;
    }

    free((void*)dum_ll_ptr);

    dum_ll_ptr = NULL;
    temp_ll_ptr = NULL;
    head_ptr = NULL;
    
}


void del_node(int pos)
{
    int lindex = 0;
    llist *temp_ll_ptr = head_ptr;
    llist *dum_ll_ptr = NULL;

    if (is_ll_empty())
    {
        perror("linked list not initiallized !");
        exit(EXIT_FAILURE);
    }

    if(pos == START)
    {
        temp_ll_ptr = head_ptr;
        head_ptr = head_ptr->next;

        free((void*)temp_ll_ptr);
    }
    else
    {
        for(lindex = 0;lindex<pos;lindex++)
        {
            temp_ll_ptr = temp_ll_ptr->next;
        }
        dum_ll_ptr = temp_ll_ptr->next;

        free((void*)temp_ll_ptr);

        temp_ll_ptr = head_ptr;
        for(lindex = 0; lindex<(pos - 1); lindex++)
        {
            temp_ll_ptr = temp_ll_ptr->next;
        }
        temp_ll_ptr->next = dum_ll_ptr;        
    }

    temp_ll_ptr = NULL;
    dum_ll_ptr = NULL;

}


int is_ll_empty(void)
{
    if (head_ptr == NULL)
    {
        return 1;
    }

    return 0;
}


int len_ll(void)
{
    int cnt = 1;
    llist *temp_ll_ptr = head_ptr;

    if (is_ll_empty())
    {
        perror("linked list not initiallized !");
        exit(EXIT_FAILURE);
    }

    while (temp_ll_ptr->next != NULL)
    {
        cnt += 1;
        temp_ll_ptr = temp_ll_ptr->next;
    }

    return cnt;
}
