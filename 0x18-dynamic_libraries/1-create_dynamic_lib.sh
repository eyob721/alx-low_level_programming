#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -fPIC -shared ./*.c -o liball.so
