#pragma once

#include <stdio.h>
#include<malloc.h>

/**
 * @brief 
 * @params data - the data pushing or poppinh
 * @params link - the link i order to make the stack
*/

struct Stack
{
    int data;
    struct Stack* link;
};

/*where my stack gets creatd and deleted*/
void my_stack(struct Stack*);
/*push*/
struct Stack* push(struct Stack* top, int data);

/*pop*/
struct Stack* pop(struct Stack* top);
