#!/bin/bash
<<<<<<< HEAD
gcc -c [1;2j*.c
ar rc liball.a *.o
rm *.o
||||||| 9b46de3
gcc -Wall -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a

=======
gcc -c *.c
ar rc liball.a *.o
rm *.o
>>>>>>> 993fcd2a71a31890d985055af2cc012a9ae34e98
