#include "cir_buf.h"



void cbuf_init(cbuf_t *cbuf_ptr)
{
    cbuf_ptr->element_num = 0;
    cbuf_ptr->hptr = 0;
    cbuf_ptr->tptr = 0;
    cbuf_ptr->size_of_buf = MAX_BUF_SIZE;
}


cbuf_status is_cbuf_full(cbuf_t *cbuf_ptr)
{
    if(cbuf_ptr->element_num == cbuf_ptr->size_of_buf)
    {
        return CBUF_FULL;
    }

    return CBUF_READY;
}


cbuf_status is_cbuf_empty(cbuf_t *cbuf_ptr)
{
    if(cbuf_ptr->element_num == 0)
    {
        return CBUF_EMPTY;
    }

    return CBUF_READY;
}


cbuf_status cbuf_write(cbuf_t *cbuf_ptr, int num)
{
    if(CBUF_FULL == is_cbuf_full(cbuf_ptr))
    {
        perror("circular buffer is full!");
        return CBUF_FULL;
    }

    cbuf_ptr->buf[cbuf_ptr->hptr] = num;
    cbuf_ptr->hptr += 1;
    cbuf_ptr->hptr %= cbuf_ptr->size_of_buf;
    cbuf_ptr->element_num += 1;

    return CBUF_W_OK;
}


int cbuf_read(cbuf_t *cbuf_ptr)
{
    int data = 0;

    if(CBUF_EMPTY == is_cbuf_empty(cbuf_ptr))
    {
        perror("circular buffer is empty!");
        return CBUF_EMPTY;
    }

    data = cbuf_ptr->buf[cbuf_ptr->tptr];
    cbuf_ptr->tptr += 1;
    cbuf_ptr->tptr %= cbuf_ptr->size_of_buf;
    cbuf_ptr->element_num -= 1;

    return data;
}


uint8_t inline cbuf_elem_num(cbuf_t *cbuf_ptr)
{
    if(CBUF_EMPTY == is_cbuf_empty(cbuf_ptr))
    {
        perror("circular buffer is empty!");
        return CBUF_EMPTY;
    }

    return cbuf_ptr->element_num;
}


void cbuf_reset(cbuf_t *cbuf_ptr)
{
    for (uint8_t i = 0; i < cbuf_ptr->size_of_buf; i++)
    {
        cbuf_ptr->buf[i] = 0;
    }
    
}

