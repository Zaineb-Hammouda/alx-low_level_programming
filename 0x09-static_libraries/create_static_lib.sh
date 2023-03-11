#!/bin/bash

gcc -Wall -pedantic -std=gnu89 -Werror -Wextra -c *.c

ar -rc liball.a *.o

ranlib liball.a
