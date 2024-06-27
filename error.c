#include "push_swap.h"

void error(char *str)
{
    write(2, str, ft_strlen(str));
    exit(0);
}
int find_space(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0') 
        return (1);
    while (str[i] != '\0' && str[i] == ' ')
    {
        if (str[i + 1] == '\0')
            return (1);
        i++;
    }
    return (0);
}
int  check_digit(char *str)
{
    int i;

    i = 0;
    while (str[i] && ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '+' || str[i] == '-')
        {
            if ((i > 0 && str[i - 1] != ' ') || (str [i + 1] == '\0' || str [i + 1] == ' '))
                return (1);
        }
        if (str[i + 1] == '\0')
            return (0);
        i++;
    }
    return (1);
}
