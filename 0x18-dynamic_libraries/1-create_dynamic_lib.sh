#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o
