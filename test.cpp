#include "logic.h"
#include <stdint.h>
#include <conio.h>
#include <windows.h>
#include"gtest/gtest.h"

#define volatile boolean fifo_full_flag
#define data(uint8_t[]) = {0xff, 0xff, 0xA5, 0x5A, 0x01, 0x0F, 0xA5, 0x5A, 0xff, 0xff, 0xA5, 0x5A, 0x01, 0x0F, 0xA5, 0x5A }
