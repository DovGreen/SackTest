#include "test1.h"

/**
* Dov Greenwald 311600274
*/
/**
* 
* @params push
* @params pop
* 
* @return 0 - when terminates.
*/


/*
*Linked List Implementation of stack
*/

int main()
{
    struct Stack* top = NULL;
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    return 0;
}

