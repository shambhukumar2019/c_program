#ifndef CIR_BUF_H
#define CIR_BUF_H



#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"


// use -D MAX_BUF_SIZE=<value> to overwrite this macro at compile time
#ifndef MAX_BUF_SIZE
#define MAX_BUF_SIZE    10U
#endif


typedef enum circular_buffer_status
{
    CBUF_W_OK,
    CBUF_FULL,
    CBUF_EMPTY,
    CBUF_READY

}cbuf_status;


typedef struct circular_buffer_t
{
    int     *buf;
    uint8_t hptr;
    uint8_t tptr;
    uint8_t size_of_buf;
    uint8_t element_num;
}cbuf_t;


/**
 * @brief initialize circular buffer for first time
 * 
 * @param cbuf_ptr pointer to circular buffer
 */
void cbuf_init(cbuf_t *cbuf_ptr);


/**
 * @brief write data into buffer in FIFO manner
 * 
 * @param cbuf_ptr pointer to circular buffer
 * @param num put this data in buffer
 * @return cbuf_status buffer write status
 */
cbuf_status cbuf_write(cbuf_t *cbuf_ptr, int num);


/**
 * @brief read data from buffer in FIFO manner
 * 
 * @param cbuf_ptr pointer to circular buffer
 * @return int data read from buffer
 */
int cbuf_read(cbuf_t *cbuf_ptr);


/**
 * @brief get number of elements present in circular buffer
 * 
 * @param cbuf_ptr pointer to circular buffer
 * @return uint8_t number of elements
 */
uint8_t cbuf_elem_num(cbuf_t *cbuf_ptr);


/**
 * @brief clear all values in buffer to zero
 * 
 * @param cbuf_ptr pointer to circular buffer
 */
void cbuf_reset(cbuf_t *cbuf_ptr);


/**
 * @brief free heap memory allocated for buffer
 * 
 * @param cbuf_ptr pointer to circular buffer
 */
void cbuf_free(cbuf_t *cbuf_ptr);






#endif
