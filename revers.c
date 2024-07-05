#include "push_swap.h"
void    reverse_rotate(t_node    **stack)
{
    if (stack && *stack && (*stack)->next) 
    {
        t_node    *tail;
        t_node    *before_tail;
        t_node    *tmp;

        tail = get_last_node(*stack);
        before_tail = get_before_last_node(*stack);
        
        tmp = *stack;
        *stack = tail;
        (*stack)->next = tmp;
        before_tail->next= NULL;
    }
}
void    rra(t_node    **stack_a)
{
    reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}

void    rrb(t_node    **stack_b)
{
    reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}

void    rrr(t_node    **stack_a, t_node    **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    write(1, "rrr\n", 4);
}

int main() {

    t_node  *stack_a = create_node(1);
    stack_a->next = create_node(2);
    stack_a->next->next = create_node(3);


    printf("Stack A: ");
    print_stack(stack_a);

    rra(&stack_a);
    printf("Stack A after rra: ");
    print_stack(stack_a);

    return 0;
}