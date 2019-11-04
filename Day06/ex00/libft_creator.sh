#!/bin/sh

gcc -Wall -Werror -Wextra -c ft_putchar.c
gcc -Wall -Werror -Wextra -c ft_swap.c
gcc -Wall -Werror -Wextra -c ft_putstr.c
gcc -Wall -Werror -Wextra -c ft_strlen.c
gcc -Wall -Werror -Wextra -c ft_strcmp.c
ar rc libft.a ./ft_*.o
