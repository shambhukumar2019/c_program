#include "cir_buf.h"



int main(int argc, char *argv[])
{
    cbuf_t buf1;
    int val = 0;

    cbuf_init(&buf1);

    cbuf_reset(&buf1);
    cbuf_write(&buf1, 20);
    cbuf_write(&buf1, 10);
    val = cbuf_read(&buf1);

    printf("read = %d\n",val);
    val = cbuf_read(&buf1);

    printf("read = %d\n",val);
    val = cbuf_read(&buf1);

    printf("read = %d\n",val);

    return 0;
}
