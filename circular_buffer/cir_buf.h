#ifndef CIR_BUF_H
#define CIR_BUF_H



#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"


#define MAX_BUF_SIZE    30U


typedef enum cbuf_status_type
{
    CBUF_W_OK,
    CBUF_FULL,
    CBUF_EMPTY,
    CBUF_READY

}cbuf_status;


typedef struct circular_buffer
{
    int     buf[MAX_BUF_SIZE];
    uint8_t hptr;
    uint8_t tptr;
    uint8_t size_of_buf;
    uint8_t element_num;
}cbuf_t;


void cbuf_init(cbuf_t *cbuf_ptr);

cbuf_status is_cbuf_full(cbuf_t *cbuf_ptr);

cbuf_status is_cbuf_empty(cbuf_t *cbuf_ptr);

cbuf_status cbuf_write(cbuf_t *cbuf_ptr, int num);

int cbuf_read(cbuf_t *cbuf_ptr);

uint8_t cbuf_elem_num(cbuf_t *cbuf_ptr);

void cbuf_reset(cbuf_t *cbuf_ptr);






#endif
