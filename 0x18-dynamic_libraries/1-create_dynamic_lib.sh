#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c $(ls *.c | grep -v '0-main.c')
gcc -shared -o liball.so *.o
