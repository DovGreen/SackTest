#include "test1.h"


void my_stack(struct Stack*);

struct Stack* push(struct Stack* top, int data)
{
    struct Stack* temp;
    temp = (struct Stack*)malloc(sizeof(struct Stack));
    temp->data = data;
    temp->link = top;
    top = temp;
    printf("%d is pushed in stack\n", top->data);
    my_stack(top);
    return top;
}

struct Stack* pop(struct Stack* top)
{
    struct Stack* temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack Empty!Nothing To Pop\n");
        return 0;
    }

    top = top->link;
    printf("%d is removed from stack\n", temp->data);
    free(temp);
    my_stack(top);
    return top;
}

void peek(struct Stack* top)
{
    if (top == NULL)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Top Item=%d", top->data);
    }

}

void my_stack(struct Stack* top)
{
    struct Stack* temp = top;
    if (top == NULL)
    {
        top == 0;
    }
    printf("Your Current Stack:\n");
    printf("       \n");
    while (temp != NULL)
    {
        printf("-------\n|  %d  |\n-------\n", temp->data);
        temp = temp->link;
    }
}