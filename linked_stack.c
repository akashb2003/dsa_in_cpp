#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
} * top = NULL;

int isFull()
{
    struct node * p = (struct node*)malloc(sizeof(struct node));
    if(p == NULL)
    return 1;
    return 0;
}

void push(int data)
{
    struct node * p = (struct node*)malloc(sizeof(struct node));
    if(isFull())
    {
        printf("Stack overflow\n");
    }
    
    else
    {
        p->data = data;
        p->next = top;
        top =  p;
    }
}

int isEmpty()
{
    if(top == NULL)
    return 1;
    return 0;
}

void pop()
{
    if(isEmpty())
    {
    printf("stack underflow\n");
    }
    else
    {
        struct node* p = top;
        int r = top->data;
        top = top->next;
        free(p); p = NULL;
        printf("\n\n%d is poped\n",r);
    }
}

void displaylist(struct node * top)
{
    struct node* p = top;
    if(isEmpty())
    printf("\n\nstack underflow\n");
    else
    {
    printf("\n\nStack\n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
    }
}

void peak()
{
    if(isEmpty())
    printf("\nstack underflow\n");
    else
    printf("\npeak element is %d\n",top->data);
}

int main()
{
     while(1)
     {
         printf("\nEnter a choice\n1.push\n2.pop\n3.display\n4.peak element\nEnter any other num to exit\n");
         int ch,data; scanf("%d", &ch);
         switch(ch)
         {
             case 1: printf("Enetr the data to be pushed\n");
                     scanf("%d",&data); push(data); break;
             case 2: pop();break;
             case 3: displaylist(top);break;
             case 4: peak();break;
             default : exit(0);break;
         }
     }
    return 0;
}

