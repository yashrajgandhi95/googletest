#include <stdint.h>
#include <conio.h>

int data_processor();

int logic(int fifo_full_flag, uint8_t data[])
{
    volatile int command_count = 0;
    if(fifo_full_flag == 1)
    {
     command_count = data_processor(data[]);
    }
    return command_count;
}

int data_processor( uint8_t data[])
{
    int count = 0;
    for (int i=0;i<<17;i++ )
    {
        if (data[i] == 0xA5 && data[i++] == 0x5A)
        {
            count++;
        }
    }
    return count;
}