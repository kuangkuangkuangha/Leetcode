#include <stdio.h>

struct stack
{
    int top;
    char data[100];   
};



void push(struct stack *p, char data)
{
    p->top+=1;
    p->data[p->top]=data;
}

void show(struct stack *p)
{
    for(int i=0; i<p->top; i++)
    {
        printf("%c\n", p->data[p->top-1]);
        p->top--;
    }
}



int main()
{
    struct stack reverse;
    reverse.top=-1;
    push(&reverse, 'h');
    push(&reverse, 'e');
    push(&reverse, 'l');
    push(&reverse, 'l');
    push(&reverse, 'o');

    show(&reverse);
    
}