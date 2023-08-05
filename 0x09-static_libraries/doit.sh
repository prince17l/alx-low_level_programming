#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89  *.c
ar rcs libmy.a *.o
ranlib libmy.a
