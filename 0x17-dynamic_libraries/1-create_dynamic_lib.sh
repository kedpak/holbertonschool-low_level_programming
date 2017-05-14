#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -FPIC -c *.c
gcc -shared -o liball.so *.o
