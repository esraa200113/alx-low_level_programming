#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create a static library named liball.a from the generated object files
ar rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up: remove the object files
rm *.o

