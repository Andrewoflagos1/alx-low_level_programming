#!/bin/bash
  2 gcc -Wall -pedantic -Werror -Wextra -c *.c
  3 ar -rc liball.a *.o
  4 ranlib liball.a
