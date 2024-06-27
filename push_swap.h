#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
# include <limits.h>
# include <stddef.h>
# include <string.h>

typedef struct s_varibales
{
    int i;
    int j;

}t_vari;
void error(char *str);
int  check_digit(char *str);
int find_space(char *str);

#endif