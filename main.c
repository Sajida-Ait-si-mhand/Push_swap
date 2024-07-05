#include "push_swap.h"


int main(int ac, char *av[])
{
    t_vari data; 
    data.i = 1;
    data.j = 1;
    
    if (!(1 < ac))
        error ("Parametre Error");
    
    while (data.i < ac)
    {
        if (check_digit(av[data.i]) != 0 || find_space(av[data.i]) != 0)
            error("Error\n");
        // you need split (parcing part) (for 99 arg)

        data.i++;
    }
    return(0);
}
