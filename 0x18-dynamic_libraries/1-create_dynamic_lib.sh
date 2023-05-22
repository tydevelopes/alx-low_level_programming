#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -c -fPIC *.c
gcc -shared -o liball.so *.o
