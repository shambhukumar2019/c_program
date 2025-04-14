/**
 * @file linked_list.h
 * @author shambhu kumar
 * @brief linked list header file
 * @version 0.1
 * @date 2025-04-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#ifndef LINKED_LIST_H
#define LINKED_LIST_H


#include "stdio.h"
#include "stdlib.h"

/*  remove padding  */
// #pragma pack(1)


#define APPEND     (-1)
#define START       0


/// @brief linked list data structure
typedef struct linked_list
{
    int num;
    struct linked_list *next;
}llist;


extern llist *head_ptr;
extern llist *tail_ptr;


/**
 * @brief initialize a linked list node
 * 
 * @param val put this value in node
 */
void init_ll(int val);


/**
 * @brief insert new nodes at any given position
 *     
 *      APPEND   = at end
 * 
 * @param pos add new node at this postion in linked list
 * @param data add this value to created node
 */
void insert_node(int pos, int data);


/**
 * @brief display whole linked list on stdio
 * 
 */
void print_ll(void);


/**
 * @brief check if linked list is empty
 * 
 * @return int return true(1) if empty, else false(0)
 */
int is_ll_empty(void);


/**
 * @brief count number of nodes in linked list
 * 
 * @return int number of nodes
 */
int len_ll(void);


/**
 * @brief free complete linked list memory
 * 
 */
void del_ll(void);


/**
 * @brief free memory of a node for a given node position
 * 
 * @param pos position of node
 */
void del_node(int pos);


#endif