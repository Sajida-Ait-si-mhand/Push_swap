#include "push_swap.h"





int main(int ac, char *av[])
{
    t_vari data; 
    data.i = 1;
    data.j = 1;
    
    if (1 == ac || (ac == 2 && !av[1][0]))
        return(error ("Parametre Error"), 1);
    while (data.i < ac)
    {
        if (check_digit(av[data.i]) == 1 || find_space(av[data.i]) == 1)
            error("Error \n");
        // you need split (parcing part) (for 99 arg)
        // else if (ac == 2)
        //     av = ft_split(av[1], ' ');
        // while (av[data.i] == av[data.i++])
        // {
        //     error("Error\n");
        // }
        // data.i++;
    }
    return(0);
}
