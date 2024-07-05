#include "push_swap.h"

void    swap(t_node **stack)
{
    if (stack && *stack && (*stack)->next)
    {
        t_node  *head;
        t_node  *next_node;
        int tmp;

        head = *stack;
        next_node = head->next;

        tmp = head->value;
        head->value = next_node->value;
        next_node->value = tmp;
    }
}
void sa(t_node  **stack_a)
{
    swap(stack_a);
    write(1, "sa\n", 3);
}
void sb(t_node  **stack_b)
{
    swap(stack_b);
    write(1, "sb\n", 3);
}
void ss(t_node  **stack_a, t_node  **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
}

int main() {
    printf("ALLLLLLO");
    // Create some nodes for testing
    t_node *node1 = (t_node *)malloc(sizeof(t_node));
    t_node *node2 = (t_node *)malloc(sizeof(t_node));
    t_node *node3 = (t_node *)malloc(sizeof(t_node));

    // Initialize node values
    node1->value = 10;
    node2->value = 20;
    node3->value = 30;

    // Link nodes together to form a stack
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Print initial stack values
    printf("Initial stack:\n");
    printf("node1->value: %d\n", node1->value);
    printf("node2->value: %d\n", node2->value);
    printf("node3->value: %d\n", node3->value);

    // Test swap function
    t_node **stack_a = &node1;
    sa(stack_a);
    printf("After sa(stack_a):\n");
    printf("node1->value: %d\n", node1->value);
    printf("node2->value: %d\n", node2->value);
    printf("node3->value: %d\n", node3->value);

    // Test ss function with two stacks
    t_node **stack_b = &node2;
    ss(stack_a, stack_b);
    printf("After ss(stack_a, stack_b):\n");
    printf("node1->value: %d\n", node1->value);
    printf("node2->value: %d\n", node2->value);
    printf("node3->value: %d\n", node3->value);

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);
    printf("ALLLLLLO");

    return 0;
}