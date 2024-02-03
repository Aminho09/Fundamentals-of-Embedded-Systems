#include <stdio.h>
#include <stdlib.h>

struct MyBuffer{
    int index;
    int size;
    int *queue;
} buffer_a, buffer_b, buffer_c, buffer_d, buffer_e;

void buffer_constructor(struct MyBuffer *buffer, int size)
{
    buffer->index = 0;
    buffer->size = size;
    buffer->queue = (int*) malloc(size * sizeof(int)) ;
}

void add_to_buffer(struct MyBuffer *buffer)
{
    if (buffer->index != buffer->size)
    {            
        buffer->queue[buffer->index] = 1;
        buffer->index++;
    }
}

void remove_from_buffer(struct MyBuffer *buffer)
{
    if (buffer->index != 0) 
            buffer->index--;
}

void P1()
{
    printf("P1 fired:\n");
    remove_from_buffer(&buffer_c);
    remove_from_buffer(&buffer_c);
    remove_from_buffer(&buffer_c);
    remove_from_buffer(&buffer_c);
    printf("c -= 4\n");
    remove_from_buffer(&buffer_d);
    remove_from_buffer(&buffer_d);
    printf("d -= 2\n");
    add_to_buffer(&buffer_a);
    add_to_buffer(&buffer_a);
    printf("a += 2\n");
}

void P2()
{
    printf("P2 fired:\n");
    remove_from_buffer(&buffer_a);
    printf("a -= 1\n");
    add_to_buffer(&buffer_b);
    add_to_buffer(&buffer_b);
    printf("b += 2\n");
}

void P3()
{
    printf("P3 fired:\n");
    remove_from_buffer(&buffer_b);
    remove_from_buffer(&buffer_b);
    remove_from_buffer(&buffer_b);
    remove_from_buffer(&buffer_b);
    printf("b -= 4\n");
    add_to_buffer(&buffer_c);
    add_to_buffer(&buffer_c);
    add_to_buffer(&buffer_c);
    add_to_buffer(&buffer_c);
    printf("c += 4\n");
    add_to_buffer(&buffer_e);
    add_to_buffer(&buffer_e);
    printf("e += 2\n");
}

void P4()
{
    printf("P4 fired:\n");
    remove_from_buffer(&buffer_e);
    printf("e -= 1\n");
    add_to_buffer(&buffer_d);
    printf("d += 1\n");
}

int main()
{
    buffer_constructor(&buffer_a, 2);
    buffer_constructor(&buffer_b, 4);
    buffer_constructor(&buffer_c, 4);
    buffer_constructor(&buffer_d, 2);
    buffer_constructor(&buffer_e, 2);

    while (1) {
        P2();
        P2();
        P3();
        P4();
        P4();
        P1();
        printf("\n");
    }
}