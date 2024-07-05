#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
# include <limits.h>
# include <stddef.h>
# include <string.h>

typedef struct s_node{
    int value;
    struct s_node *next;
}t_node;

typedef struct s_vari{
    int i;
    int j;
}t_vari;
void error(char *str);
int  check_digit(char *str);
int find_space(char *str);
//🔁 swap function:
int ft_sawp(t_node stack_a,t_node stack_b);
void sa(t_node  **stack_a);
void sb(t_node  **stack_b);
void ss(t_node  **stack_a, t_node  **stack_b);

#endif